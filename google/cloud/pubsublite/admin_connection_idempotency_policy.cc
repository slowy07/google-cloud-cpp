// Copyright 2021 Google LLC
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
// source: google/cloud/pubsublite/v1/admin.proto

#include "google/cloud/pubsublite/admin_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace pubsublite {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

AdminServiceConnectionIdempotencyPolicy::
    ~AdminServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<AdminServiceConnectionIdempotencyPolicy>
AdminServiceConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<AdminServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency AdminServiceConnectionIdempotencyPolicy::CreateTopic(
    google::cloud::pubsublite::v1::CreateTopicRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AdminServiceConnectionIdempotencyPolicy::GetTopic(
    google::cloud::pubsublite::v1::GetTopicRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AdminServiceConnectionIdempotencyPolicy::GetTopicPartitions(
    google::cloud::pubsublite::v1::GetTopicPartitionsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AdminServiceConnectionIdempotencyPolicy::ListTopics(
    google::cloud::pubsublite::v1::ListTopicsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AdminServiceConnectionIdempotencyPolicy::UpdateTopic(
    google::cloud::pubsublite::v1::UpdateTopicRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AdminServiceConnectionIdempotencyPolicy::DeleteTopic(
    google::cloud::pubsublite::v1::DeleteTopicRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AdminServiceConnectionIdempotencyPolicy::ListTopicSubscriptions(
    google::cloud::pubsublite::v1::ListTopicSubscriptionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AdminServiceConnectionIdempotencyPolicy::CreateSubscription(
    google::cloud::pubsublite::v1::CreateSubscriptionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AdminServiceConnectionIdempotencyPolicy::GetSubscription(
    google::cloud::pubsublite::v1::GetSubscriptionRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AdminServiceConnectionIdempotencyPolicy::ListSubscriptions(
    google::cloud::pubsublite::v1::ListSubscriptionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AdminServiceConnectionIdempotencyPolicy::UpdateSubscription(
    google::cloud::pubsublite::v1::UpdateSubscriptionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AdminServiceConnectionIdempotencyPolicy::DeleteSubscription(
    google::cloud::pubsublite::v1::DeleteSubscriptionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AdminServiceConnectionIdempotencyPolicy::SeekSubscription(
    google::cloud::pubsublite::v1::SeekSubscriptionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AdminServiceConnectionIdempotencyPolicy::CreateReservation(
    google::cloud::pubsublite::v1::CreateReservationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AdminServiceConnectionIdempotencyPolicy::GetReservation(
    google::cloud::pubsublite::v1::GetReservationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AdminServiceConnectionIdempotencyPolicy::ListReservations(
    google::cloud::pubsublite::v1::ListReservationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AdminServiceConnectionIdempotencyPolicy::UpdateReservation(
    google::cloud::pubsublite::v1::UpdateReservationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AdminServiceConnectionIdempotencyPolicy::DeleteReservation(
    google::cloud::pubsublite::v1::DeleteReservationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AdminServiceConnectionIdempotencyPolicy::ListReservationTopics(
    google::cloud::pubsublite::v1::ListReservationTopicsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

std::unique_ptr<AdminServiceConnectionIdempotencyPolicy>
MakeDefaultAdminServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<AdminServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite
}  // namespace cloud
}  // namespace google
