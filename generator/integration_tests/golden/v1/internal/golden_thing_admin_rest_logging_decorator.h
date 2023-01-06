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
// source: generator/integration_tests/test.proto

#ifndef GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_INTERNAL_GOLDEN_THING_ADMIN_REST_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_INTERNAL_GOLDEN_THING_ADMIN_REST_LOGGING_DECORATOR_H

#include "generator/integration_tests/golden/v1/internal/golden_thing_admin_rest_stub.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <generator/integration_tests/test.pb.h>
#include <google/longrunning/operations.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace golden_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GoldenThingAdminRestLogging : public GoldenThingAdminRestStub {
 public:
  ~GoldenThingAdminRestLogging() override = default;
  GoldenThingAdminRestLogging(std::shared_ptr<GoldenThingAdminRestStub> child,
                       TracingOptions tracing_options,
                       std::set<std::string> components);

  StatusOr<google::test::admin::database::v1::ListDatabasesResponse> ListDatabases(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::ListDatabasesRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateDatabase(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::CreateDatabaseRequest const& request) override;

  StatusOr<google::test::admin::database::v1::Database> GetDatabase(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::GetDatabaseRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateDatabaseDdl(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::UpdateDatabaseDdlRequest const& request) override;

  Status DropDatabase(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::DropDatabaseRequest const& request) override;

  StatusOr<google::test::admin::database::v1::GetDatabaseDdlResponse> GetDatabaseDdl(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::GetDatabaseDdlRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::cloud::rest_internal::RestContext& rest_context,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateBackup(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::CreateBackupRequest const& request) override;

  StatusOr<google::test::admin::database::v1::Backup> GetBackup(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::GetBackupRequest const& request) override;

  StatusOr<google::test::admin::database::v1::Backup> UpdateBackup(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::UpdateBackupRequest const& request) override;

  Status DeleteBackup(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::DeleteBackupRequest const& request) override;

  StatusOr<google::test::admin::database::v1::ListBackupsResponse> ListBackups(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::ListBackupsRequest const& request) override;

  StatusOr<google::longrunning::Operation> RestoreDatabase(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::RestoreDatabaseRequest const& request) override;

  StatusOr<google::test::admin::database::v1::ListDatabaseOperationsResponse> ListDatabaseOperations(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::ListDatabaseOperationsRequest const& request) override;

  StatusOr<google::test::admin::database::v1::ListBackupOperationsResponse> ListBackupOperations(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::ListBackupOperationsRequest const& request) override;

 private:
  std::shared_ptr<GoldenThingAdminRestStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_INTERNAL_GOLDEN_THING_ADMIN_REST_LOGGING_DECORATOR_H