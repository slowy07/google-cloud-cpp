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
// source: google/cloud/eventarc/v1/eventarc.proto

#include "google/cloud/eventarc/internal/eventarc_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace eventarc_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

EventarcTracingConnection::EventarcTracingConnection(
    std::shared_ptr<eventarc::EventarcConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::eventarc::v1::Trigger>
EventarcTracingConnection::GetTrigger(
    google::cloud::eventarc::v1::GetTriggerRequest const& request) {
  return child_->GetTrigger(request);
}

StreamRange<google::cloud::eventarc::v1::Trigger>
EventarcTracingConnection::ListTriggers(
    google::cloud::eventarc::v1::ListTriggersRequest request) {
  return child_->ListTriggers(request);
}

future<StatusOr<google::cloud::eventarc::v1::Trigger>>
EventarcTracingConnection::CreateTrigger(
    google::cloud::eventarc::v1::CreateTriggerRequest const& request) {
  return child_->CreateTrigger(request);
}

future<StatusOr<google::cloud::eventarc::v1::Trigger>>
EventarcTracingConnection::UpdateTrigger(
    google::cloud::eventarc::v1::UpdateTriggerRequest const& request) {
  return child_->UpdateTrigger(request);
}

future<StatusOr<google::cloud::eventarc::v1::Trigger>>
EventarcTracingConnection::DeleteTrigger(
    google::cloud::eventarc::v1::DeleteTriggerRequest const& request) {
  return child_->DeleteTrigger(request);
}

StatusOr<google::cloud::eventarc::v1::Channel>
EventarcTracingConnection::GetChannel(
    google::cloud::eventarc::v1::GetChannelRequest const& request) {
  return child_->GetChannel(request);
}

StreamRange<google::cloud::eventarc::v1::Channel>
EventarcTracingConnection::ListChannels(
    google::cloud::eventarc::v1::ListChannelsRequest request) {
  return child_->ListChannels(request);
}

future<StatusOr<google::cloud::eventarc::v1::Channel>>
EventarcTracingConnection::CreateChannel(
    google::cloud::eventarc::v1::CreateChannelRequest const& request) {
  return child_->CreateChannel(request);
}

future<StatusOr<google::cloud::eventarc::v1::Channel>>
EventarcTracingConnection::UpdateChannel(
    google::cloud::eventarc::v1::UpdateChannelRequest const& request) {
  return child_->UpdateChannel(request);
}

future<StatusOr<google::cloud::eventarc::v1::Channel>>
EventarcTracingConnection::DeleteChannel(
    google::cloud::eventarc::v1::DeleteChannelRequest const& request) {
  return child_->DeleteChannel(request);
}

StatusOr<google::cloud::eventarc::v1::Provider>
EventarcTracingConnection::GetProvider(
    google::cloud::eventarc::v1::GetProviderRequest const& request) {
  return child_->GetProvider(request);
}

StreamRange<google::cloud::eventarc::v1::Provider>
EventarcTracingConnection::ListProviders(
    google::cloud::eventarc::v1::ListProvidersRequest request) {
  return child_->ListProviders(request);
}

StatusOr<google::cloud::eventarc::v1::ChannelConnection>
EventarcTracingConnection::GetChannelConnection(
    google::cloud::eventarc::v1::GetChannelConnectionRequest const& request) {
  return child_->GetChannelConnection(request);
}

StreamRange<google::cloud::eventarc::v1::ChannelConnection>
EventarcTracingConnection::ListChannelConnections(
    google::cloud::eventarc::v1::ListChannelConnectionsRequest request) {
  return child_->ListChannelConnections(request);
}

future<StatusOr<google::cloud::eventarc::v1::ChannelConnection>>
EventarcTracingConnection::CreateChannelConnection(
    google::cloud::eventarc::v1::CreateChannelConnectionRequest const&
        request) {
  return child_->CreateChannelConnection(request);
}

future<StatusOr<google::cloud::eventarc::v1::ChannelConnection>>
EventarcTracingConnection::DeleteChannelConnection(
    google::cloud::eventarc::v1::DeleteChannelConnectionRequest const&
        request) {
  return child_->DeleteChannelConnection(request);
}

StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
EventarcTracingConnection::GetGoogleChannelConfig(
    google::cloud::eventarc::v1::GetGoogleChannelConfigRequest const& request) {
  return child_->GetGoogleChannelConfig(request);
}

StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
EventarcTracingConnection::UpdateGoogleChannelConfig(
    google::cloud::eventarc::v1::UpdateGoogleChannelConfigRequest const&
        request) {
  return child_->UpdateGoogleChannelConfig(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace eventarc_internal
}  // namespace cloud
}  // namespace google