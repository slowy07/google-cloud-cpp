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
// source: google/cloud/ids/v1/ids.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IDS_INTERNAL_IDS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IDS_INTERNAL_IDS_TRACING_CONNECTION_H

#include "google/cloud/ids/ids_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace ids_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class IDSTracingConnection : public ids::IDSConnection {
 public:
  ~IDSTracingConnection() override = default;

  explicit IDSTracingConnection(std::shared_ptr<ids::IDSConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::ids::v1::Endpoint> ListEndpoints(
      google::cloud::ids::v1::ListEndpointsRequest request) override;

  StatusOr<google::cloud::ids::v1::Endpoint> GetEndpoint(
      google::cloud::ids::v1::GetEndpointRequest const& request) override;

  future<StatusOr<google::cloud::ids::v1::Endpoint>> CreateEndpoint(
      google::cloud::ids::v1::CreateEndpointRequest const& request) override;

  future<StatusOr<google::cloud::ids::v1::OperationMetadata>> DeleteEndpoint(
      google::cloud::ids::v1::DeleteEndpointRequest const& request) override;

 private:
  std::shared_ptr<ids::IDSConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace ids_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IDS_INTERNAL_IDS_TRACING_CONNECTION_H
