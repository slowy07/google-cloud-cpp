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
// source: google/cloud/oslogin/v1/oslogin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSLOGIN_OS_LOGIN_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSLOGIN_OS_LOGIN_CONNECTION_H

#include "google/cloud/oslogin/internal/os_login_retry_traits.h"
#include "google/cloud/oslogin/internal/os_login_stub.h"
#include "google/cloud/oslogin/os_login_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace oslogin {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using OsLoginServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        oslogin_internal::OsLoginServiceRetryTraits>;

using OsLoginServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        oslogin_internal::OsLoginServiceRetryTraits>;

using OsLoginServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        oslogin_internal::OsLoginServiceRetryTraits>;

class OsLoginServiceConnection {
 public:
  virtual ~OsLoginServiceConnection() = 0;

  virtual Status DeletePosixAccount(
      google::cloud::oslogin::v1::DeletePosixAccountRequest const& request);

  virtual Status DeleteSshPublicKey(
      google::cloud::oslogin::v1::DeleteSshPublicKeyRequest const& request);

  virtual StatusOr<google::cloud::oslogin::v1::LoginProfile> GetLoginProfile(
      google::cloud::oslogin::v1::GetLoginProfileRequest const& request);

  virtual StatusOr<google::cloud::oslogin::common::SshPublicKey>
  GetSshPublicKey(
      google::cloud::oslogin::v1::GetSshPublicKeyRequest const& request);

  virtual StatusOr<google::cloud::oslogin::v1::ImportSshPublicKeyResponse>
  ImportSshPublicKey(
      google::cloud::oslogin::v1::ImportSshPublicKeyRequest const& request);

  virtual StatusOr<google::cloud::oslogin::common::SshPublicKey>
  UpdateSshPublicKey(
      google::cloud::oslogin::v1::UpdateSshPublicKeyRequest const& request);
};

std::shared_ptr<OsLoginServiceConnection> MakeOsLoginServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace oslogin
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace oslogin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<oslogin::OsLoginServiceConnection> MakeOsLoginServiceConnection(
    std::shared_ptr<OsLoginServiceStub> stub, Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace oslogin_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSLOGIN_OS_LOGIN_CONNECTION_H