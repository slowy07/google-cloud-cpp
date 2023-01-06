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
// source: generator/integration_tests/test.proto

#include "generator/integration_tests/golden/v1/internal/golden_thing_admin_connection_impl.h"
#include "generator/integration_tests/golden/v1/internal/golden_thing_admin_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/async_retry_loop.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace golden_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GoldenThingAdminConnectionImpl::GoldenThingAdminConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<golden_v1_internal::GoldenThingAdminStub> stub,
    Options options)
  : background_(std::move(background)), stub_(std::move(stub)),
    options_(internal::MergeOptions(
        std::move(options),
        GoldenThingAdminConnection::options())) {}

StreamRange<google::test::admin::database::v1::Database>
GoldenThingAdminConnectionImpl::ListDatabases(google::test::admin::database::v1::ListDatabasesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<golden_v1::GoldenThingAdminRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListDatabases(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<google::test::admin::database::v1::Database>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name]
        (google::test::admin::database::v1::ListDatabasesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, google::test::admin::database::v1::ListDatabasesRequest const& request) {
              return stub->ListDatabases(context, request);
            },
            r, function_name);
      },
      [](google::test::admin::database::v1::ListDatabasesResponse r) {
        std::vector<google::test::admin::database::v1::Database> result(r.databases().size());
        auto& messages = *r.mutable_databases();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::test::admin::database::v1::Database>>
GoldenThingAdminConnectionImpl::CreateDatabase(google::test::admin::database::v1::CreateDatabaseRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<google::test::admin::database::v1::Database>(
    background_->cq(), request,
    [stub](google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::test::admin::database::v1::CreateDatabaseRequest const& request) {
     return stub->AsyncCreateDatabase(cq, std::move(context), request);
    },
    [stub](google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::longrunning::GetOperationRequest const& request) {
     return stub->AsyncGetOperation(cq, std::move(context), request);
    },
    [stub](google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
     return stub->AsyncCancelOperation(cq, std::move(context), request);
    },
    &google::cloud::internal::ExtractLongRunningResultResponse<google::test::admin::database::v1::Database>,
    retry_policy(), backoff_policy(),
    idempotency_policy()->CreateDatabase(request),
    polling_policy(), __func__);

}

StatusOr<google::test::admin::database::v1::Database>
GoldenThingAdminConnectionImpl::GetDatabase(google::test::admin::database::v1::GetDatabaseRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetDatabase(request),
      [this](grpc::ClientContext& context,
          google::test::admin::database::v1::GetDatabaseRequest const& request) {
        return stub_->GetDatabase(context, request);
      },
      request, __func__);
}

future<StatusOr<google::test::admin::database::v1::UpdateDatabaseDdlMetadata>>
GoldenThingAdminConnectionImpl::UpdateDatabaseDdl(google::test::admin::database::v1::UpdateDatabaseDdlRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<google::test::admin::database::v1::UpdateDatabaseDdlMetadata>(
    background_->cq(), request,
    [stub](google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::test::admin::database::v1::UpdateDatabaseDdlRequest const& request) {
     return stub->AsyncUpdateDatabaseDdl(cq, std::move(context), request);
    },
    [stub](google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::longrunning::GetOperationRequest const& request) {
     return stub->AsyncGetOperation(cq, std::move(context), request);
    },
    [stub](google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
     return stub->AsyncCancelOperation(cq, std::move(context), request);
    },
    &google::cloud::internal::ExtractLongRunningResultMetadata<google::test::admin::database::v1::UpdateDatabaseDdlMetadata>,
    retry_policy(), backoff_policy(),
    idempotency_policy()->UpdateDatabaseDdl(request),
    polling_policy(), __func__);

}

Status
GoldenThingAdminConnectionImpl::DropDatabase(google::test::admin::database::v1::DropDatabaseRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DropDatabase(request),
      [this](grpc::ClientContext& context,
          google::test::admin::database::v1::DropDatabaseRequest const& request) {
        return stub_->DropDatabase(context, request);
      },
      request, __func__);
}

