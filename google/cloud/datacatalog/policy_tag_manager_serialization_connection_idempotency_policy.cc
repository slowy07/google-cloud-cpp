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
// source: google/cloud/datacatalog/v1/policytagmanagerserialization.proto

#include "google/cloud/datacatalog/policy_tag_manager_serialization_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace datacatalog {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

PolicyTagManagerSerializationConnectionIdempotencyPolicy::
    ~PolicyTagManagerSerializationConnectionIdempotencyPolicy() = default;

std::unique_ptr<PolicyTagManagerSerializationConnectionIdempotencyPolicy>
PolicyTagManagerSerializationConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<
      PolicyTagManagerSerializationConnectionIdempotencyPolicy>(*this);
}

Idempotency
PolicyTagManagerSerializationConnectionIdempotencyPolicy::ReplaceTaxonomy(
    google::cloud::datacatalog::v1::ReplaceTaxonomyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
PolicyTagManagerSerializationConnectionIdempotencyPolicy::ImportTaxonomies(
    google::cloud::datacatalog::v1::ImportTaxonomiesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
PolicyTagManagerSerializationConnectionIdempotencyPolicy::ExportTaxonomies(
    google::cloud::datacatalog::v1::ExportTaxonomiesRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<PolicyTagManagerSerializationConnectionIdempotencyPolicy>
MakeDefaultPolicyTagManagerSerializationConnectionIdempotencyPolicy() {
  return absl::make_unique<
      PolicyTagManagerSerializationConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog
}  // namespace cloud
}  // namespace google
