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
// source: google/cloud/iot/v1/device_manager.proto

#include "google/cloud/iot/internal/device_manager_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace iot_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DeviceManagerTracingConnection::DeviceManagerTracingConnection(
    std::shared_ptr<iot::DeviceManagerConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::iot::v1::DeviceRegistry>
DeviceManagerTracingConnection::CreateDeviceRegistry(
    google::cloud::iot::v1::CreateDeviceRegistryRequest const& request) {
  return child_->CreateDeviceRegistry(request);
}

StatusOr<google::cloud::iot::v1::DeviceRegistry>
DeviceManagerTracingConnection::GetDeviceRegistry(
    google::cloud::iot::v1::GetDeviceRegistryRequest const& request) {
  return child_->GetDeviceRegistry(request);
}

StatusOr<google::cloud::iot::v1::DeviceRegistry>
DeviceManagerTracingConnection::UpdateDeviceRegistry(
    google::cloud::iot::v1::UpdateDeviceRegistryRequest const& request) {
  return child_->UpdateDeviceRegistry(request);
}

Status DeviceManagerTracingConnection::DeleteDeviceRegistry(
    google::cloud::iot::v1::DeleteDeviceRegistryRequest const& request) {
  return child_->DeleteDeviceRegistry(request);
}

StreamRange<google::cloud::iot::v1::DeviceRegistry>
DeviceManagerTracingConnection::ListDeviceRegistries(
    google::cloud::iot::v1::ListDeviceRegistriesRequest request) {
  return child_->ListDeviceRegistries(request);
}

StatusOr<google::cloud::iot::v1::Device>
DeviceManagerTracingConnection::CreateDevice(
    google::cloud::iot::v1::CreateDeviceRequest const& request) {
  return child_->CreateDevice(request);
}

StatusOr<google::cloud::iot::v1::Device>
DeviceManagerTracingConnection::GetDevice(
    google::cloud::iot::v1::GetDeviceRequest const& request) {
  return child_->GetDevice(request);
}

StatusOr<google::cloud::iot::v1::Device>
DeviceManagerTracingConnection::UpdateDevice(
    google::cloud::iot::v1::UpdateDeviceRequest const& request) {
  return child_->UpdateDevice(request);
}

Status DeviceManagerTracingConnection::DeleteDevice(
    google::cloud::iot::v1::DeleteDeviceRequest const& request) {
  return child_->DeleteDevice(request);
}

StreamRange<google::cloud::iot::v1::Device>
DeviceManagerTracingConnection::ListDevices(
    google::cloud::iot::v1::ListDevicesRequest request) {
  return child_->ListDevices(request);
}

StatusOr<google::cloud::iot::v1::DeviceConfig>
DeviceManagerTracingConnection::ModifyCloudToDeviceConfig(
    google::cloud::iot::v1::ModifyCloudToDeviceConfigRequest const& request) {
  return child_->ModifyCloudToDeviceConfig(request);
}

StatusOr<google::cloud::iot::v1::ListDeviceConfigVersionsResponse>
DeviceManagerTracingConnection::ListDeviceConfigVersions(
    google::cloud::iot::v1::ListDeviceConfigVersionsRequest const& request) {
  return child_->ListDeviceConfigVersions(request);
}

StatusOr<google::cloud::iot::v1::ListDeviceStatesResponse>
DeviceManagerTracingConnection::ListDeviceStates(
    google::cloud::iot::v1::ListDeviceStatesRequest const& request) {
  return child_->ListDeviceStates(request);
}

StatusOr<google::iam::v1::Policy> DeviceManagerTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return child_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> DeviceManagerTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  return child_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DeviceManagerTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return child_->TestIamPermissions(request);
}

StatusOr<google::cloud::iot::v1::SendCommandToDeviceResponse>
DeviceManagerTracingConnection::SendCommandToDevice(
    google::cloud::iot::v1::SendCommandToDeviceRequest const& request) {
  return child_->SendCommandToDevice(request);
}

StatusOr<google::cloud::iot::v1::BindDeviceToGatewayResponse>
DeviceManagerTracingConnection::BindDeviceToGateway(
    google::cloud::iot::v1::BindDeviceToGatewayRequest const& request) {
  return child_->BindDeviceToGateway(request);
}

StatusOr<google::cloud::iot::v1::UnbindDeviceFromGatewayResponse>
DeviceManagerTracingConnection::UnbindDeviceFromGateway(
    google::cloud::iot::v1::UnbindDeviceFromGatewayRequest const& request) {
  return child_->UnbindDeviceFromGateway(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iot_internal
}  // namespace cloud
}  // namespace google
