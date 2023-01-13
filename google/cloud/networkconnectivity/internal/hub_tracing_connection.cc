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
// source: google/cloud/networkconnectivity/v1/hub.proto

#include "google/cloud/networkconnectivity/internal/hub_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace networkconnectivity_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

HubServiceTracingConnection::HubServiceTracingConnection(
    std::shared_ptr<networkconnectivity::HubServiceConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::networkconnectivity::v1::Hub>
HubServiceTracingConnection::ListHubs(
    google::cloud::networkconnectivity::v1::ListHubsRequest request) {
  return child_->ListHubs(request);
}

StatusOr<google::cloud::networkconnectivity::v1::Hub>
HubServiceTracingConnection::GetHub(
    google::cloud::networkconnectivity::v1::GetHubRequest const& request) {
  return child_->GetHub(request);
}

future<StatusOr<google::cloud::networkconnectivity::v1::Hub>>
HubServiceTracingConnection::CreateHub(
    google::cloud::networkconnectivity::v1::CreateHubRequest const& request) {
  return child_->CreateHub(request);
}

future<StatusOr<google::cloud::networkconnectivity::v1::Hub>>
HubServiceTracingConnection::UpdateHub(
    google::cloud::networkconnectivity::v1::UpdateHubRequest const& request) {
  return child_->UpdateHub(request);
}

future<StatusOr<google::cloud::networkconnectivity::v1::OperationMetadata>>
HubServiceTracingConnection::DeleteHub(
    google::cloud::networkconnectivity::v1::DeleteHubRequest const& request) {
  return child_->DeleteHub(request);
}

StreamRange<google::cloud::networkconnectivity::v1::Spoke>
HubServiceTracingConnection::ListSpokes(
    google::cloud::networkconnectivity::v1::ListSpokesRequest request) {
  return child_->ListSpokes(request);
}

StatusOr<google::cloud::networkconnectivity::v1::Spoke>
HubServiceTracingConnection::GetSpoke(
    google::cloud::networkconnectivity::v1::GetSpokeRequest const& request) {
  return child_->GetSpoke(request);
}

future<StatusOr<google::cloud::networkconnectivity::v1::Spoke>>
HubServiceTracingConnection::CreateSpoke(
    google::cloud::networkconnectivity::v1::CreateSpokeRequest const& request) {
  return child_->CreateSpoke(request);
}

future<StatusOr<google::cloud::networkconnectivity::v1::Spoke>>
HubServiceTracingConnection::UpdateSpoke(
    google::cloud::networkconnectivity::v1::UpdateSpokeRequest const& request) {
  return child_->UpdateSpoke(request);
}

future<StatusOr<google::cloud::networkconnectivity::v1::OperationMetadata>>
HubServiceTracingConnection::DeleteSpoke(
    google::cloud::networkconnectivity::v1::DeleteSpokeRequest const& request) {
  return child_->DeleteSpoke(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkconnectivity_internal
}  // namespace cloud
}  // namespace google