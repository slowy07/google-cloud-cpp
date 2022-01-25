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
// source: google/cloud/resourcemanager/v3/projects.proto

#include "google/cloud/resourcemanager/internal/projects_connection_impl.h"
#include "google/cloud/resourcemanager/internal/projects_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ProjectsConnectionImpl::ProjectsConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<resourcemanager_internal::ProjectsStub> stub,
    Options const& options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      retry_policy_prototype_(
          options.get<resourcemanager::ProjectsRetryPolicyOption>()->clone()),
      backoff_policy_prototype_(
          options.get<resourcemanager::ProjectsBackoffPolicyOption>()->clone()),
      idempotency_policy_(
          options
              .get<resourcemanager::ProjectsConnectionIdempotencyPolicyOption>()
              ->clone()),
      polling_policy_prototype_(
          options.get<resourcemanager::ProjectsPollingPolicyOption>()
              ->clone()) {}

StatusOr<google::cloud::resourcemanager::v3::Project>
ProjectsConnectionImpl::GetProject(
    google::cloud::resourcemanager::v3::GetProjectRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetProject(request),
      [this](grpc::ClientContext& context,
             google::cloud::resourcemanager::v3::GetProjectRequest const&
                 request) { return stub_->GetProject(context, request); },
      request, __func__);
}

StreamRange<google::cloud::resourcemanager::v3::Project>
ProjectsConnectionImpl::ListProjects(
    google::cloud::resourcemanager::v3::ListProjectsRequest request) {
  request.clear_page_token();
  auto stub = stub_;
  auto retry = std::shared_ptr<resourcemanager::ProjectsRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListProjects(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::resourcemanager::v3::Project>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::resourcemanager::v3::ListProjectsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::resourcemanager::v3::ListProjectsRequest const&
                    request) { return stub->ListProjects(context, request); },
            r, function_name);
      },
      [](google::cloud::resourcemanager::v3::ListProjectsResponse r) {
        std::vector<google::cloud::resourcemanager::v3::Project> result(
            r.projects().size());
        auto& messages = *r.mutable_projects();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::cloud::resourcemanager::v3::Project>
ProjectsConnectionImpl::SearchProjects(
    google::cloud::resourcemanager::v3::SearchProjectsRequest request) {
  request.clear_page_token();
  auto stub = stub_;
  auto retry = std::shared_ptr<resourcemanager::ProjectsRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->SearchProjects(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::resourcemanager::v3::Project>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::resourcemanager::v3::SearchProjectsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::resourcemanager::v3::SearchProjectsRequest const&
                    request) { return stub->SearchProjects(context, request); },
            r, function_name);
      },
      [](google::cloud::resourcemanager::v3::SearchProjectsResponse r) {
        std::vector<google::cloud::resourcemanager::v3::Project> result(
            r.projects().size());
        auto& messages = *r.mutable_projects();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsConnectionImpl::CreateProject(
    google::cloud::resourcemanager::v3::CreateProjectRequest const& request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::resourcemanager::v3::Project>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::resourcemanager::v3::CreateProjectRequest const&
                 request) {
        return stub->AsyncCreateProject(cq, std::move(context), request);
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
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::resourcemanager::v3::Project>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateProject(request), polling_policy(), __func__);
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsConnectionImpl::UpdateProject(
    google::cloud::resourcemanager::v3::UpdateProjectRequest const& request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::resourcemanager::v3::Project>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::resourcemanager::v3::UpdateProjectRequest const&
                 request) {
        return stub->AsyncUpdateProject(cq, std::move(context), request);
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
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::resourcemanager::v3::Project>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateProject(request), polling_policy(), __func__);
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsConnectionImpl::MoveProject(
    google::cloud::resourcemanager::v3::MoveProjectRequest const& request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::resourcemanager::v3::Project>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::resourcemanager::v3::MoveProjectRequest const&
                 request) {
        return stub->AsyncMoveProject(cq, std::move(context), request);
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
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::resourcemanager::v3::Project>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->MoveProject(request), polling_policy(), __func__);
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsConnectionImpl::DeleteProject(
    google::cloud::resourcemanager::v3::DeleteProjectRequest const& request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::resourcemanager::v3::Project>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::resourcemanager::v3::DeleteProjectRequest const&
                 request) {
        return stub->AsyncDeleteProject(cq, std::move(context), request);
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
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::resourcemanager::v3::Project>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteProject(request), polling_policy(), __func__);
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsConnectionImpl::UndeleteProject(
    google::cloud::resourcemanager::v3::UndeleteProjectRequest const& request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::resourcemanager::v3::Project>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::resourcemanager::v3::UndeleteProjectRequest const&
                 request) {
        return stub->AsyncUndeleteProject(cq, std::move(context), request);
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
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::resourcemanager::v3::Project>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UndeleteProject(request), polling_policy(),
      __func__);
}

StatusOr<google::iam::v1::Policy> ProjectsConnectionImpl::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetIamPolicy(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return stub_->GetIamPolicy(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::Policy> ProjectsConnectionImpl::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->SetIamPolicy(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return stub_->SetIamPolicy(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ProjectsConnectionImpl::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->TestIamPermissions(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return stub_->TestIamPermissions(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_internal
}  // namespace cloud
}  // namespace google