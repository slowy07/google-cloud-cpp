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
// source: google/cloud/bigquery/datatransfer/v1/datatransfer.proto

#include "google/cloud/bigquery/internal/data_transfer_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DataTransferServiceTracingConnection::DataTransferServiceTracingConnection(
    std::shared_ptr<bigquery::DataTransferServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::bigquery::datatransfer::v1::DataSource>
DataTransferServiceTracingConnection::GetDataSource(
    google::cloud::bigquery::datatransfer::v1::GetDataSourceRequest const&
        request) {
  return child_->GetDataSource(request);
}

StreamRange<google::cloud::bigquery::datatransfer::v1::DataSource>
DataTransferServiceTracingConnection::ListDataSources(
    google::cloud::bigquery::datatransfer::v1::ListDataSourcesRequest request) {
  return child_->ListDataSources(request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceTracingConnection::CreateTransferConfig(
    google::cloud::bigquery::datatransfer::v1::
        CreateTransferConfigRequest const& request) {
  return child_->CreateTransferConfig(request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceTracingConnection::UpdateTransferConfig(
    google::cloud::bigquery::datatransfer::v1::
        UpdateTransferConfigRequest const& request) {
  return child_->UpdateTransferConfig(request);
}

Status DataTransferServiceTracingConnection::DeleteTransferConfig(
    google::cloud::bigquery::datatransfer::v1::
        DeleteTransferConfigRequest const& request) {
  return child_->DeleteTransferConfig(request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceTracingConnection::GetTransferConfig(
    google::cloud::bigquery::datatransfer::v1::GetTransferConfigRequest const&
        request) {
  return child_->GetTransferConfig(request);
}

StreamRange<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceTracingConnection::ListTransferConfigs(
    google::cloud::bigquery::datatransfer::v1::ListTransferConfigsRequest
        request) {
  return child_->ListTransferConfigs(request);
}

StatusOr<
    google::cloud::bigquery::datatransfer::v1::ScheduleTransferRunsResponse>
DataTransferServiceTracingConnection::ScheduleTransferRuns(
    google::cloud::bigquery::datatransfer::v1::
        ScheduleTransferRunsRequest const& request) {
  return child_->ScheduleTransferRuns(request);
}

StatusOr<
    google::cloud::bigquery::datatransfer::v1::StartManualTransferRunsResponse>
DataTransferServiceTracingConnection::StartManualTransferRuns(
    google::cloud::bigquery::datatransfer::v1::
        StartManualTransferRunsRequest const& request) {
  return child_->StartManualTransferRuns(request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferRun>
DataTransferServiceTracingConnection::GetTransferRun(
    google::cloud::bigquery::datatransfer::v1::GetTransferRunRequest const&
        request) {
  return child_->GetTransferRun(request);
}

Status DataTransferServiceTracingConnection::DeleteTransferRun(
    google::cloud::bigquery::datatransfer::v1::DeleteTransferRunRequest const&
        request) {
  return child_->DeleteTransferRun(request);
}

StreamRange<google::cloud::bigquery::datatransfer::v1::TransferRun>
DataTransferServiceTracingConnection::ListTransferRuns(
    google::cloud::bigquery::datatransfer::v1::ListTransferRunsRequest
        request) {
  return child_->ListTransferRuns(request);
}

StreamRange<google::cloud::bigquery::datatransfer::v1::TransferMessage>
DataTransferServiceTracingConnection::ListTransferLogs(
    google::cloud::bigquery::datatransfer::v1::ListTransferLogsRequest
        request) {
  return child_->ListTransferLogs(request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::CheckValidCredsResponse>
DataTransferServiceTracingConnection::CheckValidCreds(
    google::cloud::bigquery::datatransfer::v1::CheckValidCredsRequest const&
        request) {
  return child_->CheckValidCreds(request);
}

Status DataTransferServiceTracingConnection::EnrollDataSources(
    google::cloud::bigquery::datatransfer::v1::EnrollDataSourcesRequest const&
        request) {
  return child_->EnrollDataSources(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_internal
}  // namespace cloud
}  // namespace google
