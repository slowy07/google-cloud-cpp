// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/pubsublite/v1/topic_stats.proto

#include "google/cloud/pubsublite/topic_stats_connection.h"
#include "google/cloud/pubsublite/internal/topic_stats_option_defaults.h"
#include "google/cloud/pubsublite/internal/topic_stats_stub_factory.h"
#include "google/cloud/pubsublite/topic_stats_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace pubsublite {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TopicStatsServiceConnection::~TopicStatsServiceConnection() = default;

StatusOr<google::cloud::pubsublite::v1::ComputeMessageStatsResponse>
TopicStatsServiceConnection::ComputeMessageStats(
    google::cloud::pubsublite::v1::ComputeMessageStatsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::pubsublite::v1::ComputeHeadCursorResponse>
TopicStatsServiceConnection::ComputeHeadCursor(
    google::cloud::pubsublite::v1::ComputeHeadCursorRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::pubsublite::v1::ComputeTimeCursorResponse>
TopicStatsServiceConnection::ComputeTimeCursor(
    google::cloud::pubsublite::v1::ComputeTimeCursorRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

namespace {
class TopicStatsServiceConnectionImpl : public TopicStatsServiceConnection {
 public:
  TopicStatsServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<pubsublite_internal::TopicStatsServiceStub> stub,
      Options const& options)
      : background_(std::move(background)),
        stub_(std::move(stub)),
        retry_policy_prototype_(
            options.get<TopicStatsServiceRetryPolicyOption>()->clone()),
        backoff_policy_prototype_(
            options.get<TopicStatsServiceBackoffPolicyOption>()->clone()),
        idempotency_policy_(
            options.get<TopicStatsServiceConnectionIdempotencyPolicyOption>()
                ->clone()) {}

  ~TopicStatsServiceConnectionImpl() override = default;

  StatusOr<google::cloud::pubsublite::v1::ComputeMessageStatsResponse>
  ComputeMessageStats(
      google::cloud::pubsublite::v1::ComputeMessageStatsRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->ComputeMessageStats(request),
        [this](grpc::ClientContext& context,
               google::cloud::pubsublite::v1::ComputeMessageStatsRequest const&
                   request) {
          return stub_->ComputeMessageStats(context, request);
        },
        request, __func__);
  }

  StatusOr<google::cloud::pubsublite::v1::ComputeHeadCursorResponse>
  ComputeHeadCursor(
      google::cloud::pubsublite::v1::ComputeHeadCursorRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->ComputeHeadCursor(request),
        [this](grpc::ClientContext& context,
               google::cloud::pubsublite::v1::ComputeHeadCursorRequest const&
                   request) {
          return stub_->ComputeHeadCursor(context, request);
        },
        request, __func__);
  }

  StatusOr<google::cloud::pubsublite::v1::ComputeTimeCursorResponse>
  ComputeTimeCursor(
      google::cloud::pubsublite::v1::ComputeTimeCursorRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->ComputeTimeCursor(request),
        [this](grpc::ClientContext& context,
               google::cloud::pubsublite::v1::ComputeTimeCursorRequest const&
                   request) {
          return stub_->ComputeTimeCursor(context, request);
        },
        request, __func__);
  }

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<pubsublite_internal::TopicStatsServiceStub> stub_;
  std::unique_ptr<TopicStatsServiceRetryPolicy const> retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<TopicStatsServiceConnectionIdempotencyPolicy>
      idempotency_policy_;
};
}  // namespace

std::shared_ptr<TopicStatsServiceConnection> MakeTopicStatsServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 TopicStatsServicePolicyOptionList>(options,
                                                                    __func__);
  options =
      pubsublite_internal::TopicStatsServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = pubsublite_internal::CreateDefaultTopicStatsServiceStub(
      background->cq(), options);
  return std::make_shared<TopicStatsServiceConnectionImpl>(
      std::move(background), std::move(stub), options);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<pubsublite::TopicStatsServiceConnection>
MakeTopicStatsServiceConnection(std::shared_ptr<TopicStatsServiceStub> stub,
                                Options options) {
  options = TopicStatsServiceDefaultOptions(std::move(options));
  return std::make_shared<pubsublite::TopicStatsServiceConnectionImpl>(
      internal::MakeBackgroundThreadsFactory(options)(), std::move(stub),
      std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google