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
// source: google/monitoring/v3/alert_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_INTERNAL_ALERT_POLICY_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_INTERNAL_ALERT_POLICY_TRACING_CONNECTION_H

#include "google/cloud/monitoring/alert_policy_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace monitoring_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class AlertPolicyServiceTracingConnection
    : public monitoring::AlertPolicyServiceConnection {
 public:
  ~AlertPolicyServiceTracingConnection() override = default;

  explicit AlertPolicyServiceTracingConnection(
      std::shared_ptr<monitoring::AlertPolicyServiceConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::monitoring::v3::AlertPolicy> ListAlertPolicies(
      google::monitoring::v3::ListAlertPoliciesRequest request) override;

  StatusOr<google::monitoring::v3::AlertPolicy> GetAlertPolicy(
      google::monitoring::v3::GetAlertPolicyRequest const& request) override;

  StatusOr<google::monitoring::v3::AlertPolicy> CreateAlertPolicy(
      google::monitoring::v3::CreateAlertPolicyRequest const& request) override;

  Status DeleteAlertPolicy(
      google::monitoring::v3::DeleteAlertPolicyRequest const& request) override;

  StatusOr<google::monitoring::v3::AlertPolicy> UpdateAlertPolicy(
      google::monitoring::v3::UpdateAlertPolicyRequest const& request) override;

 private:
  std::shared_ptr<monitoring::AlertPolicyServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_INTERNAL_ALERT_POLICY_TRACING_CONNECTION_H
