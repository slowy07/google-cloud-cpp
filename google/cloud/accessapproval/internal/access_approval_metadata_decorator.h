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
// source: google/cloud/accessapproval/v1/accessapproval.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSAPPROVAL_INTERNAL_ACCESS_APPROVAL_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSAPPROVAL_INTERNAL_ACCESS_APPROVAL_METADATA_DECORATOR_H

#include "google/cloud/accessapproval/internal/access_approval_stub.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace accessapproval_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AccessApprovalMetadata : public AccessApprovalStub {
 public:
  ~AccessApprovalMetadata() override = default;
  explicit AccessApprovalMetadata(std::shared_ptr<AccessApprovalStub> child);

  StatusOr<google::cloud::accessapproval::v1::ListApprovalRequestsResponse>
  ListApprovalRequests(
      grpc::ClientContext& context,
      google::cloud::accessapproval::v1::ListApprovalRequestsMessage const&
          request) override;

  StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
  GetApprovalRequest(
      grpc::ClientContext& context,
      google::cloud::accessapproval::v1::GetApprovalRequestMessage const&
          request) override;

  StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
  ApproveApprovalRequest(
      grpc::ClientContext& context,
      google::cloud::accessapproval::v1::ApproveApprovalRequestMessage const&
          request) override;

  StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
  DismissApprovalRequest(
      grpc::ClientContext& context,
      google::cloud::accessapproval::v1::DismissApprovalRequestMessage const&
          request) override;

  StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
  GetAccessApprovalSettings(
      grpc::ClientContext& context,
      google::cloud::accessapproval::v1::GetAccessApprovalSettingsMessage const&
          request) override;

  StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
  UpdateAccessApprovalSettings(
      grpc::ClientContext& context,
      google::cloud::accessapproval::v1::
          UpdateAccessApprovalSettingsMessage const& request) override;

  Status DeleteAccessApprovalSettings(
      grpc::ClientContext& context,
      google::cloud::accessapproval::v1::
          DeleteAccessApprovalSettingsMessage const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  std::shared_ptr<AccessApprovalStub> child_;
  std::string api_client_header_;
};  // AccessApprovalMetadata

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace accessapproval_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSAPPROVAL_INTERNAL_ACCESS_APPROVAL_METADATA_DECORATOR_H