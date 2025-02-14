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
// source: google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_INTERNAL_APP_CONNECTORS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_INTERNAL_APP_CONNECTORS_TRACING_CONNECTION_H

#include "google/cloud/beyondcorp/app_connectors_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class AppConnectorsServiceTracingConnection
    : public beyondcorp::AppConnectorsServiceConnection {
 public:
  ~AppConnectorsServiceTracingConnection() override = default;

  explicit AppConnectorsServiceTracingConnection(
      std::shared_ptr<beyondcorp::AppConnectorsServiceConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::beyondcorp::appconnectors::v1::AppConnector>
  ListAppConnectors(
      google::cloud::beyondcorp::appconnectors::v1::ListAppConnectorsRequest
          request) override;

  StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>
  GetAppConnector(google::cloud::beyondcorp::appconnectors::v1::
                      GetAppConnectorRequest const& request) override;

  future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
  CreateAppConnector(google::cloud::beyondcorp::appconnectors::v1::
                         CreateAppConnectorRequest const& request) override;

  future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
  UpdateAppConnector(google::cloud::beyondcorp::appconnectors::v1::
                         UpdateAppConnectorRequest const& request) override;

  future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::
                      AppConnectorOperationMetadata>>
  DeleteAppConnector(google::cloud::beyondcorp::appconnectors::v1::
                         DeleteAppConnectorRequest const& request) override;

  future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
  ReportStatus(
      google::cloud::beyondcorp::appconnectors::v1::ReportStatusRequest const&
          request) override;

 private:
  std::shared_ptr<beyondcorp::AppConnectorsServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_INTERNAL_APP_CONNECTORS_TRACING_CONNECTION_H
