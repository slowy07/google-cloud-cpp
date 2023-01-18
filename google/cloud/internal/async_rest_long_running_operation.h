// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_ASYNC_REST_LONG_RUNNING_OPERATION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_ASYNC_REST_LONG_RUNNING_OPERATION_H

#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/async_rest_polling_loop.h"
#include "google/cloud/internal/async_rest_retry_loop.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.pb.h>
#include <functional>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace rest_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

template <typename ReturnType>
using LongRunningOperationValueExtractor = std::function<StatusOr<ReturnType>(
    StatusOr<google::longrunning::Operation>, std::string const&)>;

/**
 * Asynchronously starts and polls a long-running operation.
 *
 * Long-running operations [aip/151] are used for API methods that take a
 * significant amount of time to complete (think minutes, maybe an hour). The
 * gRPC API returns a "promise" object, represented by the
 * `google::longrunning::Operation` proto, and the application (or client
 * library) should periodically poll this object until it is "done".
 *
 * In the C++ client libraries we represent these long-running operations by
 * a member function that returns `future<StatusOr<ReturnType>>`. This function
 * is a helper to implement these member functions. It first starts the
 * operation using an asynchronous retry loop, and then starts an asynchronous
 * loop to poll the operation until it completes.
 *
 * The promise can complete with an error, which is represented by a
 * `google::cloud::Status` object, or with success and some `ReturnType` value.
 * The application may also configure the "polling policy", which may stop the
 * polling even though the operation has not completed.
 *
 * Library developers would use this function as follows:
 *
 * @code
 * class BarRestStub {
 *  public:
 *   virtual future<StatusOr<google::longrunning::Operation>> AsyncFoo(
 *     google::cloud::CompletionQueue& cq,
 *     RestContext& context,
 *     FooRequest const& request) = 0;
 *
 *   virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
 *     google::cloud::CompletionQueue& cq,
 *     RestContext& context,
 *     google::longrunning::GetOperationRequest const& request) = 0;
 *   virtual future<Status> AsyncCancelOperation(
 *     google::cloud::CompletionQueue& cq,
 *     RestContext& context,
 *     google::longrunning::CancelOperationRequest const& request) = 0;
 * };
 * @endcode
 *
 * The corresponding `*RestConnectionImpl` class would look as follows:
 *
 * @code
 * class BarRestConnectionImpl : public BarConnection {
 *  public:
 *   // Using C++14 for exposition purposes. The implementation supports C++11.
 *   future<StatusOr<FooResponse>> Foo(FooRequest const& request) override {
 *     return google::cloud::internal::AsyncRestLongRunningOperation(
 *       cq_, request,
 *       [stub = stub_](auto& cq, auto context, auto const& request) {
 *         return stub->AsyncFoo(cq, context, request);
 *       },
 *       [stub = stub_](auto& cq, auto context, auto const& request) {
 *         return stub->AsyncGetOperation(cq, context, request);
 *       },
 *       [stub](auto cq, auto context, auto const& r) {
 *         return stub->AsyncCancelOperation(cq, context, r);
 *       },
 *       retry_policy_->clone(), backoff_policy_->clone(),
 *       IdempotencyPolicy::kIdempotent,
 *       polling_policy_->clone(),
 *       __func__ // for debugging
 *       );
 *   }
 *
 *  private:
 *    google::cloud::CompletionQueue cq_;
 *    std::shared_ptr<BarRestStub> stub_;
 * };
 * @endcode
 *
 * [aip/151]: https://google.aip.dev/151
 */
template <typename ReturnType, typename RequestType, typename StartFunctor,
          typename RetryPolicyType, typename CompletionQueue>
future<StatusOr<ReturnType>> AsyncRestLongRunningOperation(
    CompletionQueue cq, RequestType&& request, StartFunctor&& start,
    AsyncRestPollLongRunningOperation poll,
    AsyncRestCancelLongRunningOperation cancel,
    LongRunningOperationValueExtractor<ReturnType> value_extractor,
    std::unique_ptr<RetryPolicyType> retry_policy,
    std::unique_ptr<BackoffPolicy> backoff_policy, Idempotency idempotent,
    std::unique_ptr<PollingPolicy> polling_policy, char const* location) {
  using ::google::longrunning::Operation;
  auto operation =
      AsyncRestRetryLoop(std::move(retry_policy), std::move(backoff_policy),
                         idempotent, cq, std::forward<StartFunctor>(start),
                         std::forward<RequestType>(request), location);
  auto loc = std::string{location};
  return AsyncRestPollingLoop(std::move(cq), std::move(operation),
                              std::move(poll), std::move(cancel),
                              std::move(polling_policy), std::move(location))
      .then([value_extractor, loc](future<StatusOr<Operation>> g) {
        return value_extractor(g.get(), loc);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace rest_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_ASYNC_REST_LONG_RUNNING_OPERATION_H