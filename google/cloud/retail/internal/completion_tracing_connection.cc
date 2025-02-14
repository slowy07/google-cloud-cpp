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
// source: google/cloud/retail/v2/completion_service.proto

#include "google/cloud/retail/internal/completion_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CompletionServiceTracingConnection::CompletionServiceTracingConnection(
    std::shared_ptr<retail::CompletionServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::retail::v2::CompleteQueryResponse>
CompletionServiceTracingConnection::CompleteQuery(
    google::cloud::retail::v2::CompleteQueryRequest const& request) {
  return child_->CompleteQuery(request);
}

future<StatusOr<google::cloud::retail::v2::ImportCompletionDataResponse>>
CompletionServiceTracingConnection::ImportCompletionData(
    google::cloud::retail::v2::ImportCompletionDataRequest const& request) {
  return child_->ImportCompletionData(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_internal
}  // namespace cloud
}  // namespace google
