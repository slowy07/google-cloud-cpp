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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_INTERNAL_NOTIFICATION_CHANNEL_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_INTERNAL_NOTIFICATION_CHANNEL_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/monitoring/v3/notification_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace monitoring_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NotificationChannelServiceStub {
 public:
  virtual ~NotificationChannelServiceStub() = 0;

  virtual StatusOr<
      google::monitoring::v3::ListNotificationChannelDescriptorsResponse>
  ListNotificationChannelDescriptors(
      grpc::ClientContext& context,
      google::monitoring::v3::ListNotificationChannelDescriptorsRequest const&
          request) = 0;

  virtual StatusOr<google::monitoring::v3::NotificationChannelDescriptor>
  GetNotificationChannelDescriptor(
      grpc::ClientContext& context,
      google::monitoring::v3::GetNotificationChannelDescriptorRequest const&
          request) = 0;

  virtual StatusOr<google::monitoring::v3::ListNotificationChannelsResponse>
  ListNotificationChannels(
      grpc::ClientContext& context,
      google::monitoring::v3::ListNotificationChannelsRequest const&
          request) = 0;

  virtual StatusOr<google::monitoring::v3::NotificationChannel>
  GetNotificationChannel(
      grpc::ClientContext& context,
      google::monitoring::v3::GetNotificationChannelRequest const& request) = 0;

  virtual StatusOr<google::monitoring::v3::NotificationChannel>
  CreateNotificationChannel(
      grpc::ClientContext& context,
      google::monitoring::v3::CreateNotificationChannelRequest const&
          request) = 0;

  virtual StatusOr<google::monitoring::v3::NotificationChannel>
  UpdateNotificationChannel(
      grpc::ClientContext& context,
      google::monitoring::v3::UpdateNotificationChannelRequest const&
          request) = 0;

  virtual Status DeleteNotificationChannel(
      grpc::ClientContext& context,
      google::monitoring::v3::DeleteNotificationChannelRequest const&
          request) = 0;

  virtual Status SendNotificationChannelVerificationCode(
      grpc::ClientContext& context,
      google::monitoring::v3::
          SendNotificationChannelVerificationCodeRequest const& request) = 0;

  virtual StatusOr<
      google::monitoring::v3::GetNotificationChannelVerificationCodeResponse>
  GetNotificationChannelVerificationCode(
      grpc::ClientContext& context,
      google::monitoring::v3::
          GetNotificationChannelVerificationCodeRequest const& request) = 0;

  virtual StatusOr<google::monitoring::v3::NotificationChannel>
  VerifyNotificationChannel(
      grpc::ClientContext& context,
      google::monitoring::v3::VerifyNotificationChannelRequest const&
          request) = 0;
};

class DefaultNotificationChannelServiceStub
    : public NotificationChannelServiceStub {
 public:
  explicit DefaultNotificationChannelServiceStub(
      std::unique_ptr<
          google::monitoring::v3::NotificationChannelService::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::monitoring::v3::ListNotificationChannelDescriptorsResponse>
  ListNotificationChannelDescriptors(
      grpc::ClientContext& client_context,
      google::monitoring::v3::ListNotificationChannelDescriptorsRequest const&
          request) override;

  StatusOr<google::monitoring::v3::NotificationChannelDescriptor>
  GetNotificationChannelDescriptor(
      grpc::ClientContext& client_context,
      google::monitoring::v3::GetNotificationChannelDescriptorRequest const&
          request) override;

  StatusOr<google::monitoring::v3::ListNotificationChannelsResponse>
  ListNotificationChannels(
      grpc::ClientContext& client_context,
      google::monitoring::v3::ListNotificationChannelsRequest const& request)
      override;

  StatusOr<google::monitoring::v3::NotificationChannel> GetNotificationChannel(
      grpc::ClientContext& client_context,
      google::monitoring::v3::GetNotificationChannelRequest const& request)
      override;

  StatusOr<google::monitoring::v3::NotificationChannel>
  CreateNotificationChannel(
      grpc::ClientContext& client_context,
      google::monitoring::v3::CreateNotificationChannelRequest const& request)
      override;

  StatusOr<google::monitoring::v3::NotificationChannel>
  UpdateNotificationChannel(
      grpc::ClientContext& client_context,
      google::monitoring::v3::UpdateNotificationChannelRequest const& request)
      override;

  Status DeleteNotificationChannel(
      grpc::ClientContext& client_context,
      google::monitoring::v3::DeleteNotificationChannelRequest const& request)
      override;

  Status SendNotificationChannelVerificationCode(
      grpc::ClientContext& client_context,
      google::monitoring::v3::
          SendNotificationChannelVerificationCodeRequest const& request)
      override;

  StatusOr<
      google::monitoring::v3::GetNotificationChannelVerificationCodeResponse>
  GetNotificationChannelVerificationCode(
      grpc::ClientContext& client_context,
      google::monitoring::v3::
          GetNotificationChannelVerificationCodeRequest const& request)
      override;

  StatusOr<google::monitoring::v3::NotificationChannel>
  VerifyNotificationChannel(
      grpc::ClientContext& client_context,
      google::monitoring::v3::VerifyNotificationChannelRequest const& request)
      override;

 private:
  std::unique_ptr<
      google::monitoring::v3::NotificationChannelService::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_INTERNAL_NOTIFICATION_CHANNEL_STUB_H