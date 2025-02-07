// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "generator/integration_tests/golden/v1/internal/golden_thing_admin_tracing_connection.h"
#include "google/cloud/mocks/mock_stream_range.h"
#include "google/cloud/internal/make_status.h"
#include "google/cloud/testing_util/status_matchers.h"
#include "generator/integration_tests/golden/v1/mocks/mock_golden_thing_admin_connection.h"
#include "generator/integration_tests/test.pb.h"
#include <gmock/gmock.h>
#include <memory>

namespace google {
namespace cloud {
namespace golden_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

using ::google::cloud::golden_v1_mocks::MockGoldenThingAdminConnection;
using ::google::cloud::testing_util::StatusIs;
using ::google::test::admin::database::v1::Backup;
using ::google::test::admin::database::v1::Database;
using ::testing::Return;

TEST(GoldenThingAdminTracingConnectionTest, Options) {
  struct TestOption {
    using Type = int;
  };

  auto mock = std::make_shared<MockGoldenThingAdminConnection>();
  EXPECT_CALL(*mock, options).WillOnce(Return(Options{}.set<TestOption>(5)));

  auto under_test = GoldenThingAdminTracingConnection(mock);
  auto options = under_test.options();
  EXPECT_EQ(5, options.get<TestOption>());
}

TEST(GoldenThingAdminTracingConnectionTest, ListDatabases) {
  auto mock = std::make_shared<MockGoldenThingAdminConnection>();
  EXPECT_CALL(*mock, ListDatabases)
      .WillOnce(Return(mocks::MakeStreamRange<Database>(
          {}, internal::AbortedError("fail"))));

  auto under_test = GoldenThingAdminTracingConnection(mock);
  google::test::admin::database::v1::ListDatabasesRequest request;
  auto stream = under_test.ListDatabases(request);
  auto it = stream.begin();
  EXPECT_THAT(*it, StatusIs(StatusCode::kAborted));
  EXPECT_EQ(++it, stream.end());
}

TEST(GoldenThingAdminTracingConnectionTest, CreateDatabase) {
  auto mock = std::make_shared<MockGoldenThingAdminConnection>();
  EXPECT_CALL(*mock, CreateDatabase)
      .WillOnce(Return(make_ready_future<StatusOr<Database>>(
          internal::AbortedError("fail"))));

  auto under_test = GoldenThingAdminTracingConnection(mock);
  google::test::admin::database::v1::CreateDatabaseRequest request;
  auto result = under_test.CreateDatabase(request).get();
  EXPECT_THAT(result, StatusIs(StatusCode::kAborted));
}

TEST(GoldenThingAdminTracingConnectionTest, GetDatabase) {
  auto mock = std::make_shared<MockGoldenThingAdminConnection>();
  EXPECT_CALL(*mock, GetDatabase)
      .WillOnce(Return(internal::AbortedError("fail")));

  auto under_test = GoldenThingAdminTracingConnection(mock);
  google::test::admin::database::v1::GetDatabaseRequest request;
  auto result = under_test.GetDatabase(request);
  EXPECT_THAT(result, StatusIs(StatusCode::kAborted));
}

TEST(GoldenThingAdminTracingConnectionTest, UpdateDatabaseDdl) {
  auto mock = std::make_shared<MockGoldenThingAdminConnection>();
  using ::google::test::admin::database::v1::UpdateDatabaseDdlMetadata;
  EXPECT_CALL(*mock, UpdateDatabaseDdl)
      .WillOnce(Return(make_ready_future<StatusOr<UpdateDatabaseDdlMetadata>>(
          internal::AbortedError("fail"))));

  auto under_test = GoldenThingAdminTracingConnection(mock);
  google::test::admin::database::v1::UpdateDatabaseDdlRequest request;
  auto result = under_test.UpdateDatabaseDdl(request).get();
  EXPECT_THAT(result, StatusIs(StatusCode::kAborted));
}

TEST(GoldenThingAdminTracingConnectionTest, DropDatabase) {
  auto mock = std::make_shared<MockGoldenThingAdminConnection>();
  EXPECT_CALL(*mock, DropDatabase)
      .WillOnce(Return(internal::AbortedError("fail")));

  auto under_test = GoldenThingAdminTracingConnection(mock);
  google::test::admin::database::v1::DropDatabaseRequest request;
  auto result = under_test.DropDatabase(request);
  EXPECT_THAT(result, StatusIs(StatusCode::kAborted));
}

TEST(GoldenThingAdminTracingConnectionTest, GetDatabaseDdl) {
  auto mock = std::make_shared<MockGoldenThingAdminConnection>();
  EXPECT_CALL(*mock, GetDatabaseDdl)
      .WillOnce(Return(internal::AbortedError("fail")));

  auto under_test = GoldenThingAdminTracingConnection(mock);
  google::test::admin::database::v1::GetDatabaseDdlRequest request;
  auto result = under_test.GetDatabaseDdl(request);
  EXPECT_THAT(result, StatusIs(StatusCode::kAborted));
}

TEST(GoldenThingAdminTracingConnectionTest, SetIamPolicy) {
  auto mock = std::make_shared<MockGoldenThingAdminConnection>();
  EXPECT_CALL(*mock, SetIamPolicy)
      .WillOnce(Return(internal::AbortedError("fail")));

  auto under_test = GoldenThingAdminTracingConnection(mock);
  google::iam::v1::SetIamPolicyRequest request;
  auto result = under_test.SetIamPolicy(request);
  EXPECT_THAT(result, StatusIs(StatusCode::kAborted));
}

TEST(GoldenThingAdminTracingConnectionTest, GetIamPolicy) {
  auto mock = std::make_shared<MockGoldenThingAdminConnection>();
  EXPECT_CALL(*mock, GetIamPolicy)
      .WillOnce(Return(internal::AbortedError("fail")));

  auto under_test = GoldenThingAdminTracingConnection(mock);
  google::iam::v1::GetIamPolicyRequest request;
  auto result = under_test.GetIamPolicy(request);
  EXPECT_THAT(result, StatusIs(StatusCode::kAborted));
}

TEST(GoldenThingAdminTracingConnectionTest, TestIamPermissions) {
  auto mock = std::make_shared<MockGoldenThingAdminConnection>();
  EXPECT_CALL(*mock, TestIamPermissions)
      .WillOnce(Return(internal::AbortedError("fail")));

  auto under_test = GoldenThingAdminTracingConnection(mock);
  google::iam::v1::TestIamPermissionsRequest request;
  auto result = under_test.TestIamPermissions(request);
  EXPECT_THAT(result, StatusIs(StatusCode::kAborted));
}

TEST(GoldenThingAdminTracingConnectionTest, CreateBackup) {
  auto mock = std::make_shared<MockGoldenThingAdminConnection>();
  EXPECT_CALL(*mock, CreateBackup)
      .WillOnce(Return(
          make_ready_future<StatusOr<Backup>>(internal::AbortedError("fail"))));

  auto under_test = GoldenThingAdminTracingConnection(mock);
  google::test::admin::database::v1::CreateBackupRequest request;
  auto result = under_test.CreateBackup(request).get();
  EXPECT_THAT(result, StatusIs(StatusCode::kAborted));
}

TEST(GoldenThingAdminTracingConnectionTest, GetBackup) {
  auto mock = std::make_shared<MockGoldenThingAdminConnection>();
  EXPECT_CALL(*mock, GetBackup)
      .WillOnce(Return(internal::AbortedError("fail")));

  auto under_test = GoldenThingAdminTracingConnection(mock);
  google::test::admin::database::v1::GetBackupRequest request;
  auto result = under_test.GetBackup(request);
  EXPECT_THAT(result, StatusIs(StatusCode::kAborted));
}

TEST(GoldenThingAdminTracingConnectionTest, UpdateBackup) {
  auto mock = std::make_shared<MockGoldenThingAdminConnection>();
  EXPECT_CALL(*mock, UpdateBackup)
      .WillOnce(Return(internal::AbortedError("fail")));

  auto under_test = GoldenThingAdminTracingConnection(mock);
  google::test::admin::database::v1::UpdateBackupRequest request;
  auto result = under_test.UpdateBackup(request);
  EXPECT_THAT(result, StatusIs(StatusCode::kAborted));
}

TEST(GoldenThingAdminTracingConnectionTest, DeleteBackup) {
  auto mock = std::make_shared<MockGoldenThingAdminConnection>();
  EXPECT_CALL(*mock, DeleteBackup)
      .WillOnce(Return(internal::AbortedError("fail")));

  auto under_test = GoldenThingAdminTracingConnection(mock);
  google::test::admin::database::v1::DeleteBackupRequest request;
  auto result = under_test.DeleteBackup(request);
  EXPECT_THAT(result, StatusIs(StatusCode::kAborted));
}

TEST(GoldenThingAdminTracingConnectionTest, ListBackups) {
  auto mock = std::make_shared<MockGoldenThingAdminConnection>();
  EXPECT_CALL(*mock, ListBackups)
      .WillOnce(Return(
          mocks::MakeStreamRange<Backup>({}, internal::AbortedError("fail"))));

  auto under_test = GoldenThingAdminTracingConnection(mock);
  google::test::admin::database::v1::ListBackupsRequest request;
  auto stream = under_test.ListBackups(request);
  auto it = stream.begin();
  EXPECT_THAT(*it, StatusIs(StatusCode::kAborted));
  EXPECT_EQ(++it, stream.end());
}

TEST(GoldenThingAdminTracingConnectionTest, RestoreDatabase) {
  auto mock = std::make_shared<MockGoldenThingAdminConnection>();
  EXPECT_CALL(*mock, RestoreDatabase)
      .WillOnce(Return(make_ready_future<StatusOr<Database>>(
          internal::AbortedError("fail"))));

  auto under_test = GoldenThingAdminTracingConnection(mock);
  google::test::admin::database::v1::RestoreDatabaseRequest request;
  auto result = under_test.RestoreDatabase(request).get();
  EXPECT_THAT(result, StatusIs(StatusCode::kAborted));
}

TEST(GoldenThingAdminTracingConnectionTest, ListDatabaseOperations) {
  auto mock = std::make_shared<MockGoldenThingAdminConnection>();
  EXPECT_CALL(*mock, ListDatabaseOperations)
      .WillOnce(Return(mocks::MakeStreamRange<google::longrunning::Operation>(
          {}, internal::AbortedError("fail"))));

  auto under_test = GoldenThingAdminTracingConnection(mock);
  google::test::admin::database::v1::ListDatabaseOperationsRequest request;
  auto stream = under_test.ListDatabaseOperations(request);
  auto it = stream.begin();
  EXPECT_THAT(*it, StatusIs(StatusCode::kAborted));
  EXPECT_EQ(++it, stream.end());
}

TEST(GoldenThingAdminTracingConnectionTest, ListBackupOperations) {
  auto mock = std::make_shared<MockGoldenThingAdminConnection>();
  EXPECT_CALL(*mock, ListBackupOperations)
      .WillOnce(Return(mocks::MakeStreamRange<google::longrunning::Operation>(
          {}, internal::AbortedError("fail"))));

  auto under_test = GoldenThingAdminTracingConnection(mock);
  google::test::admin::database::v1::ListBackupOperationsRequest request;
  auto stream = under_test.ListBackupOperations(request);
  auto it = stream.begin();
  EXPECT_THAT(*it, StatusIs(StatusCode::kAborted));
  EXPECT_EQ(++it, stream.end());
}

TEST(GoldenThingAdminTracingConnectionTest, LongRunningWithoutRouting) {
  auto mock = std::make_shared<MockGoldenThingAdminConnection>();
  EXPECT_CALL(*mock, LongRunningWithoutRouting)
      .WillOnce(Return(make_ready_future<StatusOr<Database>>(
          internal::AbortedError("fail"))));

  auto under_test = GoldenThingAdminTracingConnection(mock);
  google::test::admin::database::v1::RestoreDatabaseRequest request;
  auto result = under_test.LongRunningWithoutRouting(request).get();
  EXPECT_THAT(result, StatusIs(StatusCode::kAborted));
}

TEST(GoldenThingAdminTracingConnectionTest, AsyncGetDatabase) {
  auto mock = std::make_shared<MockGoldenThingAdminConnection>();
  EXPECT_CALL(*mock, AsyncGetDatabase)
      .WillOnce(Return(make_ready_future<StatusOr<Database>>(
          internal::AbortedError("fail"))));

  auto under_test = GoldenThingAdminTracingConnection(mock);
  google::test::admin::database::v1::GetDatabaseRequest request;
  auto result = under_test.AsyncGetDatabase(request).get();
  EXPECT_THAT(result, StatusIs(StatusCode::kAborted));
}

TEST(GoldenThingAdminTracingConnectionTest, AsyncDropDatabase) {
  auto mock = std::make_shared<MockGoldenThingAdminConnection>();
  EXPECT_CALL(*mock, AsyncDropDatabase)
      .WillOnce(Return(make_ready_future(internal::AbortedError("fail"))));

  auto under_test = GoldenThingAdminTracingConnection(mock);
  google::test::admin::database::v1::DropDatabaseRequest request;
  auto result = under_test.AsyncDropDatabase(request).get();
  EXPECT_THAT(result, StatusIs(StatusCode::kAborted));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

}  // namespace
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1_internal
}  // namespace cloud
}  // namespace google
