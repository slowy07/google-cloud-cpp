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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_INTERNAL_EVENTARC_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_INTERNAL_EVENTARC_TRACING_CONNECTION_H

#include "google/cloud/eventarc/eventarc_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace eventarc_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class EventarcTracingConnection : public eventarc::EventarcConnection {
 public:
  ~EventarcTracingConnection() override = default;

  explicit EventarcTracingConnection(
      std::shared_ptr<eventarc::EventarcConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::eventarc::v1::Trigger> GetTrigger(
      google::cloud::eventarc::v1::GetTriggerRequest const& request) override;

  StreamRange<google::cloud::eventarc::v1::Trigger> ListTriggers(
      google::cloud::eventarc::v1::ListTriggersRequest request) override;

  future<StatusOr<google::cloud::eventarc::v1::Trigger>> CreateTrigger(
      google::cloud::eventarc::v1::CreateTriggerRequest const& request)
      override;

  future<StatusOr<google::cloud::eventarc::v1::Trigger>> UpdateTrigger(
      google::cloud::eventarc::v1::UpdateTriggerRequest const& request)
      override;

  future<StatusOr<google::cloud::eventarc::v1::Trigger>> DeleteTrigger(
      google::cloud::eventarc::v1::DeleteTriggerRequest const& request)
      override;

  StatusOr<google::cloud::eventarc::v1::Channel> GetChannel(
      google::cloud::eventarc::v1::GetChannelRequest const& request) override;

  StreamRange<google::cloud::eventarc::v1::Channel> ListChannels(
      google::cloud::eventarc::v1::ListChannelsRequest request) override;

  future<StatusOr<google::cloud::eventarc::v1::Channel>> CreateChannel(
      google::cloud::eventarc::v1::CreateChannelRequest const& request)
      override;

  future<StatusOr<google::cloud::eventarc::v1::Channel>> UpdateChannel(
      google::cloud::eventarc::v1::UpdateChannelRequest const& request)
      override;

  future<StatusOr<google::cloud::eventarc::v1::Channel>> DeleteChannel(
      google::cloud::eventarc::v1::DeleteChannelRequest const& request)
      override;

  StatusOr<google::cloud::eventarc::v1::Provider> GetProvider(
      google::cloud::eventarc::v1::GetProviderRequest const& request) override;

  StreamRange<google::cloud::eventarc::v1::Provider> ListProviders(
      google::cloud::eventarc::v1::ListProvidersRequest request) override;

  StatusOr<google::cloud::eventarc::v1::ChannelConnection> GetChannelConnection(
      google::cloud::eventarc::v1::GetChannelConnectionRequest const& request)
      override;

  StreamRange<google::cloud::eventarc::v1::ChannelConnection>
  ListChannelConnections(
      google::cloud::eventarc::v1::ListChannelConnectionsRequest request)
      override;

  future<StatusOr<google::cloud::eventarc::v1::ChannelConnection>>
  CreateChannelConnection(
      google::cloud::eventarc::v1::CreateChannelConnectionRequest const&
          request) override;

  future<StatusOr<google::cloud::eventarc::v1::ChannelConnection>>
  DeleteChannelConnection(
      google::cloud::eventarc::v1::DeleteChannelConnectionRequest const&
          request) override;

  StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
  GetGoogleChannelConfig(
      google::cloud::eventarc::v1::GetGoogleChannelConfigRequest const& request)
      override;

  StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
  UpdateGoogleChannelConfig(
      google::cloud::eventarc::v1::UpdateGoogleChannelConfigRequest const&
          request) override;

 private:
  std::shared_ptr<eventarc::EventarcConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace eventarc_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_INTERNAL_EVENTARC_TRACING_CONNECTION_H