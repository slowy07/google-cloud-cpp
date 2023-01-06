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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSAPPROVAL_V1_INTERNAL_ACCESS_APPROVAL_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSAPPROVAL_V1_INTERNAL_ACCESS_APPROVAL_CONNECTION_IMPL_H

#include "google/cloud/accessapproval/v1/access_approval_connection.h"
#include "google/cloud/accessapproval/v1/access_approval_connection_idempotency_policy.h"
#include "google/cloud/accessapproval/v1/access_approval_options.h"
#include "google/cloud/accessapproval/v1/internal/access_approval_retry_traits.h"
#include "google/cloud/accessapproval/v1/internal/access_approval_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace accessapproval_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AccessApprovalConnectionImpl
    : public accessapproval_v1::AccessApprovalConnection {
 public:
  ~AccessApprovalConnectionImpl() override = default;

  AccessApprovalConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<accessapproval_v1_internal::AccessApprovalStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::accessapproval::v1::ApprovalRequest>
  ListApprovalRequests(
      google::cloud::accessapproval::v1::ListApprovalRequestsMessage request)
      override;

  StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
  GetApprovalRequest(
      google::cloud::accessapproval::v1::GetApprovalRequestMessage const&
          request) override;

  StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
  ApproveApprovalRequest(
      google::cloud::accessapproval::v1::ApproveApprovalRequestMessage const&
          request) override;

  StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
  DismissApprovalRequest(
      google::cloud::accessapproval::v1::DismissApprovalRequestMessage const&
          request) override;

  StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
  InvalidateApprovalRequest(
      google::cloud::accessapproval::v1::InvalidateApprovalRequestMessage const&
          request) override;

  StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
  GetAccessApprovalSettings(
      google::cloud::accessapproval::v1::GetAccessApprovalSettingsMessage const&
          request) override;

  StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
  UpdateAccessApprovalSettings(
      google::cloud::accessapproval::v1::
          UpdateAccessApprovalSettingsMessage const& request) override;

  Status DeleteAccessApprovalSettings(
      google::cloud::accessapproval::v1::
          DeleteAccessApprovalSettingsMessage const& request) override;

  StatusOr<google::cloud::accessapproval::v1::AccessApprovalServiceAccount>
  GetAccessApprovalServiceAccount(
      google::cloud::accessapproval::v1::
          GetAccessApprovalServiceAccountMessage const& request) override;

 private:
  std::unique_ptr<accessapproval_v1::AccessApprovalRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<accessapproval_v1::AccessApprovalRetryPolicyOption>()) {
      return options.get<accessapproval_v1::AccessApprovalRetryPolicyOption>()
          ->clone();
    }
    return options_.get<accessapproval_v1::AccessApprovalRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<accessapproval_v1::AccessApprovalBackoffPolicyOption>()) {
      return options
          .get<accessapproval_v1::AccessApprovalBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<accessapproval_v1::AccessApprovalBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<accessapproval_v1::AccessApprovalConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<accessapproval_v1::
                        AccessApprovalConnectionIdempotencyPolicyOption>()) {
      return options
          .get<accessapproval_v1::
                   AccessApprovalConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<accessapproval_v1::
                 AccessApprovalConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<accessapproval_v1_internal::AccessApprovalStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace accessapproval_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSAPPROVAL_V1_INTERNAL_ACCESS_APPROVAL_CONNECTION_IMPL_H