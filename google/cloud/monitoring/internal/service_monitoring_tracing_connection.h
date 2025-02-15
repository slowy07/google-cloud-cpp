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
// source: google/monitoring/v3/service_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_INTERNAL_SERVICE_MONITORING_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_INTERNAL_SERVICE_MONITORING_TRACING_CONNECTION_H

#include "google/cloud/monitoring/service_monitoring_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace monitoring_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ServiceMonitoringServiceTracingConnection
    : public monitoring::ServiceMonitoringServiceConnection {
 public:
  ~ServiceMonitoringServiceTracingConnection() override = default;

  explicit ServiceMonitoringServiceTracingConnection(
      std::shared_ptr<monitoring::ServiceMonitoringServiceConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::monitoring::v3::Service> CreateService(
      google::monitoring::v3::CreateServiceRequest const& request) override;

  StatusOr<google::monitoring::v3::Service> GetService(
      google::monitoring::v3::GetServiceRequest const& request) override;

  StreamRange<google::monitoring::v3::Service> ListServices(
      google::monitoring::v3::ListServicesRequest request) override;

  StatusOr<google::monitoring::v3::Service> UpdateService(
      google::monitoring::v3::UpdateServiceRequest const& request) override;

  Status DeleteService(
      google::monitoring::v3::DeleteServiceRequest const& request) override;

  StatusOr<google::monitoring::v3::ServiceLevelObjective>
  CreateServiceLevelObjective(
      google::monitoring::v3::CreateServiceLevelObjectiveRequest const& request)
      override;

  StatusOr<google::monitoring::v3::ServiceLevelObjective>
  GetServiceLevelObjective(
      google::monitoring::v3::GetServiceLevelObjectiveRequest const& request)
      override;

  StreamRange<google::monitoring::v3::ServiceLevelObjective>
  ListServiceLevelObjectives(
      google::monitoring::v3::ListServiceLevelObjectivesRequest request)
      override;

  StatusOr<google::monitoring::v3::ServiceLevelObjective>
  UpdateServiceLevelObjective(
      google::monitoring::v3::UpdateServiceLevelObjectiveRequest const& request)
      override;

  Status DeleteServiceLevelObjective(
      google::monitoring::v3::DeleteServiceLevelObjectiveRequest const& request)
      override;

 private:
  std::shared_ptr<monitoring::ServiceMonitoringServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_INTERNAL_SERVICE_MONITORING_TRACING_CONNECTION_H
