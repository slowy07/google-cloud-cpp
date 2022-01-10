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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSAPPROVAL_ACCESS_APPROVAL_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSAPPROVAL_ACCESS_APPROVAL_CLIENT_H

#include "google/cloud/accessapproval/access_approval_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace accessapproval {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// This API allows a customer to manage accesses to cloud resources by
/// Google personnel. It defines the following resource model:
///
/// - The API has a collection of
///   [ApprovalRequest][google.cloud.accessapproval.v1.ApprovalRequest]
///   resources, named `approvalRequests/{approval_request_id}`
/// - The API has top-level settings per Project/Folder/Organization, named
///   `accessApprovalSettings`
///
/// The service also periodically emails a list of recipients, defined at the
/// Project/Folder/Organization level in the accessApprovalSettings, when there
/// is a pending ApprovalRequest for them to act on. The ApprovalRequests can
/// also optionally be published to a Cloud Pub/Sub topic owned by the customer
/// (for Beta, the Pub/Sub setup is managed manually).
///
/// ApprovalRequests can be approved or dismissed. Google personel can only
/// access the indicated resource or resources if the request is approved
/// (subject to some exclusions:
/// https://cloud.google.com/access-approval/docs/overview#exclusions).
///
/// Note: Using Access Approval functionality will mean that Google may not be
/// able to meet the SLAs for your chosen products, as any support response
/// times may be dramatically increased. As such the SLAs do not apply to any
/// service disruption to the extent impacted by Customer's use of Access
/// Approval. Do not enable Access Approval for projects where you may require
/// high service availability and rapid response by Google Cloud Support.
///
/// After a request is approved or dismissed, no further action may be taken on
/// it. Requests with the requested_expiration in the past or with no activity
/// for 14 days are considered dismissed. When an approval expires, the request
/// is considered dismissed.
///
/// If a request is not approved or dismissed, we call it pending.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class AccessApprovalClient {
 public:
  explicit AccessApprovalClient(
      std::shared_ptr<AccessApprovalConnection> connection,
      Options options = {});
  ~AccessApprovalClient();

  //@{
  // @name Copy and move support
  AccessApprovalClient(AccessApprovalClient const&) = default;
  AccessApprovalClient& operator=(AccessApprovalClient const&) = default;
  AccessApprovalClient(AccessApprovalClient&&) = default;
  AccessApprovalClient& operator=(AccessApprovalClient&&) = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(AccessApprovalClient const& a,
                         AccessApprovalClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(AccessApprovalClient const& a,
                         AccessApprovalClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Lists approval requests associated with a project, folder, or
  /// organization. Approval requests can be filtered by state (pending, active,
  /// dismissed). The order is reverse chronological.
  ///
  /// @param parent  The parent resource. This may be "projects/{project_id}",
  ///  "folders/{folder_id}", or "organizations/{organization_id}".
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::accessapproval::v1::ApprovalRequest,google/cloud/accessapproval/v1/accessapproval.proto#L293}
  ///
  /// [google.cloud.accessapproval.v1.ListApprovalRequestsMessage]:
  /// @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L402}
  /// [google.cloud.accessapproval.v1.ApprovalRequest]:
  /// @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L293}
  ///
  StreamRange<google::cloud::accessapproval::v1::ApprovalRequest>
  ListApprovalRequests(std::string const& parent, Options options = {});

  ///
  /// Lists approval requests associated with a project, folder, or
  /// organization. Approval requests can be filtered by state (pending, active,
  /// dismissed). The order is reverse chronological.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::accessapproval::v1::ListApprovalRequestsMessage,google/cloud/accessapproval/v1/accessapproval.proto#L402}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::accessapproval::v1::ApprovalRequest,google/cloud/accessapproval/v1/accessapproval.proto#L293}
  ///
  /// [google.cloud.accessapproval.v1.ListApprovalRequestsMessage]:
  /// @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L402}
  /// [google.cloud.accessapproval.v1.ApprovalRequest]:
  /// @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L293}
  ///
  StreamRange<google::cloud::accessapproval::v1::ApprovalRequest>
  ListApprovalRequests(
      google::cloud::accessapproval::v1::ListApprovalRequestsMessage request,
      Options options = {});

  ///
  /// Gets an approval request. Returns NOT_FOUND if the request does not exist.
  ///
  /// @param name  Name of the approval request to retrieve.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::accessapproval::v1::ApprovalRequest,google/cloud/accessapproval/v1/accessapproval.proto#L293}
  ///
  /// [google.cloud.accessapproval.v1.GetApprovalRequestMessage]:
  /// @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L435}
  /// [google.cloud.accessapproval.v1.ApprovalRequest]:
  /// @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L293}
  ///
  StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
  GetApprovalRequest(std::string const& name, Options options = {});

  ///
  /// Gets an approval request. Returns NOT_FOUND if the request does not exist.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::accessapproval::v1::GetApprovalRequestMessage,google/cloud/accessapproval/v1/accessapproval.proto#L435}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::accessapproval::v1::ApprovalRequest,google/cloud/accessapproval/v1/accessapproval.proto#L293}
  ///
  /// [google.cloud.accessapproval.v1.GetApprovalRequestMessage]:
  /// @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L435}
  /// [google.cloud.accessapproval.v1.ApprovalRequest]:
  /// @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L293}
  ///
  StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
  GetApprovalRequest(
      google::cloud::accessapproval::v1::GetApprovalRequestMessage const&
          request,
      Options options = {});

  ///
  /// Approves a request and returns the updated ApprovalRequest.
  ///
  /// Returns NOT_FOUND if the request does not exist. Returns
  /// FAILED_PRECONDITION if the request exists but is not in a pending state.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::accessapproval::v1::ApproveApprovalRequestMessage,google/cloud/accessapproval/v1/accessapproval.proto#L441}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::accessapproval::v1::ApprovalRequest,google/cloud/accessapproval/v1/accessapproval.proto#L293}
  ///
  /// [google.cloud.accessapproval.v1.ApproveApprovalRequestMessage]:
  /// @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L441}
  /// [google.cloud.accessapproval.v1.ApprovalRequest]:
  /// @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L293}
  ///
  StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
  ApproveApprovalRequest(
      google::cloud::accessapproval::v1::ApproveApprovalRequestMessage const&
          request,
      Options options = {});

  ///
  /// Dismisses a request. Returns the updated ApprovalRequest.
  ///
  /// NOTE: This does not deny access to the resource if another request has
  /// been made and approved. It is equivalent in effect to ignoring the request
  /// altogether.
  ///
  /// Returns NOT_FOUND if the request does not exist.
  ///
  /// Returns FAILED_PRECONDITION if the request exists but is not in a pending
  /// state.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::accessapproval::v1::DismissApprovalRequestMessage,google/cloud/accessapproval/v1/accessapproval.proto#L450}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::accessapproval::v1::ApprovalRequest,google/cloud/accessapproval/v1/accessapproval.proto#L293}
  ///
  /// [google.cloud.accessapproval.v1.DismissApprovalRequestMessage]:
  /// @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L450}
  /// [google.cloud.accessapproval.v1.ApprovalRequest]:
  /// @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L293}
  ///
  StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
  DismissApprovalRequest(
      google::cloud::accessapproval::v1::DismissApprovalRequestMessage const&
          request,
      Options options = {});

  ///
  /// Gets the settings associated with a project, folder, or organization.
  ///
  /// @param name  Name of the AccessApprovalSettings to retrieve.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::accessapproval::v1::AccessApprovalSettings,google/cloud/accessapproval/v1/accessapproval.proto#L365}
  ///
  /// [google.cloud.accessapproval.v1.GetAccessApprovalSettingsMessage]:
  /// @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L456}
  /// [google.cloud.accessapproval.v1.AccessApprovalSettings]:
  /// @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L365}
  ///
  StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
  GetAccessApprovalSettings(std::string const& name, Options options = {});

  ///
  /// Gets the settings associated with a project, folder, or organization.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::accessapproval::v1::GetAccessApprovalSettingsMessage,google/cloud/accessapproval/v1/accessapproval.proto#L456}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::accessapproval::v1::AccessApprovalSettings,google/cloud/accessapproval/v1/accessapproval.proto#L365}
  ///
  /// [google.cloud.accessapproval.v1.GetAccessApprovalSettingsMessage]:
  /// @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L456}
  /// [google.cloud.accessapproval.v1.AccessApprovalSettings]:
  /// @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L365}
  ///
  StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
  GetAccessApprovalSettings(
      google::cloud::accessapproval::v1::GetAccessApprovalSettingsMessage const&
          request,
      Options options = {});

  ///
  /// Updates the settings associated with a project, folder, or organization.
  /// Settings to update are determined by the value of field_mask.
  ///
  /// @param settings  The new AccessApprovalSettings.
  /// @param update_mask  The update mask applies to the settings. Only the top
  /// level fields of
  ///  AccessApprovalSettings (notification_emails & enrolled_services) are
  ///  supported. For each field, if it is included, the currently stored value
  ///  will be entirely overwritten with the value of the field passed in this
  ///  request.
  ///  For the `FieldMask` definition, see
  ///  https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#fieldmask
  ///  If this field is left unset, only the notification_emails field will be
  ///  updated.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::accessapproval::v1::AccessApprovalSettings,google/cloud/accessapproval/v1/accessapproval.proto#L365}
  ///
  /// [google.cloud.accessapproval.v1.UpdateAccessApprovalSettingsMessage]:
  /// @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L462}
  /// [google.cloud.accessapproval.v1.AccessApprovalSettings]:
  /// @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L365}
  ///
  StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
  UpdateAccessApprovalSettings(
      google::cloud::accessapproval::v1::AccessApprovalSettings const& settings,
      google::protobuf::FieldMask const& update_mask, Options options = {});

  ///
  /// Updates the settings associated with a project, folder, or organization.
  /// Settings to update are determined by the value of field_mask.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::accessapproval::v1::UpdateAccessApprovalSettingsMessage,google/cloud/accessapproval/v1/accessapproval.proto#L462}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::accessapproval::v1::AccessApprovalSettings,google/cloud/accessapproval/v1/accessapproval.proto#L365}
  ///
  /// [google.cloud.accessapproval.v1.UpdateAccessApprovalSettingsMessage]:
  /// @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L462}
  /// [google.cloud.accessapproval.v1.AccessApprovalSettings]:
  /// @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L365}
  ///
  StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
  UpdateAccessApprovalSettings(
      google::cloud::accessapproval::v1::
          UpdateAccessApprovalSettingsMessage const& request,
      Options options = {});

  ///
  /// Deletes the settings associated with a project, folder, or organization.
  /// This will have the effect of disabling Access Approval for the project,
  /// folder, or organization, but only if all ancestors also have Access
  /// Approval disabled. If Access Approval is enabled at a higher level of the
  /// hierarchy, then Access Approval will still be enabled at this level as
  /// the settings are inherited.
  ///
  /// @param name  Name of the AccessApprovalSettings to delete.
  /// @param options  Optional. Operation options.
  ///
  /// [google.cloud.accessapproval.v1.DeleteAccessApprovalSettingsMessage]:
  /// @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L480}
  ///
  Status DeleteAccessApprovalSettings(std::string const& name,
                                      Options options = {});

  ///
  /// Deletes the settings associated with a project, folder, or organization.
  /// This will have the effect of disabling Access Approval for the project,
  /// folder, or organization, but only if all ancestors also have Access
  /// Approval disabled. If Access Approval is enabled at a higher level of the
  /// hierarchy, then Access Approval will still be enabled at this level as
  /// the settings are inherited.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::accessapproval::v1::DeleteAccessApprovalSettingsMessage,google/cloud/accessapproval/v1/accessapproval.proto#L480}
  /// @param options  Optional. Operation options.
  ///
  /// [google.cloud.accessapproval.v1.DeleteAccessApprovalSettingsMessage]:
  /// @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L480}
  ///
  Status DeleteAccessApprovalSettings(
      google::cloud::accessapproval::v1::
          DeleteAccessApprovalSettingsMessage const& request,
      Options options = {});

 private:
  std::shared_ptr<AccessApprovalConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace accessapproval
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSAPPROVAL_ACCESS_APPROVAL_CLIENT_H