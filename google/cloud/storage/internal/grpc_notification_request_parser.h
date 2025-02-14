// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_INTERNAL_GRPC_NOTIFICATION_REQUEST_PARSER_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_INTERNAL_GRPC_NOTIFICATION_REQUEST_PARSER_H

#include "google/cloud/storage/internal/notification_requests.h"
#include "google/cloud/storage/version.h"
#include <google/storage/v2/storage.pb.h>

namespace google {
namespace cloud {
namespace storage_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

google::storage::v2::DeleteNotificationRequest ToProto(
    storage::internal::DeleteNotificationRequest const& rhs);
google::storage::v2::GetNotificationRequest ToProto(
    storage::internal::GetNotificationRequest const& rhs);
google::storage::v2::CreateNotificationRequest ToProto(
    storage::internal::CreateNotificationRequest const& rhs);
google::storage::v2::ListNotificationsRequest ToProto(
    storage::internal::ListNotificationsRequest const& rhs);
storage::internal::ListNotificationsResponse FromProto(
    google::storage::v2::ListNotificationsResponse const& rhs);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_INTERNAL_GRPC_NOTIFICATION_REQUEST_PARSER_H
