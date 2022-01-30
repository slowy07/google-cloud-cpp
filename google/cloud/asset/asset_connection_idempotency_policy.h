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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSET_ASSET_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSET_ASSET_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/asset/v1/asset_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace asset {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AssetServiceConnectionIdempotencyPolicy {
 public:
  virtual ~AssetServiceConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<AssetServiceConnectionIdempotencyPolicy> clone()
      const = 0;

  virtual google::cloud::Idempotency ExportAssets(
      google::cloud::asset::v1::ExportAssetsRequest const& request) = 0;

  virtual google::cloud::Idempotency ListAssets(
      google::cloud::asset::v1::ListAssetsRequest request) = 0;

  virtual google::cloud::Idempotency BatchGetAssetsHistory(
      google::cloud::asset::v1::BatchGetAssetsHistoryRequest const&
          request) = 0;

  virtual google::cloud::Idempotency CreateFeed(
      google::cloud::asset::v1::CreateFeedRequest const& request) = 0;

  virtual google::cloud::Idempotency GetFeed(
      google::cloud::asset::v1::GetFeedRequest const& request) = 0;

  virtual google::cloud::Idempotency ListFeeds(
      google::cloud::asset::v1::ListFeedsRequest const& request) = 0;

  virtual google::cloud::Idempotency UpdateFeed(
      google::cloud::asset::v1::UpdateFeedRequest const& request) = 0;

  virtual google::cloud::Idempotency DeleteFeed(
      google::cloud::asset::v1::DeleteFeedRequest const& request) = 0;

  virtual google::cloud::Idempotency SearchAllResources(
      google::cloud::asset::v1::SearchAllResourcesRequest request) = 0;

  virtual google::cloud::Idempotency SearchAllIamPolicies(
      google::cloud::asset::v1::SearchAllIamPoliciesRequest request) = 0;

  virtual google::cloud::Idempotency AnalyzeIamPolicy(
      google::cloud::asset::v1::AnalyzeIamPolicyRequest const& request) = 0;

  virtual google::cloud::Idempotency AnalyzeIamPolicyLongrunning(
      google::cloud::asset::v1::AnalyzeIamPolicyLongrunningRequest const&
          request) = 0;

  virtual google::cloud::Idempotency AnalyzeMove(
      google::cloud::asset::v1::AnalyzeMoveRequest const& request) = 0;
};

std::unique_ptr<AssetServiceConnectionIdempotencyPolicy>
MakeDefaultAssetServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace asset
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSET_ASSET_CONNECTION_IDEMPOTENCY_POLICY_H