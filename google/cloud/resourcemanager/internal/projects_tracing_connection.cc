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
// source: google/cloud/resourcemanager/v3/projects.proto

#include "google/cloud/resourcemanager/internal/projects_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ProjectsTracingConnection::ProjectsTracingConnection(
    std::shared_ptr<resourcemanager::ProjectsConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::resourcemanager::v3::Project>
ProjectsTracingConnection::GetProject(
    google::cloud::resourcemanager::v3::GetProjectRequest const& request) {
  return child_->GetProject(request);
}

StreamRange<google::cloud::resourcemanager::v3::Project>
ProjectsTracingConnection::ListProjects(
    google::cloud::resourcemanager::v3::ListProjectsRequest request) {
  return child_->ListProjects(request);
}

StreamRange<google::cloud::resourcemanager::v3::Project>
ProjectsTracingConnection::SearchProjects(
    google::cloud::resourcemanager::v3::SearchProjectsRequest request) {
  return child_->SearchProjects(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsTracingConnection::CreateProject(
    google::cloud::resourcemanager::v3::CreateProjectRequest const& request) {
  return child_->CreateProject(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsTracingConnection::UpdateProject(
    google::cloud::resourcemanager::v3::UpdateProjectRequest const& request) {
  return child_->UpdateProject(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsTracingConnection::MoveProject(
    google::cloud::resourcemanager::v3::MoveProjectRequest const& request) {
  return child_->MoveProject(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsTracingConnection::DeleteProject(
    google::cloud::resourcemanager::v3::DeleteProjectRequest const& request) {
  return child_->DeleteProject(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsTracingConnection::UndeleteProject(
    google::cloud::resourcemanager::v3::UndeleteProjectRequest const& request) {
  return child_->UndeleteProject(request);
}

StatusOr<google::iam::v1::Policy> ProjectsTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  return child_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> ProjectsTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return child_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ProjectsTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return child_->TestIamPermissions(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_internal
}  // namespace cloud
}  // namespace google