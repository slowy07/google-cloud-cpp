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
// source: google/cloud/retail/v2/catalog_service.proto

#include "google/cloud/retail/internal/catalog_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CatalogServiceTracingConnection::CatalogServiceTracingConnection(
    std::shared_ptr<retail::CatalogServiceConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::retail::v2::Catalog>
CatalogServiceTracingConnection::ListCatalogs(
    google::cloud::retail::v2::ListCatalogsRequest request) {
  return child_->ListCatalogs(request);
}

StatusOr<google::cloud::retail::v2::Catalog>
CatalogServiceTracingConnection::UpdateCatalog(
    google::cloud::retail::v2::UpdateCatalogRequest const& request) {
  return child_->UpdateCatalog(request);
}

Status CatalogServiceTracingConnection::SetDefaultBranch(
    google::cloud::retail::v2::SetDefaultBranchRequest const& request) {
  return child_->SetDefaultBranch(request);
}

StatusOr<google::cloud::retail::v2::GetDefaultBranchResponse>
CatalogServiceTracingConnection::GetDefaultBranch(
    google::cloud::retail::v2::GetDefaultBranchRequest const& request) {
  return child_->GetDefaultBranch(request);
}

StatusOr<google::cloud::retail::v2::CompletionConfig>
CatalogServiceTracingConnection::GetCompletionConfig(
    google::cloud::retail::v2::GetCompletionConfigRequest const& request) {
  return child_->GetCompletionConfig(request);
}

StatusOr<google::cloud::retail::v2::CompletionConfig>
CatalogServiceTracingConnection::UpdateCompletionConfig(
    google::cloud::retail::v2::UpdateCompletionConfigRequest const& request) {
  return child_->UpdateCompletionConfig(request);
}

StatusOr<google::cloud::retail::v2::AttributesConfig>
CatalogServiceTracingConnection::GetAttributesConfig(
    google::cloud::retail::v2::GetAttributesConfigRequest const& request) {
  return child_->GetAttributesConfig(request);
}

StatusOr<google::cloud::retail::v2::AttributesConfig>
CatalogServiceTracingConnection::UpdateAttributesConfig(
    google::cloud::retail::v2::UpdateAttributesConfigRequest const& request) {
  return child_->UpdateAttributesConfig(request);
}

StatusOr<google::cloud::retail::v2::AttributesConfig>
CatalogServiceTracingConnection::AddCatalogAttribute(
    google::cloud::retail::v2::AddCatalogAttributeRequest const& request) {
  return child_->AddCatalogAttribute(request);
}

StatusOr<google::cloud::retail::v2::AttributesConfig>
CatalogServiceTracingConnection::RemoveCatalogAttribute(
    google::cloud::retail::v2::RemoveCatalogAttributeRequest const& request) {
  return child_->RemoveCatalogAttribute(request);
}

StatusOr<google::cloud::retail::v2::AttributesConfig>
CatalogServiceTracingConnection::ReplaceCatalogAttribute(
    google::cloud::retail::v2::ReplaceCatalogAttributeRequest const& request) {
  return child_->ReplaceCatalogAttribute(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_internal
}  // namespace cloud
}  // namespace google