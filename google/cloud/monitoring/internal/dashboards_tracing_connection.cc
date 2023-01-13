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
// source: google/monitoring/dashboard/v1/dashboards_service.proto

#include "google/cloud/monitoring/internal/dashboards_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace monitoring_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DashboardsServiceTracingConnection::DashboardsServiceTracingConnection(
    std::shared_ptr<monitoring::DashboardsServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::monitoring::dashboard::v1::Dashboard>
DashboardsServiceTracingConnection::CreateDashboard(
    google::monitoring::dashboard::v1::CreateDashboardRequest const& request) {
  return child_->CreateDashboard(request);
}

StreamRange<google::monitoring::dashboard::v1::Dashboard>
DashboardsServiceTracingConnection::ListDashboards(
    google::monitoring::dashboard::v1::ListDashboardsRequest request) {
  return child_->ListDashboards(request);
}

StatusOr<google::monitoring::dashboard::v1::Dashboard>
DashboardsServiceTracingConnection::GetDashboard(
    google::monitoring::dashboard::v1::GetDashboardRequest const& request) {
  return child_->GetDashboard(request);
}

Status DashboardsServiceTracingConnection::DeleteDashboard(
    google::monitoring::dashboard::v1::DeleteDashboardRequest const& request) {
  return child_->DeleteDashboard(request);
}

StatusOr<google::monitoring::dashboard::v1::Dashboard>
DashboardsServiceTracingConnection::UpdateDashboard(
    google::monitoring::dashboard::v1::UpdateDashboardRequest const& request) {
  return child_->UpdateDashboard(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_internal
}  // namespace cloud
}  // namespace google