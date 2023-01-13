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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_AZURE_CLUSTERS_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_AZURE_CLUSTERS_METADATA_DECORATOR_H

#include "google/cloud/gkemulticloud/v1/internal/azure_clusters_stub.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AzureClustersMetadata : public AzureClustersStub {
 public:
  ~AzureClustersMetadata() override = default;
  explicit AzureClustersMetadata(std::shared_ptr<AzureClustersStub> child);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateAzureClient(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkemulticloud::v1::CreateAzureClientRequest const& request)
      override;

  StatusOr<google::cloud::gkemulticloud::v1::AzureClient> GetAzureClient(
      grpc::ClientContext& context,
      google::cloud::gkemulticloud::v1::GetAzureClientRequest const& request)
      override;

  StatusOr<google::cloud::gkemulticloud::v1::ListAzureClientsResponse>
  ListAzureClients(
      grpc::ClientContext& context,
      google::cloud::gkemulticloud::v1::ListAzureClientsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteAzureClient(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkemulticloud::v1::DeleteAzureClientRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateAzureCluster(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkemulticloud::v1::CreateAzureClusterRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateAzureCluster(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkemulticloud::v1::UpdateAzureClusterRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::AzureCluster> GetAzureCluster(
      grpc::ClientContext& context,
      google::cloud::gkemulticloud::v1::GetAzureClusterRequest const& request)
      override;

  StatusOr<google::cloud::gkemulticloud::v1::ListAzureClustersResponse>
  ListAzureClusters(
      grpc::ClientContext& context,
      google::cloud::gkemulticloud::v1::ListAzureClustersRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteAzureCluster(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkemulticloud::v1::DeleteAzureClusterRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::GenerateAzureAccessTokenResponse>
  GenerateAzureAccessToken(
      grpc::ClientContext& context,
      google::cloud::gkemulticloud::v1::GenerateAzureAccessTokenRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateAzureNodePool(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkemulticloud::v1::CreateAzureNodePoolRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateAzureNodePool(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkemulticloud::v1::UpdateAzureNodePoolRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool> GetAzureNodePool(
      grpc::ClientContext& context,
      google::cloud::gkemulticloud::v1::GetAzureNodePoolRequest const& request)
      override;

  StatusOr<google::cloud::gkemulticloud::v1::ListAzureNodePoolsResponse>
  ListAzureNodePools(
      grpc::ClientContext& context,
      google::cloud::gkemulticloud::v1::ListAzureNodePoolsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteAzureNodePool(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkemulticloud::v1::DeleteAzureNodePoolRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::AzureServerConfig>
  GetAzureServerConfig(
      grpc::ClientContext& context,
      google::cloud::gkemulticloud::v1::GetAzureServerConfigRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context);

  std::shared_ptr<AzureClustersStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_AZURE_CLUSTERS_METADATA_DECORATOR_H