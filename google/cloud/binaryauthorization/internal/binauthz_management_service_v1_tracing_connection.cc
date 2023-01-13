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
// source: google/cloud/binaryauthorization/v1/service.proto

#include "google/cloud/binaryauthorization/internal/binauthz_management_service_v1_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace binaryauthorization_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

BinauthzManagementServiceV1TracingConnection::
    BinauthzManagementServiceV1TracingConnection(
        std::shared_ptr<
            binaryauthorization::BinauthzManagementServiceV1Connection>
            child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::binaryauthorization::v1::Policy>
BinauthzManagementServiceV1TracingConnection::GetPolicy(
    google::cloud::binaryauthorization::v1::GetPolicyRequest const& request) {
  return child_->GetPolicy(request);
}

StatusOr<google::cloud::binaryauthorization::v1::Policy>
BinauthzManagementServiceV1TracingConnection::UpdatePolicy(
    google::cloud::binaryauthorization::v1::UpdatePolicyRequest const&
        request) {
  return child_->UpdatePolicy(request);
}

StatusOr<google::cloud::binaryauthorization::v1::Attestor>
BinauthzManagementServiceV1TracingConnection::CreateAttestor(
    google::cloud::binaryauthorization::v1::CreateAttestorRequest const&
        request) {
  return child_->CreateAttestor(request);
}

StatusOr<google::cloud::binaryauthorization::v1::Attestor>
BinauthzManagementServiceV1TracingConnection::GetAttestor(
    google::cloud::binaryauthorization::v1::GetAttestorRequest const& request) {
  return child_->GetAttestor(request);
}

StatusOr<google::cloud::binaryauthorization::v1::Attestor>
BinauthzManagementServiceV1TracingConnection::UpdateAttestor(
    google::cloud::binaryauthorization::v1::UpdateAttestorRequest const&
        request) {
  return child_->UpdateAttestor(request);
}

StreamRange<google::cloud::binaryauthorization::v1::Attestor>
BinauthzManagementServiceV1TracingConnection::ListAttestors(
    google::cloud::binaryauthorization::v1::ListAttestorsRequest request) {
  return child_->ListAttestors(request);
}

Status BinauthzManagementServiceV1TracingConnection::DeleteAttestor(
    google::cloud::binaryauthorization::v1::DeleteAttestorRequest const&
        request) {
  return child_->DeleteAttestor(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace binaryauthorization_internal
}  // namespace cloud
}  // namespace google