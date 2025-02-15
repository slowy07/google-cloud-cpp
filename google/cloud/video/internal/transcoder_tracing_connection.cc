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
// source: google/cloud/video/transcoder/v1/services.proto

#include "google/cloud/video/internal/transcoder_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace video_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TranscoderServiceTracingConnection::TranscoderServiceTracingConnection(
    std::shared_ptr<video::TranscoderServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::video::transcoder::v1::Job>
TranscoderServiceTracingConnection::CreateJob(
    google::cloud::video::transcoder::v1::CreateJobRequest const& request) {
  return child_->CreateJob(request);
}

StreamRange<google::cloud::video::transcoder::v1::Job>
TranscoderServiceTracingConnection::ListJobs(
    google::cloud::video::transcoder::v1::ListJobsRequest request) {
  return child_->ListJobs(request);
}

StatusOr<google::cloud::video::transcoder::v1::Job>
TranscoderServiceTracingConnection::GetJob(
    google::cloud::video::transcoder::v1::GetJobRequest const& request) {
  return child_->GetJob(request);
}

Status TranscoderServiceTracingConnection::DeleteJob(
    google::cloud::video::transcoder::v1::DeleteJobRequest const& request) {
  return child_->DeleteJob(request);
}

StatusOr<google::cloud::video::transcoder::v1::JobTemplate>
TranscoderServiceTracingConnection::CreateJobTemplate(
    google::cloud::video::transcoder::v1::CreateJobTemplateRequest const&
        request) {
  return child_->CreateJobTemplate(request);
}

StreamRange<google::cloud::video::transcoder::v1::JobTemplate>
TranscoderServiceTracingConnection::ListJobTemplates(
    google::cloud::video::transcoder::v1::ListJobTemplatesRequest request) {
  return child_->ListJobTemplates(request);
}

StatusOr<google::cloud::video::transcoder::v1::JobTemplate>
TranscoderServiceTracingConnection::GetJobTemplate(
    google::cloud::video::transcoder::v1::GetJobTemplateRequest const&
        request) {
  return child_->GetJobTemplate(request);
}

Status TranscoderServiceTracingConnection::DeleteJobTemplate(
    google::cloud::video::transcoder::v1::DeleteJobTemplateRequest const&
        request) {
  return child_->DeleteJobTemplate(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_internal
}  // namespace cloud
}  // namespace google
