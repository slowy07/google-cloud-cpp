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
// source: google/cloud/resourcesettings/v1/resource_settings.proto

#include "google/cloud/resourcesettings/internal/resource_settings_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcesettings_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ResourceSettingsServiceTracingConnection::
    ResourceSettingsServiceTracingConnection(
        std::shared_ptr<resourcesettings::ResourceSettingsServiceConnection>
            child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::resourcesettings::v1::Setting>
ResourceSettingsServiceTracingConnection::ListSettings(
    google::cloud::resourcesettings::v1::ListSettingsRequest request) {
  return child_->ListSettings(request);
}

StatusOr<google::cloud::resourcesettings::v1::Setting>
ResourceSettingsServiceTracingConnection::GetSetting(
    google::cloud::resourcesettings::v1::GetSettingRequest const& request) {
  return child_->GetSetting(request);
}

StatusOr<google::cloud::resourcesettings::v1::Setting>
ResourceSettingsServiceTracingConnection::UpdateSetting(
    google::cloud::resourcesettings::v1::UpdateSettingRequest const& request) {
  return child_->UpdateSetting(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcesettings_internal
}  // namespace cloud
}  // namespace google
