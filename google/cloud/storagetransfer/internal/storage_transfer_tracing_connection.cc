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
// source: google/storagetransfer/v1/transfer.proto

#include "google/cloud/storagetransfer/internal/storage_transfer_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace storagetransfer_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

StorageTransferServiceTracingConnection::
    StorageTransferServiceTracingConnection(
        std::shared_ptr<storagetransfer::StorageTransferServiceConnection>
            child)
    : child_(std::move(child)) {}

StatusOr<google::storagetransfer::v1::GoogleServiceAccount>
StorageTransferServiceTracingConnection::GetGoogleServiceAccount(
    google::storagetransfer::v1::GetGoogleServiceAccountRequest const&
        request) {
  return child_->GetGoogleServiceAccount(request);
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceTracingConnection::CreateTransferJob(
    google::storagetransfer::v1::CreateTransferJobRequest const& request) {
  return child_->CreateTransferJob(request);
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceTracingConnection::UpdateTransferJob(
    google::storagetransfer::v1::UpdateTransferJobRequest const& request) {
  return child_->UpdateTransferJob(request);
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceTracingConnection::GetTransferJob(
    google::storagetransfer::v1::GetTransferJobRequest const& request) {
  return child_->GetTransferJob(request);
}

StreamRange<google::storagetransfer::v1::TransferJob>
StorageTransferServiceTracingConnection::ListTransferJobs(
    google::storagetransfer::v1::ListTransferJobsRequest request) {
  return child_->ListTransferJobs(request);
}

Status StorageTransferServiceTracingConnection::PauseTransferOperation(
    google::storagetransfer::v1::PauseTransferOperationRequest const& request) {
  return child_->PauseTransferOperation(request);
}

Status StorageTransferServiceTracingConnection::ResumeTransferOperation(
    google::storagetransfer::v1::ResumeTransferOperationRequest const&
        request) {
  return child_->ResumeTransferOperation(request);
}

future<StatusOr<google::storagetransfer::v1::TransferOperation>>
StorageTransferServiceTracingConnection::RunTransferJob(
    google::storagetransfer::v1::RunTransferJobRequest const& request) {
  return child_->RunTransferJob(request);
}

Status StorageTransferServiceTracingConnection::DeleteTransferJob(
    google::storagetransfer::v1::DeleteTransferJobRequest const& request) {
  return child_->DeleteTransferJob(request);
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceTracingConnection::CreateAgentPool(
    google::storagetransfer::v1::CreateAgentPoolRequest const& request) {
  return child_->CreateAgentPool(request);
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceTracingConnection::UpdateAgentPool(
    google::storagetransfer::v1::UpdateAgentPoolRequest const& request) {
  return child_->UpdateAgentPool(request);
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceTracingConnection::GetAgentPool(
    google::storagetransfer::v1::GetAgentPoolRequest const& request) {
  return child_->GetAgentPool(request);
}

StreamRange<google::storagetransfer::v1::AgentPool>
StorageTransferServiceTracingConnection::ListAgentPools(
    google::storagetransfer::v1::ListAgentPoolsRequest request) {
  return child_->ListAgentPools(request);
}

Status StorageTransferServiceTracingConnection::DeleteAgentPool(
    google::storagetransfer::v1::DeleteAgentPoolRequest const& request) {
  return child_->DeleteAgentPool(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagetransfer_internal
}  // namespace cloud
}  // namespace google