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
// source: google/api/servicecontrol/v1/quota_controller.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICECONTROL_INTERNAL_QUOTA_CONTROLLER_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICECONTROL_INTERNAL_QUOTA_CONTROLLER_TRACING_CONNECTION_H

#include "google/cloud/servicecontrol/quota_controller_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace servicecontrol_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class QuotaControllerTracingConnection
    : public servicecontrol::QuotaControllerConnection {
 public:
  ~QuotaControllerTracingConnection() override = default;

  explicit QuotaControllerTracingConnection(
      std::shared_ptr<servicecontrol::QuotaControllerConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::api::servicecontrol::v1::AllocateQuotaResponse>
  AllocateQuota(google::api::servicecontrol::v1::AllocateQuotaRequest const&
                    request) override;

 private:
  std::shared_ptr<servicecontrol::QuotaControllerConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicecontrol_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICECONTROL_INTERNAL_QUOTA_CONTROLLER_TRACING_CONNECTION_H