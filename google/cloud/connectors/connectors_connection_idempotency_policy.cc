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
// source: google/cloud/connectors/v1/connectors_service.proto

#include "google/cloud/connectors/connectors_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace connectors {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ConnectorsConnectionIdempotencyPolicy::
    ~ConnectorsConnectionIdempotencyPolicy() = default;

std::unique_ptr<ConnectorsConnectionIdempotencyPolicy>
ConnectorsConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<ConnectorsConnectionIdempotencyPolicy>(*this);
}

Idempotency ConnectorsConnectionIdempotencyPolicy::ListConnections(
    google::cloud::connectors::v1::ListConnectionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ConnectorsConnectionIdempotencyPolicy::GetConnection(
    google::cloud::connectors::v1::GetConnectionRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ConnectorsConnectionIdempotencyPolicy::CreateConnection(
    google::cloud::connectors::v1::CreateConnectionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConnectorsConnectionIdempotencyPolicy::UpdateConnection(
    google::cloud::connectors::v1::UpdateConnectionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConnectorsConnectionIdempotencyPolicy::DeleteConnection(
    google::cloud::connectors::v1::DeleteConnectionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConnectorsConnectionIdempotencyPolicy::ListProviders(
    google::cloud::connectors::v1::ListProvidersRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ConnectorsConnectionIdempotencyPolicy::GetProvider(
    google::cloud::connectors::v1::GetProviderRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ConnectorsConnectionIdempotencyPolicy::ListConnectors(
    google::cloud::connectors::v1::ListConnectorsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ConnectorsConnectionIdempotencyPolicy::GetConnector(
    google::cloud::connectors::v1::GetConnectorRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ConnectorsConnectionIdempotencyPolicy::ListConnectorVersions(
    google::cloud::connectors::v1::ListConnectorVersionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ConnectorsConnectionIdempotencyPolicy::GetConnectorVersion(
    google::cloud::connectors::v1::GetConnectorVersionRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ConnectorsConnectionIdempotencyPolicy::GetConnectionSchemaMetadata(
    google::cloud::connectors::v1::GetConnectionSchemaMetadataRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ConnectorsConnectionIdempotencyPolicy::ListRuntimeEntitySchemas(
    google::cloud::connectors::v1::ListRuntimeEntitySchemasRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ConnectorsConnectionIdempotencyPolicy::ListRuntimeActionSchemas(
    google::cloud::connectors::v1::ListRuntimeActionSchemasRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ConnectorsConnectionIdempotencyPolicy::GetRuntimeConfig(
    google::cloud::connectors::v1::GetRuntimeConfigRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<ConnectorsConnectionIdempotencyPolicy>
MakeDefaultConnectorsConnectionIdempotencyPolicy() {
  return absl::make_unique<ConnectorsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace connectors
}  // namespace cloud
}  // namespace google
