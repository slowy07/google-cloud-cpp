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
// source: google/cloud/video/stitcher/v1/video_stitcher_service.proto

#include "google/cloud/video/internal/video_stitcher_auth_decorator.h"
#include <google/cloud/video/stitcher/v1/video_stitcher_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace video_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VideoStitcherServiceAuth::VideoStitcherServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<VideoStitcherServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::video::stitcher::v1::CdnKey>
VideoStitcherServiceAuth::CreateCdnKey(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::CreateCdnKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateCdnKey(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::ListCdnKeysResponse>
VideoStitcherServiceAuth::ListCdnKeys(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::ListCdnKeysRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListCdnKeys(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::CdnKey>
VideoStitcherServiceAuth::GetCdnKey(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::GetCdnKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetCdnKey(context, request);
}

Status VideoStitcherServiceAuth::DeleteCdnKey(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::DeleteCdnKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteCdnKey(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::CdnKey>
VideoStitcherServiceAuth::UpdateCdnKey(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::UpdateCdnKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateCdnKey(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::VodSession>
VideoStitcherServiceAuth::CreateVodSession(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::CreateVodSessionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateVodSession(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::VodSession>
VideoStitcherServiceAuth::GetVodSession(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::GetVodSessionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetVodSession(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::ListVodStitchDetailsResponse>
VideoStitcherServiceAuth::ListVodStitchDetails(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::ListVodStitchDetailsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListVodStitchDetails(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::VodStitchDetail>
VideoStitcherServiceAuth::GetVodStitchDetail(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::GetVodStitchDetailRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetVodStitchDetail(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::ListVodAdTagDetailsResponse>
VideoStitcherServiceAuth::ListVodAdTagDetails(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::ListVodAdTagDetailsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListVodAdTagDetails(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::VodAdTagDetail>
VideoStitcherServiceAuth::GetVodAdTagDetail(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::GetVodAdTagDetailRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetVodAdTagDetail(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::ListLiveAdTagDetailsResponse>
VideoStitcherServiceAuth::ListLiveAdTagDetails(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::ListLiveAdTagDetailsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListLiveAdTagDetails(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::LiveAdTagDetail>
VideoStitcherServiceAuth::GetLiveAdTagDetail(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::GetLiveAdTagDetailRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetLiveAdTagDetail(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::Slate>
VideoStitcherServiceAuth::CreateSlate(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::CreateSlateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateSlate(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::ListSlatesResponse>
VideoStitcherServiceAuth::ListSlates(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::ListSlatesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListSlates(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::Slate>
VideoStitcherServiceAuth::GetSlate(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::GetSlateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetSlate(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::Slate>
VideoStitcherServiceAuth::UpdateSlate(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::UpdateSlateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateSlate(context, request);
}

Status VideoStitcherServiceAuth::DeleteSlate(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::DeleteSlateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteSlate(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::LiveSession>
VideoStitcherServiceAuth::CreateLiveSession(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::CreateLiveSessionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateLiveSession(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::LiveSession>
VideoStitcherServiceAuth::GetLiveSession(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::GetLiveSessionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetLiveSession(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_internal
}  // namespace cloud
}  // namespace google
