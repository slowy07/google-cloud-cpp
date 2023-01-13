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
// source: google/monitoring/v3/notification_service.proto

#include "google/cloud/monitoring/internal/notification_channel_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace monitoring_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

NotificationChannelServiceTracingConnection::
    NotificationChannelServiceTracingConnection(
        std::shared_ptr<monitoring::NotificationChannelServiceConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::monitoring::v3::NotificationChannelDescriptor>
NotificationChannelServiceTracingConnection::ListNotificationChannelDescriptors(
    google::monitoring::v3::ListNotificationChannelDescriptorsRequest request) {
  return child_->ListNotificationChannelDescriptors(request);
}

StatusOr<google::monitoring::v3::NotificationChannelDescriptor>
NotificationChannelServiceTracingConnection::GetNotificationChannelDescriptor(
    google::monitoring::v3::GetNotificationChannelDescriptorRequest const&
        request) {
  return child_->GetNotificationChannelDescriptor(request);
}

StreamRange<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceTracingConnection::ListNotificationChannels(
    google::monitoring::v3::ListNotificationChannelsRequest request) {
  return child_->ListNotificationChannels(request);
}

StatusOr<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceTracingConnection::GetNotificationChannel(
    google::monitoring::v3::GetNotificationChannelRequest const& request) {
  return child_->GetNotificationChannel(request);
}

StatusOr<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceTracingConnection::CreateNotificationChannel(
    google::monitoring::v3::CreateNotificationChannelRequest const& request) {
  return child_->CreateNotificationChannel(request);
}

StatusOr<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceTracingConnection::UpdateNotificationChannel(
    google::monitoring::v3::UpdateNotificationChannelRequest const& request) {
  return child_->UpdateNotificationChannel(request);
}

Status NotificationChannelServiceTracingConnection::DeleteNotificationChannel(
    google::monitoring::v3::DeleteNotificationChannelRequest const& request) {
  return child_->DeleteNotificationChannel(request);
}

Status NotificationChannelServiceTracingConnection::
    SendNotificationChannelVerificationCode(
        google::monitoring::v3::
            SendNotificationChannelVerificationCodeRequest const& request) {
  return child_->SendNotificationChannelVerificationCode(request);
}

StatusOr<google::monitoring::v3::GetNotificationChannelVerificationCodeResponse>
NotificationChannelServiceTracingConnection::
    GetNotificationChannelVerificationCode(
        google::monitoring::v3::
            GetNotificationChannelVerificationCodeRequest const& request) {
  return child_->GetNotificationChannelVerificationCode(request);
}

StatusOr<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceTracingConnection::VerifyNotificationChannel(
    google::monitoring::v3::VerifyNotificationChannelRequest const& request) {
  return child_->VerifyNotificationChannel(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_internal
}  // namespace cloud
}  // namespace google