StatusOr<google::test::admin::database::v1::GetDatabaseDdlResponse>
GoldenThingAdminConnectionImpl::GetDatabaseDdl(google::test::admin::database::v1::GetDatabaseDdlRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetDatabaseDdl(request),
      [this](grpc::ClientContext& context,
          google::test::admin::database::v1::GetDatabaseDdlRequest const& request) {
        return stub_->GetDatabaseDdl(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::Policy>
GoldenThingAdminConnectionImpl::SetIamPolicy(google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->SetIamPolicy(request),
      [this](grpc::ClientContext& context,
          google::iam::v1::SetIamPolicyRequest const& request) {
        return stub_->SetIamPolicy(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::Policy>
GoldenThingAdminConnectionImpl::GetIamPolicy(google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetIamPolicy(request),
      [this](grpc::ClientContext& context,
          google::iam::v1::GetIamPolicyRequest const& request) {
        return stub_->GetIamPolicy(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
GoldenThingAdminConnectionImpl::TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->TestIamPermissions(request),
      [this](grpc::ClientContext& context,
          google::iam::v1::TestIamPermissionsRequest const& request) {
        return stub_->TestIamPermissions(context, request);
      },
      request, __func__);
}

future<StatusOr<google::test::admin::database::v1::Backup>>
GoldenThingAdminConnectionImpl::CreateBackup(google::test::admin::database::v1::CreateBackupRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<google::test::admin::database::v1::Backup>(
    background_->cq(), request,
    [stub](google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::test::admin::database::v1::CreateBackupRequest const& request) {
     return stub->AsyncCreateBackup(cq, std::move(context), request);
    },
    [stub](google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::longrunning::GetOperationRequest const& request) {
     return stub->AsyncGetOperation(cq, std::move(context), request);
    },
    [stub](google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
     return stub->AsyncCancelOperation(cq, std::move(context), request);
    },
    &google::cloud::internal::ExtractLongRunningResultResponse<google::test::admin::database::v1::Backup>,
    retry_policy(), backoff_policy(),
    idempotency_policy()->CreateBackup(request),
    polling_policy(), __func__);

}

StatusOr<google::test::admin::database::v1::Backup>
GoldenThingAdminConnectionImpl::GetBackup(google::test::admin::database::v1::GetBackupRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetBackup(request),
      [this](grpc::ClientContext& context,
          google::test::admin::database::v1::GetBackupRequest const& request) {
        return stub_->GetBackup(context, request);
      },
      request, __func__);
}

StatusOr<google::test::admin::database::v1::Backup>
GoldenThingAdminConnectionImpl::UpdateBackup(google::test::admin::database::v1::UpdateBackupRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateBackup(request),
      [this](grpc::ClientContext& context,
          google::test::admin::database::v1::UpdateBackupRequest const& request) {
        return stub_->UpdateBackup(context, request);
      },
      request, __func__);
}

Status
GoldenThingAdminConnectionImpl::DeleteBackup(google::test::admin::database::v1::DeleteBackupRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteBackup(request),
      [this](grpc::ClientContext& context,
          google::test::admin::database::v1::DeleteBackupRequest const& request) {
        return stub_->DeleteBackup(context, request);
      },
      request, __func__);
}

StreamRange<google::test::admin::database::v1::Backup>
GoldenThingAdminConnectionImpl::ListBackups(google::test::admin::database::v1::ListBackupsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<golden_v1::GoldenThingAdminRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListBackups(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<google::test::admin::database::v1::Backup>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name]
        (google::test::admin::database::v1::ListBackupsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, google::test::admin::database::v1::ListBackupsRequest const& request) {
              return stub->ListBackups(context, request);
            },
            r, function_name);
      },
      [](google::test::admin::database::v1::ListBackupsResponse r) {
        std::vector<google::test::admin::database::v1::Backup> result(r.backups().size());
        auto& messages = *r.mutable_backups();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::test::admin::database::v1::Database>>
GoldenThingAdminConnectionImpl::RestoreDatabase(google::test::admin::database::v1::RestoreDatabaseRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<google::test::admin::database::v1::Database>(
    background_->cq(), request,
    [stub](google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::test::admin::database::v1::RestoreDatabaseRequest const& request) {
     return stub->AsyncRestoreDatabase(cq, std::move(context), request);
    },
    [stub](google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::longrunning::GetOperationRequest const& request) {
     return stub->AsyncGetOperation(cq, std::move(context), request);
    },
    [stub](google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
     return stub->AsyncCancelOperation(cq, std::move(context), request);
    },
    &google::cloud::internal::ExtractLongRunningResultResponse<google::test::admin::database::v1::Database>,
    retry_policy(), backoff_policy(),
    idempotency_policy()->RestoreDatabase(request),
    polling_policy(), __func__);

}

StreamRange<google::longrunning::Operation>
GoldenThingAdminConnectionImpl::ListDatabaseOperations(google::test::admin::database::v1::ListDatabaseOperationsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<golden_v1::GoldenThingAdminRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListDatabaseOperations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<google::longrunning::Operation>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name]
        (google::test::admin::database::v1::ListDatabaseOperationsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, google::test::admin::database::v1::ListDatabaseOperationsRequest const& request) {
              return stub->ListDatabaseOperations(context, request);
            },
            r, function_name);
      },
      [](google::test::admin::database::v1::ListDatabaseOperationsResponse r) {
        std::vector<google::longrunning::Operation> result(r.operations().size());
        auto& messages = *r.mutable_operations();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::longrunning::Operation>
GoldenThingAdminConnectionImpl::ListBackupOperations(google::test::admin::database::v1::ListBackupOperationsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<golden_v1::GoldenThingAdminRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListBackupOperations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<google::longrunning::Operation>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name]
        (google::test::admin::database::v1::ListBackupOperationsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, google::test::admin::database::v1::ListBackupOperationsRequest const& request) {
              return stub->ListBackupOperations(context, request);
            },
            r, function_name);
      },
      [](google::test::admin::database::v1::ListBackupOperationsResponse r) {
        std::vector<google::longrunning::Operation> result(r.operations().size());
        auto& messages = *r.mutable_operations();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::test::admin::database::v1::Database>>
GoldenThingAdminConnectionImpl::LongRunningWithoutRouting(google::test::admin::database::v1::RestoreDatabaseRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<google::test::admin::database::v1::Database>(
    background_->cq(), request,
    [stub](google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::test::admin::database::v1::RestoreDatabaseRequest const& request) {
     return stub->AsyncLongRunningWithoutRouting(cq, std::move(context), request);
    },
    [stub](google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::longrunning::GetOperationRequest const& request) {
     return stub->AsyncGetOperation(cq, std::move(context), request);
    },
    [stub](google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
     return stub->AsyncCancelOperation(cq, std::move(context), request);
    },
    &google::cloud::internal::ExtractLongRunningResultResponse<google::test::admin::database::v1::Database>,
    retry_policy(), backoff_policy(),
    idempotency_policy()->LongRunningWithoutRouting(request),
    polling_policy(), __func__);

}

future<StatusOr<google::test::admin::database::v1::Database>>
GoldenThingAdminConnectionImpl::AsyncGetDatabase(google::test::admin::database::v1::GetDatabaseRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetDatabase(request),
      background_->cq(),
      [stub](CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::test::admin::database::v1::GetDatabaseRequest const& request) {
        return stub->AsyncGetDatabase(cq, std::move(context), request);
      },
      request, __func__);
}

future<Status>
GoldenThingAdminConnectionImpl::AsyncDropDatabase(google::test::admin::database::v1::DropDatabaseRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DropDatabase(request),
      background_->cq(),
      [stub](CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::test::admin::database::v1::DropDatabaseRequest const& request) {
        return stub->AsyncDropDatabase(cq, std::move(context), request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1_internal
}  // namespace cloud
}  // namespace google