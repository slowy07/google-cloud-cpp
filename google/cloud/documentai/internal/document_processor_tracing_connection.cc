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
// source: google/cloud/documentai/v1/document_processor_service.proto

#include "google/cloud/documentai/internal/document_processor_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace documentai_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DocumentProcessorServiceTracingConnection::
    DocumentProcessorServiceTracingConnection(
        std::shared_ptr<documentai::DocumentProcessorServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::documentai::v1::ProcessResponse>
DocumentProcessorServiceTracingConnection::ProcessDocument(
    google::cloud::documentai::v1::ProcessRequest const& request) {
  return child_->ProcessDocument(request);
}

future<StatusOr<google::cloud::documentai::v1::BatchProcessResponse>>
DocumentProcessorServiceTracingConnection::BatchProcessDocuments(
    google::cloud::documentai::v1::BatchProcessRequest const& request) {
  return child_->BatchProcessDocuments(request);
}

StatusOr<google::cloud::documentai::v1::FetchProcessorTypesResponse>
DocumentProcessorServiceTracingConnection::FetchProcessorTypes(
    google::cloud::documentai::v1::FetchProcessorTypesRequest const& request) {
  return child_->FetchProcessorTypes(request);
}

StreamRange<google::cloud::documentai::v1::ProcessorType>
DocumentProcessorServiceTracingConnection::ListProcessorTypes(
    google::cloud::documentai::v1::ListProcessorTypesRequest request) {
  return child_->ListProcessorTypes(request);
}

StreamRange<google::cloud::documentai::v1::Processor>
DocumentProcessorServiceTracingConnection::ListProcessors(
    google::cloud::documentai::v1::ListProcessorsRequest request) {
  return child_->ListProcessors(request);
}

StatusOr<google::cloud::documentai::v1::Processor>
DocumentProcessorServiceTracingConnection::GetProcessor(
    google::cloud::documentai::v1::GetProcessorRequest const& request) {
  return child_->GetProcessor(request);
}

StatusOr<google::cloud::documentai::v1::ProcessorVersion>
DocumentProcessorServiceTracingConnection::GetProcessorVersion(
    google::cloud::documentai::v1::GetProcessorVersionRequest const& request) {
  return child_->GetProcessorVersion(request);
}

StreamRange<google::cloud::documentai::v1::ProcessorVersion>
DocumentProcessorServiceTracingConnection::ListProcessorVersions(
    google::cloud::documentai::v1::ListProcessorVersionsRequest request) {
  return child_->ListProcessorVersions(request);
}

future<StatusOr<google::cloud::documentai::v1::DeleteProcessorVersionMetadata>>
DocumentProcessorServiceTracingConnection::DeleteProcessorVersion(
    google::cloud::documentai::v1::DeleteProcessorVersionRequest const&
        request) {
  return child_->DeleteProcessorVersion(request);
}

future<StatusOr<google::cloud::documentai::v1::DeployProcessorVersionResponse>>
DocumentProcessorServiceTracingConnection::DeployProcessorVersion(
    google::cloud::documentai::v1::DeployProcessorVersionRequest const&
        request) {
  return child_->DeployProcessorVersion(request);
}

future<
    StatusOr<google::cloud::documentai::v1::UndeployProcessorVersionResponse>>
DocumentProcessorServiceTracingConnection::UndeployProcessorVersion(
    google::cloud::documentai::v1::UndeployProcessorVersionRequest const&
        request) {
  return child_->UndeployProcessorVersion(request);
}

StatusOr<google::cloud::documentai::v1::Processor>
DocumentProcessorServiceTracingConnection::CreateProcessor(
    google::cloud::documentai::v1::CreateProcessorRequest const& request) {
  return child_->CreateProcessor(request);
}

future<StatusOr<google::cloud::documentai::v1::DeleteProcessorMetadata>>
DocumentProcessorServiceTracingConnection::DeleteProcessor(
    google::cloud::documentai::v1::DeleteProcessorRequest const& request) {
  return child_->DeleteProcessor(request);
}

future<StatusOr<google::cloud::documentai::v1::EnableProcessorResponse>>
DocumentProcessorServiceTracingConnection::EnableProcessor(
    google::cloud::documentai::v1::EnableProcessorRequest const& request) {
  return child_->EnableProcessor(request);
}

future<StatusOr<google::cloud::documentai::v1::DisableProcessorResponse>>
DocumentProcessorServiceTracingConnection::DisableProcessor(
    google::cloud::documentai::v1::DisableProcessorRequest const& request) {
  return child_->DisableProcessor(request);
}

future<
    StatusOr<google::cloud::documentai::v1::SetDefaultProcessorVersionResponse>>
DocumentProcessorServiceTracingConnection::SetDefaultProcessorVersion(
    google::cloud::documentai::v1::SetDefaultProcessorVersionRequest const&
        request) {
  return child_->SetDefaultProcessorVersion(request);
}

future<StatusOr<google::cloud::documentai::v1::ReviewDocumentResponse>>
DocumentProcessorServiceTracingConnection::ReviewDocument(
    google::cloud::documentai::v1::ReviewDocumentRequest const& request) {
  return child_->ReviewDocument(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace documentai_internal
}  // namespace cloud
}  // namespace google
