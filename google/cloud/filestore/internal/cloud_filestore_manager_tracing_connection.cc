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

#include "google/cloud/filestore/internal/cloud_filestore_manager_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace filestore_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CloudFilestoreManagerTracingConnection::CloudFilestoreManagerTracingConnection(
    std::shared_ptr<filestore::CloudFilestoreManagerConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::filestore::v1::Instance>
CloudFilestoreManagerTracingConnection::ListInstances(
    google::cloud::filestore::v1::ListInstancesRequest request) {
  return child_->ListInstances(request);
}

StatusOr<google::cloud::filestore::v1::Instance>
CloudFilestoreManagerTracingConnection::GetInstance(
    google::cloud::filestore::v1::GetInstanceRequest const& request) {
  return child_->GetInstance(request);
}

future<StatusOr<google::cloud::filestore::v1::Instance>>
CloudFilestoreManagerTracingConnection::CreateInstance(
    google::cloud::filestore::v1::CreateInstanceRequest const& request) {
  return child_->CreateInstance(request);
}

future<StatusOr<google::cloud::filestore::v1::Instance>>
CloudFilestoreManagerTracingConnection::UpdateInstance(
    google::cloud::filestore::v1::UpdateInstanceRequest const& request) {
  return child_->UpdateInstance(request);
}

future<StatusOr<google::cloud::filestore::v1::Instance>>
CloudFilestoreManagerTracingConnection::RestoreInstance(
    google::cloud::filestore::v1::RestoreInstanceRequest const& request) {
  return child_->RestoreInstance(request);
}

future<StatusOr<google::cloud::common::OperationMetadata>>
CloudFilestoreManagerTracingConnection::DeleteInstance(
    google::cloud::filestore::v1::DeleteInstanceRequest const& request) {
  return child_->DeleteInstance(request);
}

StreamRange<google::cloud::filestore::v1::Backup>
CloudFilestoreManagerTracingConnection::ListBackups(
    google::cloud::filestore::v1::ListBackupsRequest request) {
  return child_->ListBackups(request);
}

StatusOr<google::cloud::filestore::v1::Backup>
CloudFilestoreManagerTracingConnection::GetBackup(
    google::cloud::filestore::v1::GetBackupRequest const& request) {
  return child_->GetBackup(request);
}

future<StatusOr<google::cloud::filestore::v1::Backup>>
CloudFilestoreManagerTracingConnection::CreateBackup(
    google::cloud::filestore::v1::CreateBackupRequest const& request) {
  return child_->CreateBackup(request);
}

future<StatusOr<google::cloud::common::OperationMetadata>>
CloudFilestoreManagerTracingConnection::DeleteBackup(
    google::cloud::filestore::v1::DeleteBackupRequest const& request) {
  return child_->DeleteBackup(request);
}

future<StatusOr<google::cloud::filestore::v1::Backup>>
CloudFilestoreManagerTracingConnection::UpdateBackup(
    google::cloud::filestore::v1::UpdateBackupRequest const& request) {
  return child_->UpdateBackup(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace filestore_internal
}  // namespace cloud
}  // namespace google