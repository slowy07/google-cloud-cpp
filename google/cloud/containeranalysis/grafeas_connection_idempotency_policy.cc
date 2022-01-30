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
// source: grafeas/v1/grafeas.proto

#include "google/cloud/containeranalysis/grafeas_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace containeranalysis {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

GrafeasConnectionIdempotencyPolicy::~GrafeasConnectionIdempotencyPolicy() =
    default;

namespace {
class DefaultGrafeasConnectionIdempotencyPolicy
    : public GrafeasConnectionIdempotencyPolicy {
 public:
  ~DefaultGrafeasConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<GrafeasConnectionIdempotencyPolicy> clone() const override {
    return absl::make_unique<DefaultGrafeasConnectionIdempotencyPolicy>(*this);
  }

  Idempotency GetOccurrence(grafeas::v1::GetOccurrenceRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListOccurrences(grafeas::v1::ListOccurrencesRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency DeleteOccurrence(
      grafeas::v1::DeleteOccurrenceRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateOccurrence(
      grafeas::v1::CreateOccurrenceRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency BatchCreateOccurrences(
      grafeas::v1::BatchCreateOccurrencesRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateOccurrence(
      grafeas::v1::UpdateOccurrenceRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetOccurrenceNote(
      grafeas::v1::GetOccurrenceNoteRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetNote(grafeas::v1::GetNoteRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListNotes(grafeas::v1::ListNotesRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency DeleteNote(grafeas::v1::DeleteNoteRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateNote(grafeas::v1::CreateNoteRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency BatchCreateNotes(
      grafeas::v1::BatchCreateNotesRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateNote(grafeas::v1::UpdateNoteRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListNoteOccurrences(
      grafeas::v1::ListNoteOccurrencesRequest) override {
    return Idempotency::kIdempotent;
  }
};
}  // namespace

std::unique_ptr<GrafeasConnectionIdempotencyPolicy>
MakeDefaultGrafeasConnectionIdempotencyPolicy() {
  return absl::make_unique<DefaultGrafeasConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace containeranalysis
}  // namespace cloud
}  // namespace google