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
// source: google/cloud/edgecontainer/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EDGECONTAINER_INTERNAL_EDGE_CONTAINER_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EDGECONTAINER_INTERNAL_EDGE_CONTAINER_TRACING_CONNECTION_H

#include "google/cloud/edgecontainer/edge_container_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace edgecontainer_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class EdgeContainerTracingConnection
    : public edgecontainer::EdgeContainerConnection {
 public:
  ~EdgeContainerTracingConnection() override = default;

  explicit EdgeContainerTracingConnection(
      std::shared_ptr<edgecontainer::EdgeContainerConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::edgecontainer::v1::Cluster> ListClusters(
      google::cloud::edgecontainer::v1::ListClustersRequest request) override;

  StatusOr<google::cloud::edgecontainer::v1::Cluster> GetCluster(
      google::cloud::edgecontainer::v1::GetClusterRequest const& request)
      override;

  future<StatusOr<google::cloud::edgecontainer::v1::Cluster>> CreateCluster(
      google::cloud::edgecontainer::v1::CreateClusterRequest const& request)
      override;

  future<StatusOr<google::cloud::edgecontainer::v1::Cluster>> UpdateCluster(
      google::cloud::edgecontainer::v1::UpdateClusterRequest const& request)
      override;

  future<StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>
  DeleteCluster(google::cloud::edgecontainer::v1::DeleteClusterRequest const&
                    request) override;

  StatusOr<google::cloud::edgecontainer::v1::GenerateAccessTokenResponse>
  GenerateAccessToken(
      google::cloud::edgecontainer::v1::GenerateAccessTokenRequest const&
          request) override;

  StreamRange<google::cloud::edgecontainer::v1::NodePool> ListNodePools(
      google::cloud::edgecontainer::v1::ListNodePoolsRequest request) override;

  StatusOr<google::cloud::edgecontainer::v1::NodePool> GetNodePool(
      google::cloud::edgecontainer::v1::GetNodePoolRequest const& request)
      override;

  future<StatusOr<google::cloud::edgecontainer::v1::NodePool>> CreateNodePool(
      google::cloud::edgecontainer::v1::CreateNodePoolRequest const& request)
      override;

  future<StatusOr<google::cloud::edgecontainer::v1::NodePool>> UpdateNodePool(
      google::cloud::edgecontainer::v1::UpdateNodePoolRequest const& request)
      override;

  future<StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>
  DeleteNodePool(google::cloud::edgecontainer::v1::DeleteNodePoolRequest const&
                     request) override;

  StreamRange<google::cloud::edgecontainer::v1::Machine> ListMachines(
      google::cloud::edgecontainer::v1::ListMachinesRequest request) override;

  StatusOr<google::cloud::edgecontainer::v1::Machine> GetMachine(
      google::cloud::edgecontainer::v1::GetMachineRequest const& request)
      override;

  StreamRange<google::cloud::edgecontainer::v1::VpnConnection>
  ListVpnConnections(google::cloud::edgecontainer::v1::ListVpnConnectionsRequest
                         request) override;

  StatusOr<google::cloud::edgecontainer::v1::VpnConnection> GetVpnConnection(
      google::cloud::edgecontainer::v1::GetVpnConnectionRequest const& request)
      override;

  future<StatusOr<google::cloud::edgecontainer::v1::VpnConnection>>
  CreateVpnConnection(
      google::cloud::edgecontainer::v1::CreateVpnConnectionRequest const&
          request) override;

  future<StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>
  DeleteVpnConnection(
      google::cloud::edgecontainer::v1::DeleteVpnConnectionRequest const&
          request) override;

 private:
  std::shared_ptr<edgecontainer::EdgeContainerConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace edgecontainer_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EDGECONTAINER_INTERNAL_EDGE_CONTAINER_TRACING_CONNECTION_H