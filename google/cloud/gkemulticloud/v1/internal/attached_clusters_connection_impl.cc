// Copyright 2023 Google LLC
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
// source: google/cloud/gkemulticloud/v1/attached_service.proto

#include "google/cloud/gkemulticloud/v1/internal/attached_clusters_connection_impl.h"
#include "google/cloud/gkemulticloud/v1/internal/attached_clusters_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AttachedClustersConnectionImpl::AttachedClustersConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<gkemulticloud_v1_internal::AttachedClustersStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      AttachedClustersConnection::options())) {}

future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>
AttachedClustersConnectionImpl::CreateAttachedCluster(
    google::cloud::gkemulticloud::v1::CreateAttachedClusterRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkemulticloud::v1::AttachedCluster>(
      background_->cq(), request,
      [stub](
          google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::cloud::gkemulticloud::v1::CreateAttachedClusterRequest const&
              request) {
        return stub->AsyncCreateAttachedCluster(cq, std::move(context),
                                                request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::gkemulticloud::v1::AttachedCluster>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateAttachedCluster(request), polling_policy(),
      __func__);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>
AttachedClustersConnectionImpl::UpdateAttachedCluster(
    google::cloud::gkemulticloud::v1::UpdateAttachedClusterRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkemulticloud::v1::AttachedCluster>(
      background_->cq(), request,
      [stub](
          google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::cloud::gkemulticloud::v1::UpdateAttachedClusterRequest const&
              request) {
        return stub->AsyncUpdateAttachedCluster(cq, std::move(context),
                                                request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::gkemulticloud::v1::AttachedCluster>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateAttachedCluster(request), polling_policy(),
      __func__);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>
AttachedClustersConnectionImpl::ImportAttachedCluster(
    google::cloud::gkemulticloud::v1::ImportAttachedClusterRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkemulticloud::v1::AttachedCluster>(
      background_->cq(), request,
      [stub](
          google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::cloud::gkemulticloud::v1::ImportAttachedClusterRequest const&
              request) {
        return stub->AsyncImportAttachedCluster(cq, std::move(context),
                                                request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::gkemulticloud::v1::AttachedCluster>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->ImportAttachedCluster(request), polling_policy(),
      __func__);
}

StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>
AttachedClustersConnectionImpl::GetAttachedCluster(
    google::cloud::gkemulticloud::v1::GetAttachedClusterRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetAttachedCluster(request),
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::GetAttachedClusterRequest const&
                 request) {
        return stub_->GetAttachedCluster(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::gkemulticloud::v1::AttachedCluster>
AttachedClustersConnectionImpl::ListAttachedClusters(
    google::cloud::gkemulticloud::v1::ListAttachedClustersRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<gkemulticloud_v1::AttachedClustersRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListAttachedClusters(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::gkemulticloud::v1::AttachedCluster>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::gkemulticloud::v1::ListAttachedClustersRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::gkemulticloud::v1::
                       ListAttachedClustersRequest const& request) {
              return stub->ListAttachedClusters(context, request);
            },
            r, function_name);
      },
      [](google::cloud::gkemulticloud::v1::ListAttachedClustersResponse r) {
        std::vector<google::cloud::gkemulticloud::v1::AttachedCluster> result(
            r.attached_clusters().size());
        auto& messages = *r.mutable_attached_clusters();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AttachedClustersConnectionImpl::DeleteAttachedCluster(
    google::cloud::gkemulticloud::v1::DeleteAttachedClusterRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkemulticloud::v1::OperationMetadata>(
      background_->cq(), request,
      [stub](
          google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::cloud::gkemulticloud::v1::DeleteAttachedClusterRequest const&
              request) {
        return stub->AsyncDeleteAttachedCluster(cq, std::move(context),
                                                request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::gkemulticloud::v1::OperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteAttachedCluster(request), polling_policy(),
      __func__);
}

StatusOr<google::cloud::gkemulticloud::v1::AttachedServerConfig>
AttachedClustersConnectionImpl::GetAttachedServerConfig(
    google::cloud::gkemulticloud::v1::GetAttachedServerConfigRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetAttachedServerConfig(request),
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::
                 GetAttachedServerConfigRequest const& request) {
        return stub_->GetAttachedServerConfig(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::gkemulticloud::v1::
             GenerateAttachedClusterInstallManifestResponse>
AttachedClustersConnectionImpl::GenerateAttachedClusterInstallManifest(
    google::cloud::gkemulticloud::v1::
        GenerateAttachedClusterInstallManifestRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GenerateAttachedClusterInstallManifest(request),
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::
                 GenerateAttachedClusterInstallManifestRequest const& request) {
        return stub_->GenerateAttachedClusterInstallManifest(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google