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
// source: google/cloud/talent/v4/tenant_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_INTERNAL_TENANT_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_INTERNAL_TENANT_TRACING_CONNECTION_H

#include "google/cloud/talent/tenant_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace talent_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class TenantServiceTracingConnection : public talent::TenantServiceConnection {
 public:
  ~TenantServiceTracingConnection() override = default;

  explicit TenantServiceTracingConnection(
      std::shared_ptr<talent::TenantServiceConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::talent::v4::Tenant> CreateTenant(
      google::cloud::talent::v4::CreateTenantRequest const& request) override;

  StatusOr<google::cloud::talent::v4::Tenant> GetTenant(
      google::cloud::talent::v4::GetTenantRequest const& request) override;

  StatusOr<google::cloud::talent::v4::Tenant> UpdateTenant(
      google::cloud::talent::v4::UpdateTenantRequest const& request) override;

  Status DeleteTenant(
      google::cloud::talent::v4::DeleteTenantRequest const& request) override;

  StreamRange<google::cloud::talent::v4::Tenant> ListTenants(
      google::cloud::talent::v4::ListTenantsRequest request) override;

 private:
  std::shared_ptr<talent::TenantServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_INTERNAL_TENANT_TRACING_CONNECTION_H
