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
// source: google/cloud/iap/v1/service.proto

#include "google/cloud/iap/internal/identity_aware_proxy_o_auth_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace iap_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

IdentityAwareProxyOAuthServiceTracingConnection::
    IdentityAwareProxyOAuthServiceTracingConnection(
        std::shared_ptr<iap::IdentityAwareProxyOAuthServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::iap::v1::ListBrandsResponse>
IdentityAwareProxyOAuthServiceTracingConnection::ListBrands(
    google::cloud::iap::v1::ListBrandsRequest const& request) {
  return child_->ListBrands(request);
}

StatusOr<google::cloud::iap::v1::Brand>
IdentityAwareProxyOAuthServiceTracingConnection::CreateBrand(
    google::cloud::iap::v1::CreateBrandRequest const& request) {
  return child_->CreateBrand(request);
}

StatusOr<google::cloud::iap::v1::Brand>
IdentityAwareProxyOAuthServiceTracingConnection::GetBrand(
    google::cloud::iap::v1::GetBrandRequest const& request) {
  return child_->GetBrand(request);
}

StatusOr<google::cloud::iap::v1::IdentityAwareProxyClient>
IdentityAwareProxyOAuthServiceTracingConnection::CreateIdentityAwareProxyClient(
    google::cloud::iap::v1::CreateIdentityAwareProxyClientRequest const&
        request) {
  return child_->CreateIdentityAwareProxyClient(request);
}

StreamRange<google::cloud::iap::v1::IdentityAwareProxyClient>
IdentityAwareProxyOAuthServiceTracingConnection::ListIdentityAwareProxyClients(
    google::cloud::iap::v1::ListIdentityAwareProxyClientsRequest request) {
  return child_->ListIdentityAwareProxyClients(request);
}

StatusOr<google::cloud::iap::v1::IdentityAwareProxyClient>
IdentityAwareProxyOAuthServiceTracingConnection::GetIdentityAwareProxyClient(
    google::cloud::iap::v1::GetIdentityAwareProxyClientRequest const& request) {
  return child_->GetIdentityAwareProxyClient(request);
}

StatusOr<google::cloud::iap::v1::IdentityAwareProxyClient>
IdentityAwareProxyOAuthServiceTracingConnection::
    ResetIdentityAwareProxyClientSecret(
        google::cloud::iap::v1::
            ResetIdentityAwareProxyClientSecretRequest const& request) {
  return child_->ResetIdentityAwareProxyClientSecret(request);
}

Status
IdentityAwareProxyOAuthServiceTracingConnection::DeleteIdentityAwareProxyClient(
    google::cloud::iap::v1::DeleteIdentityAwareProxyClientRequest const&
        request) {
  return child_->DeleteIdentityAwareProxyClient(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iap_internal
}  // namespace cloud
}  // namespace google
