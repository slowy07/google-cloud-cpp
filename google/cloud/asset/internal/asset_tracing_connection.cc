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
// source: google/cloud/asset/v1/asset_service.proto

#include "google/cloud/asset/internal/asset_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace asset_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AssetServiceTracingConnection::AssetServiceTracingConnection(
    std::shared_ptr<asset::AssetServiceConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::asset::v1::ExportAssetsResponse>>
AssetServiceTracingConnection::ExportAssets(
    google::cloud::asset::v1::ExportAssetsRequest const& request) {
  return child_->ExportAssets(request);
}

StreamRange<google::cloud::asset::v1::Asset>
AssetServiceTracingConnection::ListAssets(
    google::cloud::asset::v1::ListAssetsRequest request) {
  return child_->ListAssets(request);
}

StatusOr<google::cloud::asset::v1::BatchGetAssetsHistoryResponse>
AssetServiceTracingConnection::BatchGetAssetsHistory(
    google::cloud::asset::v1::BatchGetAssetsHistoryRequest const& request) {
  return child_->BatchGetAssetsHistory(request);
}

StatusOr<google::cloud::asset::v1::Feed>
AssetServiceTracingConnection::CreateFeed(
    google::cloud::asset::v1::CreateFeedRequest const& request) {
  return child_->CreateFeed(request);
}

StatusOr<google::cloud::asset::v1::Feed> AssetServiceTracingConnection::GetFeed(
    google::cloud::asset::v1::GetFeedRequest const& request) {
  return child_->GetFeed(request);
}

StatusOr<google::cloud::asset::v1::ListFeedsResponse>
AssetServiceTracingConnection::ListFeeds(
    google::cloud::asset::v1::ListFeedsRequest const& request) {
  return child_->ListFeeds(request);
}

StatusOr<google::cloud::asset::v1::Feed>
AssetServiceTracingConnection::UpdateFeed(
    google::cloud::asset::v1::UpdateFeedRequest const& request) {
  return child_->UpdateFeed(request);
}

Status AssetServiceTracingConnection::DeleteFeed(
    google::cloud::asset::v1::DeleteFeedRequest const& request) {
  return child_->DeleteFeed(request);
}

StreamRange<google::cloud::asset::v1::ResourceSearchResult>
AssetServiceTracingConnection::SearchAllResources(
    google::cloud::asset::v1::SearchAllResourcesRequest request) {
  return child_->SearchAllResources(request);
}

StreamRange<google::cloud::asset::v1::IamPolicySearchResult>
AssetServiceTracingConnection::SearchAllIamPolicies(
    google::cloud::asset::v1::SearchAllIamPoliciesRequest request) {
  return child_->SearchAllIamPolicies(request);
}

StatusOr<google::cloud::asset::v1::AnalyzeIamPolicyResponse>
AssetServiceTracingConnection::AnalyzeIamPolicy(
    google::cloud::asset::v1::AnalyzeIamPolicyRequest const& request) {
  return child_->AnalyzeIamPolicy(request);
}

future<StatusOr<google::cloud::asset::v1::AnalyzeIamPolicyLongrunningResponse>>
AssetServiceTracingConnection::AnalyzeIamPolicyLongrunning(
    google::cloud::asset::v1::AnalyzeIamPolicyLongrunningRequest const&
        request) {
  return child_->AnalyzeIamPolicyLongrunning(request);
}

StatusOr<google::cloud::asset::v1::AnalyzeMoveResponse>
AssetServiceTracingConnection::AnalyzeMove(
    google::cloud::asset::v1::AnalyzeMoveRequest const& request) {
  return child_->AnalyzeMove(request);
}

StatusOr<google::cloud::asset::v1::QueryAssetsResponse>
AssetServiceTracingConnection::QueryAssets(
    google::cloud::asset::v1::QueryAssetsRequest const& request) {
  return child_->QueryAssets(request);
}

StatusOr<google::cloud::asset::v1::SavedQuery>
AssetServiceTracingConnection::CreateSavedQuery(
    google::cloud::asset::v1::CreateSavedQueryRequest const& request) {
  return child_->CreateSavedQuery(request);
}

StatusOr<google::cloud::asset::v1::SavedQuery>
AssetServiceTracingConnection::GetSavedQuery(
    google::cloud::asset::v1::GetSavedQueryRequest const& request) {
  return child_->GetSavedQuery(request);
}

StreamRange<google::cloud::asset::v1::SavedQuery>
AssetServiceTracingConnection::ListSavedQueries(
    google::cloud::asset::v1::ListSavedQueriesRequest request) {
  return child_->ListSavedQueries(request);
}

StatusOr<google::cloud::asset::v1::SavedQuery>
AssetServiceTracingConnection::UpdateSavedQuery(
    google::cloud::asset::v1::UpdateSavedQueryRequest const& request) {
  return child_->UpdateSavedQuery(request);
}

Status AssetServiceTracingConnection::DeleteSavedQuery(
    google::cloud::asset::v1::DeleteSavedQueryRequest const& request) {
  return child_->DeleteSavedQuery(request);
}

StatusOr<google::cloud::asset::v1::BatchGetEffectiveIamPoliciesResponse>
AssetServiceTracingConnection::BatchGetEffectiveIamPolicies(
    google::cloud::asset::v1::BatchGetEffectiveIamPoliciesRequest const&
        request) {
  return child_->BatchGetEffectiveIamPolicies(request);
}

StreamRange<
    google::cloud::asset::v1::AnalyzeOrgPoliciesResponse::OrgPolicyResult>
AssetServiceTracingConnection::AnalyzeOrgPolicies(
    google::cloud::asset::v1::AnalyzeOrgPoliciesRequest request) {
  return child_->AnalyzeOrgPolicies(request);
}

StreamRange<google::cloud::asset::v1::
                AnalyzeOrgPolicyGovernedContainersResponse::GovernedContainer>
AssetServiceTracingConnection::AnalyzeOrgPolicyGovernedContainers(
    google::cloud::asset::v1::AnalyzeOrgPolicyGovernedContainersRequest
        request) {
  return child_->AnalyzeOrgPolicyGovernedContainers(request);
}

StreamRange<google::cloud::asset::v1::AnalyzeOrgPolicyGovernedAssetsResponse::
                GovernedAsset>
AssetServiceTracingConnection::AnalyzeOrgPolicyGovernedAssets(
    google::cloud::asset::v1::AnalyzeOrgPolicyGovernedAssetsRequest request) {
  return child_->AnalyzeOrgPolicyGovernedAssets(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace asset_internal
}  // namespace cloud
}  // namespace google
