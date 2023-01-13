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
// source: google/cloud/connectors/v1/connectors_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONNECTORS_INTERNAL_CONNECTORS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONNECTORS_INTERNAL_CONNECTORS_TRACING_CONNECTION_H

#include "google/cloud/connectors/connectors_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace connectors_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ConnectorsTracingConnection : public connectors::ConnectorsConnection {
 public:
  ~ConnectorsTracingConnection() override = default;

  explicit ConnectorsTracingConnection(
      std::shared_ptr<connectors::ConnectorsConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::connectors::v1::Connection> ListConnections(
      google::cloud::connectors::v1::ListConnectionsRequest request) override;

  StatusOr<google::cloud::connectors::v1::Connection> GetConnection(
      google::cloud::connectors::v1::GetConnectionRequest const& request)
      override;

  future<StatusOr<google::cloud::connectors::v1::Connection>> CreateConnection(
      google::cloud::connectors::v1::CreateConnectionRequest const& request)
      override;

  future<StatusOr<google::cloud::connectors::v1::Connection>> UpdateConnection(
      google::cloud::connectors::v1::UpdateConnectionRequest const& request)
      override;

  future<StatusOr<google::cloud::connectors::v1::OperationMetadata>>
  DeleteConnection(google::cloud::connectors::v1::DeleteConnectionRequest const&
                       request) override;

  StreamRange<google::cloud::connectors::v1::Provider> ListProviders(
      google::cloud::connectors::v1::ListProvidersRequest request) override;

  StatusOr<google::cloud::connectors::v1::Provider> GetProvider(
      google::cloud::connectors::v1::GetProviderRequest const& request)
      override;

  StreamRange<google::cloud::connectors::v1::Connector> ListConnectors(
      google::cloud::connectors::v1::ListConnectorsRequest request) override;

  StatusOr<google::cloud::connectors::v1::Connector> GetConnector(
      google::cloud::connectors::v1::GetConnectorRequest const& request)
      override;

  StreamRange<google::cloud::connectors::v1::ConnectorVersion>
  ListConnectorVersions(
      google::cloud::connectors::v1::ListConnectorVersionsRequest request)
      override;

  StatusOr<google::cloud::connectors::v1::ConnectorVersion> GetConnectorVersion(
      google::cloud::connectors::v1::GetConnectorVersionRequest const& request)
      override;

  StatusOr<google::cloud::connectors::v1::ConnectionSchemaMetadata>
  GetConnectionSchemaMetadata(
      google::cloud::connectors::v1::GetConnectionSchemaMetadataRequest const&
          request) override;

  StreamRange<google::cloud::connectors::v1::RuntimeEntitySchema>
  ListRuntimeEntitySchemas(
      google::cloud::connectors::v1::ListRuntimeEntitySchemasRequest request)
      override;

  StreamRange<google::cloud::connectors::v1::RuntimeActionSchema>
  ListRuntimeActionSchemas(
      google::cloud::connectors::v1::ListRuntimeActionSchemasRequest request)
      override;

  StatusOr<google::cloud::connectors::v1::RuntimeConfig> GetRuntimeConfig(
      google::cloud::connectors::v1::GetRuntimeConfigRequest const& request)
      override;

 private:
  std::shared_ptr<connectors::ConnectorsConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace connectors_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONNECTORS_INTERNAL_CONNECTORS_TRACING_CONNECTION_H