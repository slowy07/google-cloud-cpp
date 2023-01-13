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
// source: google/devtools/clouddebugger/v2/debugger.proto

#include "google/cloud/debugger/internal/debugger2_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace debugger_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

Debugger2TracingConnection::Debugger2TracingConnection(
    std::shared_ptr<debugger::Debugger2Connection> child)
    : child_(std::move(child)) {}

StatusOr<google::devtools::clouddebugger::v2::SetBreakpointResponse>
Debugger2TracingConnection::SetBreakpoint(
    google::devtools::clouddebugger::v2::SetBreakpointRequest const& request) {
  return child_->SetBreakpoint(request);
}

StatusOr<google::devtools::clouddebugger::v2::GetBreakpointResponse>
Debugger2TracingConnection::GetBreakpoint(
    google::devtools::clouddebugger::v2::GetBreakpointRequest const& request) {
  return child_->GetBreakpoint(request);
}

Status Debugger2TracingConnection::DeleteBreakpoint(
    google::devtools::clouddebugger::v2::DeleteBreakpointRequest const&
        request) {
  return child_->DeleteBreakpoint(request);
}

StatusOr<google::devtools::clouddebugger::v2::ListBreakpointsResponse>
Debugger2TracingConnection::ListBreakpoints(
    google::devtools::clouddebugger::v2::ListBreakpointsRequest const&
        request) {
  return child_->ListBreakpoints(request);
}

StatusOr<google::devtools::clouddebugger::v2::ListDebuggeesResponse>
Debugger2TracingConnection::ListDebuggees(
    google::devtools::clouddebugger::v2::ListDebuggeesRequest const& request) {
  return child_->ListDebuggees(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace debugger_internal
}  // namespace cloud
}  // namespace google