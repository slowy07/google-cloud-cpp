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
// source: google/cloud/dataproc/v1/workflow_templates.proto

#include "google/cloud/dataproc/internal/workflow_template_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace dataproc_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

WorkflowTemplateServiceTracingConnection::
    WorkflowTemplateServiceTracingConnection(
        std::shared_ptr<dataproc::WorkflowTemplateServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceTracingConnection::CreateWorkflowTemplate(
    google::cloud::dataproc::v1::CreateWorkflowTemplateRequest const& request) {
  return child_->CreateWorkflowTemplate(request);
}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceTracingConnection::GetWorkflowTemplate(
    google::cloud::dataproc::v1::GetWorkflowTemplateRequest const& request) {
  return child_->GetWorkflowTemplate(request);
}

future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
WorkflowTemplateServiceTracingConnection::InstantiateWorkflowTemplate(
    google::cloud::dataproc::v1::InstantiateWorkflowTemplateRequest const&
        request) {
  return child_->InstantiateWorkflowTemplate(request);
}

future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
WorkflowTemplateServiceTracingConnection::InstantiateInlineWorkflowTemplate(
    google::cloud::dataproc::v1::InstantiateInlineWorkflowTemplateRequest const&
        request) {
  return child_->InstantiateInlineWorkflowTemplate(request);
}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceTracingConnection::UpdateWorkflowTemplate(
    google::cloud::dataproc::v1::UpdateWorkflowTemplateRequest const& request) {
  return child_->UpdateWorkflowTemplate(request);
}

StreamRange<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceTracingConnection::ListWorkflowTemplates(
    google::cloud::dataproc::v1::ListWorkflowTemplatesRequest request) {
  return child_->ListWorkflowTemplates(request);
}

Status WorkflowTemplateServiceTracingConnection::DeleteWorkflowTemplate(
    google::cloud::dataproc::v1::DeleteWorkflowTemplateRequest const& request) {
  return child_->DeleteWorkflowTemplate(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_internal
}  // namespace cloud
}  // namespace google
