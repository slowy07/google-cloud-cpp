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
// source: google/cloud/dialogflow/v2/conversation_dataset.proto

#include "google/cloud/dialogflow_es/conversation_datasets_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ConversationDatasetsConnectionIdempotencyPolicy::
    ~ConversationDatasetsConnectionIdempotencyPolicy() = default;

std::unique_ptr<ConversationDatasetsConnectionIdempotencyPolicy>
ConversationDatasetsConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<ConversationDatasetsConnectionIdempotencyPolicy>(
      *this);
}

Idempotency
ConversationDatasetsConnectionIdempotencyPolicy::CreateConversationDataset(
    google::cloud::dialogflow::v2::CreateConversationDatasetRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ConversationDatasetsConnectionIdempotencyPolicy::GetConversationDataset(
    google::cloud::dialogflow::v2::GetConversationDatasetRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
ConversationDatasetsConnectionIdempotencyPolicy::ListConversationDatasets(
    google::cloud::dialogflow::v2::ListConversationDatasetsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
ConversationDatasetsConnectionIdempotencyPolicy::DeleteConversationDataset(
    google::cloud::dialogflow::v2::DeleteConversationDatasetRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ConversationDatasetsConnectionIdempotencyPolicy::ImportConversationData(
    google::cloud::dialogflow::v2::ImportConversationDataRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<ConversationDatasetsConnectionIdempotencyPolicy>
MakeDefaultConversationDatasetsConnectionIdempotencyPolicy() {
  return absl::make_unique<ConversationDatasetsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google
