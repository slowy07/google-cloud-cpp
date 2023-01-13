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
// source: google/devtools/artifactregistry/v1/service.proto

#include "google/cloud/artifactregistry/internal/artifact_registry_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace artifactregistry_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ArtifactRegistryTracingConnection::ArtifactRegistryTracingConnection(
    std::shared_ptr<artifactregistry::ArtifactRegistryConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::devtools::artifactregistry::v1::DockerImage>
ArtifactRegistryTracingConnection::ListDockerImages(
    google::devtools::artifactregistry::v1::ListDockerImagesRequest request) {
  return child_->ListDockerImages(request);
}

StatusOr<google::devtools::artifactregistry::v1::DockerImage>
ArtifactRegistryTracingConnection::GetDockerImage(
    google::devtools::artifactregistry::v1::GetDockerImageRequest const&
        request) {
  return child_->GetDockerImage(request);
}

future<StatusOr<
    google::devtools::artifactregistry::v1::ImportAptArtifactsResponse>>
ArtifactRegistryTracingConnection::ImportAptArtifacts(
    google::devtools::artifactregistry::v1::ImportAptArtifactsRequest const&
        request) {
  return child_->ImportAptArtifacts(request);
}

future<StatusOr<
    google::devtools::artifactregistry::v1::ImportYumArtifactsResponse>>
ArtifactRegistryTracingConnection::ImportYumArtifacts(
    google::devtools::artifactregistry::v1::ImportYumArtifactsRequest const&
        request) {
  return child_->ImportYumArtifacts(request);
}

StreamRange<google::devtools::artifactregistry::v1::Repository>
ArtifactRegistryTracingConnection::ListRepositories(
    google::devtools::artifactregistry::v1::ListRepositoriesRequest request) {
  return child_->ListRepositories(request);
}

StatusOr<google::devtools::artifactregistry::v1::Repository>
ArtifactRegistryTracingConnection::GetRepository(
    google::devtools::artifactregistry::v1::GetRepositoryRequest const&
        request) {
  return child_->GetRepository(request);
}

future<StatusOr<google::devtools::artifactregistry::v1::Repository>>
ArtifactRegistryTracingConnection::CreateRepository(
    google::devtools::artifactregistry::v1::CreateRepositoryRequest const&
        request) {
  return child_->CreateRepository(request);
}

StatusOr<google::devtools::artifactregistry::v1::Repository>
ArtifactRegistryTracingConnection::UpdateRepository(
    google::devtools::artifactregistry::v1::UpdateRepositoryRequest const&
        request) {
  return child_->UpdateRepository(request);
}

future<StatusOr<google::devtools::artifactregistry::v1::OperationMetadata>>
ArtifactRegistryTracingConnection::DeleteRepository(
    google::devtools::artifactregistry::v1::DeleteRepositoryRequest const&
        request) {
  return child_->DeleteRepository(request);
}

StreamRange<google::devtools::artifactregistry::v1::Package>
ArtifactRegistryTracingConnection::ListPackages(
    google::devtools::artifactregistry::v1::ListPackagesRequest request) {
  return child_->ListPackages(request);
}

StatusOr<google::devtools::artifactregistry::v1::Package>
ArtifactRegistryTracingConnection::GetPackage(
    google::devtools::artifactregistry::v1::GetPackageRequest const& request) {
  return child_->GetPackage(request);
}

future<StatusOr<google::devtools::artifactregistry::v1::OperationMetadata>>
ArtifactRegistryTracingConnection::DeletePackage(
    google::devtools::artifactregistry::v1::DeletePackageRequest const&
        request) {
  return child_->DeletePackage(request);
}

StreamRange<google::devtools::artifactregistry::v1::Version>
ArtifactRegistryTracingConnection::ListVersions(
    google::devtools::artifactregistry::v1::ListVersionsRequest request) {
  return child_->ListVersions(request);
}

StatusOr<google::devtools::artifactregistry::v1::Version>
ArtifactRegistryTracingConnection::GetVersion(
    google::devtools::artifactregistry::v1::GetVersionRequest const& request) {
  return child_->GetVersion(request);
}

future<StatusOr<google::devtools::artifactregistry::v1::OperationMetadata>>
ArtifactRegistryTracingConnection::DeleteVersion(
    google::devtools::artifactregistry::v1::DeleteVersionRequest const&
        request) {
  return child_->DeleteVersion(request);
}

StreamRange<google::devtools::artifactregistry::v1::File>
ArtifactRegistryTracingConnection::ListFiles(
    google::devtools::artifactregistry::v1::ListFilesRequest request) {
  return child_->ListFiles(request);
}

StatusOr<google::devtools::artifactregistry::v1::File>
ArtifactRegistryTracingConnection::GetFile(
    google::devtools::artifactregistry::v1::GetFileRequest const& request) {
  return child_->GetFile(request);
}

StreamRange<google::devtools::artifactregistry::v1::Tag>
ArtifactRegistryTracingConnection::ListTags(
    google::devtools::artifactregistry::v1::ListTagsRequest request) {
  return child_->ListTags(request);
}

StatusOr<google::devtools::artifactregistry::v1::Tag>
ArtifactRegistryTracingConnection::GetTag(
    google::devtools::artifactregistry::v1::GetTagRequest const& request) {
  return child_->GetTag(request);
}

StatusOr<google::devtools::artifactregistry::v1::Tag>
ArtifactRegistryTracingConnection::CreateTag(
    google::devtools::artifactregistry::v1::CreateTagRequest const& request) {
  return child_->CreateTag(request);
}

StatusOr<google::devtools::artifactregistry::v1::Tag>
ArtifactRegistryTracingConnection::UpdateTag(
    google::devtools::artifactregistry::v1::UpdateTagRequest const& request) {
  return child_->UpdateTag(request);
}

Status ArtifactRegistryTracingConnection::DeleteTag(
    google::devtools::artifactregistry::v1::DeleteTagRequest const& request) {
  return child_->DeleteTag(request);
}

StatusOr<google::iam::v1::Policy>
ArtifactRegistryTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return child_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy>
ArtifactRegistryTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  return child_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ArtifactRegistryTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return child_->TestIamPermissions(request);
}

StatusOr<google::devtools::artifactregistry::v1::ProjectSettings>
ArtifactRegistryTracingConnection::GetProjectSettings(
    google::devtools::artifactregistry::v1::GetProjectSettingsRequest const&
        request) {
  return child_->GetProjectSettings(request);
}

StatusOr<google::devtools::artifactregistry::v1::ProjectSettings>
ArtifactRegistryTracingConnection::UpdateProjectSettings(
    google::devtools::artifactregistry::v1::UpdateProjectSettingsRequest const&
        request) {
  return child_->UpdateProjectSettings(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace artifactregistry_internal
}  // namespace cloud
}  // namespace google