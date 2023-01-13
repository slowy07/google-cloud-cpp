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
// source: google/monitoring/v3/metric_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_INTERNAL_METRIC_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_INTERNAL_METRIC_TRACING_CONNECTION_H

#include "google/cloud/monitoring/metric_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace monitoring_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class MetricServiceTracingConnection
    : public monitoring::MetricServiceConnection {
 public:
  ~MetricServiceTracingConnection() override = default;

  explicit MetricServiceTracingConnection(
      std::shared_ptr<monitoring::MetricServiceConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::api::MonitoredResourceDescriptor>
  ListMonitoredResourceDescriptors(
      google::monitoring::v3::ListMonitoredResourceDescriptorsRequest request)
      override;

  StatusOr<google::api::MonitoredResourceDescriptor>
  GetMonitoredResourceDescriptor(
      google::monitoring::v3::GetMonitoredResourceDescriptorRequest const&
          request) override;

  StreamRange<google::api::MetricDescriptor> ListMetricDescriptors(
      google::monitoring::v3::ListMetricDescriptorsRequest request) override;

  StatusOr<google::api::MetricDescriptor> GetMetricDescriptor(
      google::monitoring::v3::GetMetricDescriptorRequest const& request)
      override;

  StatusOr<google::api::MetricDescriptor> CreateMetricDescriptor(
      google::monitoring::v3::CreateMetricDescriptorRequest const& request)
      override;

  Status DeleteMetricDescriptor(
      google::monitoring::v3::DeleteMetricDescriptorRequest const& request)
      override;

  StreamRange<google::monitoring::v3::TimeSeries> ListTimeSeries(
      google::monitoring::v3::ListTimeSeriesRequest request) override;

  Status CreateTimeSeries(
      google::monitoring::v3::CreateTimeSeriesRequest const& request) override;

  Status CreateServiceTimeSeries(
      google::monitoring::v3::CreateTimeSeriesRequest const& request) override;

  future<Status> AsyncCreateTimeSeries(
      google::monitoring::v3::CreateTimeSeriesRequest const& request) override;

 private:
  std::shared_ptr<monitoring::MetricServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_INTERNAL_METRIC_TRACING_CONNECTION_H