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
// source: google/cloud/connectors/v1/connectors_service.proto

#include "google/cloud/connectors/internal/connectors_option_defaults.h"
#include "google/cloud/connectors/connectors_connection.h"
#include "google/cloud/connectors/connectors_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace connectors_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options ConnectorsDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_CONNECTORS_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_CONNECTORS_AUTHORITY", "connectors.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<connectors::ConnectorsRetryPolicyOption>()) {
    options.set<connectors::ConnectorsRetryPolicyOption>(
        connectors::ConnectorsLimitedTimeRetryPolicy(std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<connectors::ConnectorsBackoffPolicyOption>()) {
    options.set<connectors::ConnectorsBackoffPolicyOption>(
        ExponentialBackoffPolicy(std::chrono::seconds(1),
                                 std::chrono::minutes(5), kBackoffScaling)
            .clone());
  }
  if (!options.has<connectors::ConnectorsPollingPolicyOption>()) {
    options.set<connectors::ConnectorsPollingPolicyOption>(
        GenericPollingPolicy<connectors::ConnectorsRetryPolicyOption::Type,
                             connectors::ConnectorsBackoffPolicyOption::Type>(
            options.get<connectors::ConnectorsRetryPolicyOption>()->clone(),
            options.get<connectors::ConnectorsBackoffPolicyOption>()->clone())
            .clone());
  }
  if (!options.has<connectors::ConnectorsConnectionIdempotencyPolicyOption>()) {
    options.set<connectors::ConnectorsConnectionIdempotencyPolicyOption>(
        connectors::MakeDefaultConnectorsConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace connectors_internal
}  // namespace cloud
}  // namespace google