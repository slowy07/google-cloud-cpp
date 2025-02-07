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
// source:
// google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_INTERNAL_CLIENT_CONNECTOR_SERVICES_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_INTERNAL_CLIENT_CONNECTOR_SERVICES_TRACING_CONNECTION_H

#include "google/cloud/beyondcorp/client_connector_services_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ClientConnectorServicesServiceTracingConnection
    : public beyondcorp::ClientConnectorServicesServiceConnection {
 public:
  ~ClientConnectorServicesServiceTracingConnection() override = default;

  explicit ClientConnectorServicesServiceTracingConnection(
      std::shared_ptr<beyondcorp::ClientConnectorServicesServiceConnection>
          child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::beyondcorp::clientconnectorservices::v1::
                  ClientConnectorService>
  ListClientConnectorServices(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          ListClientConnectorServicesRequest request) override;

  StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
               ClientConnectorService>
  GetClientConnectorService(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          GetClientConnectorServiceRequest const& request) override;

  future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                      ClientConnectorService>>
  CreateClientConnectorService(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          CreateClientConnectorServiceRequest const& request) override;

  future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                      ClientConnectorService>>
  UpdateClientConnectorService(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          UpdateClientConnectorServiceRequest const& request) override;

  future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                      ClientConnectorServiceOperationMetadata>>
  DeleteClientConnectorService(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          DeleteClientConnectorServiceRequest const& request) override;

 private:
  std::shared_ptr<beyondcorp::ClientConnectorServicesServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_INTERNAL_CLIENT_CONNECTOR_SERVICES_TRACING_CONNECTION_H
