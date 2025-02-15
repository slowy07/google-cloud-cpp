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
// source: google/cloud/filestore/v1/cloud_filestore_service.proto

#include "google/cloud/filestore/internal/cloud_filestore_manager_option_defaults.h"
#include "google/cloud/filestore/cloud_filestore_manager_connection.h"
#include "google/cloud/filestore/cloud_filestore_manager_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace filestore_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options CloudFilestoreManagerDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_CLOUD_FILESTORE_MANAGER_ENDPOINT",
      "", "GOOGLE_CLOUD_CPP_CLOUD_FILESTORE_MANAGER_AUTHORITY",
      "file.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<filestore::CloudFilestoreManagerRetryPolicyOption>()) {
    options.set<filestore::CloudFilestoreManagerRetryPolicyOption>(
        filestore::CloudFilestoreManagerLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<filestore::CloudFilestoreManagerBackoffPolicyOption>()) {
    options.set<filestore::CloudFilestoreManagerBackoffPolicyOption>(
        ExponentialBackoffPolicy(std::chrono::seconds(1),
                                 std::chrono::minutes(5), kBackoffScaling)
            .clone());
  }
  if (!options.has<filestore::CloudFilestoreManagerPollingPolicyOption>()) {
    options.set<filestore::CloudFilestoreManagerPollingPolicyOption>(
        GenericPollingPolicy<
            filestore::CloudFilestoreManagerRetryPolicyOption::Type,
            filestore::CloudFilestoreManagerBackoffPolicyOption::Type>(
            options.get<filestore::CloudFilestoreManagerRetryPolicyOption>()
                ->clone(),
            options.get<filestore::CloudFilestoreManagerBackoffPolicyOption>()
                ->clone())
            .clone());
  }
  if (!options
           .has<filestore::
                    CloudFilestoreManagerConnectionIdempotencyPolicyOption>()) {
    options
        .set<filestore::CloudFilestoreManagerConnectionIdempotencyPolicyOption>(
            filestore::
                MakeDefaultCloudFilestoreManagerConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace filestore_internal
}  // namespace cloud
}  // namespace google
