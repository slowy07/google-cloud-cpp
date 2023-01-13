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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_AZURE_CLUSTERS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_AZURE_CLUSTERS_CONNECTION_H

#include "google/cloud/gkemulticloud/v1/azure_clusters_connection_idempotency_policy.h"
#include "google/cloud/gkemulticloud/v1/internal/azure_clusters_retry_traits.h"
#include "google/cloud/gkemulticloud/v1/internal/azure_clusters_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace gkemulticloud_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using AzureClustersRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        gkemulticloud_v1_internal::AzureClustersRetryTraits>;

using AzureClustersLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        gkemulticloud_v1_internal::AzureClustersRetryTraits>;

using AzureClustersLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        gkemulticloud_v1_internal::AzureClustersRetryTraits>;

/**
 * The `AzureClustersConnection` object for `AzureClustersClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `AzureClustersClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `AzureClustersClient`.
 *
 * To create a concrete instance, see `MakeAzureClustersConnection()`.
 *
 * For mocking, see `gkemulticloud_v1_mocks::MockAzureClustersConnection`.
 */
class AzureClustersConnection {
 public:
  virtual ~AzureClustersConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::gkemulticloud::v1::AzureClient>>
  CreateAzureClient(
      google::cloud::gkemulticloud::v1::CreateAzureClientRequest const&
          request);

  virtual StatusOr<google::cloud::gkemulticloud::v1::AzureClient>
  GetAzureClient(
      google::cloud::gkemulticloud::v1::GetAzureClientRequest const& request);

  virtual StreamRange<google::cloud::gkemulticloud::v1::AzureClient>
  ListAzureClients(
      google::cloud::gkemulticloud::v1::ListAzureClientsRequest request);

  virtual future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
  DeleteAzureClient(
      google::cloud::gkemulticloud::v1::DeleteAzureClientRequest const&
          request);

  virtual future<StatusOr<google::cloud::gkemulticloud::v1::AzureCluster>>
  CreateAzureCluster(
      google::cloud::gkemulticloud::v1::CreateAzureClusterRequest const&
          request);

  virtual future<StatusOr<google::cloud::gkemulticloud::v1::AzureCluster>>
  UpdateAzureCluster(
      google::cloud::gkemulticloud::v1::UpdateAzureClusterRequest const&
          request);

  virtual StatusOr<google::cloud::gkemulticloud::v1::AzureCluster>
  GetAzureCluster(
      google::cloud::gkemulticloud::v1::GetAzureClusterRequest const& request);

  virtual StreamRange<google::cloud::gkemulticloud::v1::AzureCluster>
  ListAzureClusters(
      google::cloud::gkemulticloud::v1::ListAzureClustersRequest request);

  virtual future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
  DeleteAzureCluster(
      google::cloud::gkemulticloud::v1::DeleteAzureClusterRequest const&
          request);

  virtual StatusOr<
      google::cloud::gkemulticloud::v1::GenerateAzureAccessTokenResponse>
  GenerateAzureAccessToken(
      google::cloud::gkemulticloud::v1::GenerateAzureAccessTokenRequest const&
          request);

  virtual future<StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool>>
  CreateAzureNodePool(
      google::cloud::gkemulticloud::v1::CreateAzureNodePoolRequest const&
          request);

  virtual future<StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool>>
  UpdateAzureNodePool(
      google::cloud::gkemulticloud::v1::UpdateAzureNodePoolRequest const&
          request);

  virtual StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool>
  GetAzureNodePool(
      google::cloud::gkemulticloud::v1::GetAzureNodePoolRequest const& request);

  virtual StreamRange<google::cloud::gkemulticloud::v1::AzureNodePool>
  ListAzureNodePools(
      google::cloud::gkemulticloud::v1::ListAzureNodePoolsRequest request);

  virtual future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
  DeleteAzureNodePool(
      google::cloud::gkemulticloud::v1::DeleteAzureNodePoolRequest const&
          request);

  virtual StatusOr<google::cloud::gkemulticloud::v1::AzureServerConfig>
  GetAzureServerConfig(
      google::cloud::gkemulticloud::v1::GetAzureServerConfigRequest const&
          request);
};

/**
 * A factory function to construct an object of type `AzureClustersConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of AzureClustersClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `AzureClustersConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::gkemulticloud_v1::AzureClustersPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `AzureClustersConnection` created by
 * this function.
 */
std::shared_ptr<AzureClustersConnection> MakeAzureClustersConnection(
    std::string const& location, Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_AZURE_CLUSTERS_CONNECTION_H