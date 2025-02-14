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
// source: google/cloud/gkemulticloud/v1/azure_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_AZURE_CLUSTERS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_AZURE_CLUSTERS_CONNECTION_IMPL_H

#include "google/cloud/gkemulticloud/v1/azure_clusters_connection.h"
#include "google/cloud/gkemulticloud/v1/azure_clusters_connection_idempotency_policy.h"
#include "google/cloud/gkemulticloud/v1/azure_clusters_options.h"
#include "google/cloud/gkemulticloud/v1/internal/azure_clusters_retry_traits.h"
#include "google/cloud/gkemulticloud/v1/internal/azure_clusters_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AzureClustersConnectionImpl
    : public gkemulticloud_v1::AzureClustersConnection {
 public:
  ~AzureClustersConnectionImpl() override = default;

  AzureClustersConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<gkemulticloud_v1_internal::AzureClustersStub> stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::gkemulticloud::v1::AzureClient>>
  CreateAzureClient(
      google::cloud::gkemulticloud::v1::CreateAzureClientRequest const& request)
      override;

  StatusOr<google::cloud::gkemulticloud::v1::AzureClient> GetAzureClient(
      google::cloud::gkemulticloud::v1::GetAzureClientRequest const& request)
      override;

  StreamRange<google::cloud::gkemulticloud::v1::AzureClient> ListAzureClients(
      google::cloud::gkemulticloud::v1::ListAzureClientsRequest request)
      override;

  future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
  DeleteAzureClient(
      google::cloud::gkemulticloud::v1::DeleteAzureClientRequest const& request)
      override;

  future<StatusOr<google::cloud::gkemulticloud::v1::AzureCluster>>
  CreateAzureCluster(
      google::cloud::gkemulticloud::v1::CreateAzureClusterRequest const&
          request) override;

  future<StatusOr<google::cloud::gkemulticloud::v1::AzureCluster>>
  UpdateAzureCluster(
      google::cloud::gkemulticloud::v1::UpdateAzureClusterRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::AzureCluster> GetAzureCluster(
      google::cloud::gkemulticloud::v1::GetAzureClusterRequest const& request)
      override;

  StreamRange<google::cloud::gkemulticloud::v1::AzureCluster> ListAzureClusters(
      google::cloud::gkemulticloud::v1::ListAzureClustersRequest request)
      override;

  future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
  DeleteAzureCluster(
      google::cloud::gkemulticloud::v1::DeleteAzureClusterRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::GenerateAzureAccessTokenResponse>
  GenerateAzureAccessToken(
      google::cloud::gkemulticloud::v1::GenerateAzureAccessTokenRequest const&
          request) override;

  future<StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool>>
  CreateAzureNodePool(
      google::cloud::gkemulticloud::v1::CreateAzureNodePoolRequest const&
          request) override;

  future<StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool>>
  UpdateAzureNodePool(
      google::cloud::gkemulticloud::v1::UpdateAzureNodePoolRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool> GetAzureNodePool(
      google::cloud::gkemulticloud::v1::GetAzureNodePoolRequest const& request)
      override;

  StreamRange<google::cloud::gkemulticloud::v1::AzureNodePool>
  ListAzureNodePools(google::cloud::gkemulticloud::v1::ListAzureNodePoolsRequest
                         request) override;

  future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
  DeleteAzureNodePool(
      google::cloud::gkemulticloud::v1::DeleteAzureNodePoolRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::AzureServerConfig>
  GetAzureServerConfig(
      google::cloud::gkemulticloud::v1::GetAzureServerConfigRequest const&
          request) override;

 private:
  std::unique_ptr<gkemulticloud_v1::AzureClustersRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<gkemulticloud_v1::AzureClustersRetryPolicyOption>()) {
      return options.get<gkemulticloud_v1::AzureClustersRetryPolicyOption>()
          ->clone();
    }
    return options_.get<gkemulticloud_v1::AzureClustersRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<gkemulticloud_v1::AzureClustersBackoffPolicyOption>()) {
      return options.get<gkemulticloud_v1::AzureClustersBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<gkemulticloud_v1::AzureClustersBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<gkemulticloud_v1::AzureClustersConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<gkemulticloud_v1::
                        AzureClustersConnectionIdempotencyPolicyOption>()) {
      return options
          .get<gkemulticloud_v1::
                   AzureClustersConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<gkemulticloud_v1::AzureClustersConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<gkemulticloud_v1::AzureClustersPollingPolicyOption>()) {
      return options.get<gkemulticloud_v1::AzureClustersPollingPolicyOption>()
          ->clone();
    }
    return options_.get<gkemulticloud_v1::AzureClustersPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<gkemulticloud_v1_internal::AzureClustersStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_AZURE_CLUSTERS_CONNECTION_IMPL_H
