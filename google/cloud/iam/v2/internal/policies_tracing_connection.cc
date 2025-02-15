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
// source: google/iam/v2/policy.proto

#include "google/cloud/iam/v2/internal/policies_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace iam_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

PoliciesTracingConnection::PoliciesTracingConnection(
    std::shared_ptr<iam_v2::PoliciesConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::iam::v2::Policy> PoliciesTracingConnection::ListPolicies(
    google::iam::v2::ListPoliciesRequest request) {
  return child_->ListPolicies(request);
}

StatusOr<google::iam::v2::Policy> PoliciesTracingConnection::GetPolicy(
    google::iam::v2::GetPolicyRequest const& request) {
  return child_->GetPolicy(request);
}

future<StatusOr<google::iam::v2::Policy>>
PoliciesTracingConnection::CreatePolicy(
    google::iam::v2::CreatePolicyRequest const& request) {
  return child_->CreatePolicy(request);
}

future<StatusOr<google::iam::v2::Policy>>
PoliciesTracingConnection::UpdatePolicy(
    google::iam::v2::UpdatePolicyRequest const& request) {
  return child_->UpdatePolicy(request);
}

future<StatusOr<google::iam::v2::Policy>>
PoliciesTracingConnection::DeletePolicy(
    google::iam::v2::DeletePolicyRequest const& request) {
  return child_->DeletePolicy(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam_v2_internal
}  // namespace cloud
}  // namespace google
