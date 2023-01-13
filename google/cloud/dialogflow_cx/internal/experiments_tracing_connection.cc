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
// source: google/cloud/dialogflow/cx/v3/experiment.proto

#include "google/cloud/dialogflow_cx/internal/experiments_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ExperimentsTracingConnection::ExperimentsTracingConnection(
    std::shared_ptr<dialogflow_cx::ExperimentsConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsTracingConnection::ListExperiments(
    google::cloud::dialogflow::cx::v3::ListExperimentsRequest request) {
  return child_->ListExperiments(request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsTracingConnection::GetExperiment(
    google::cloud::dialogflow::cx::v3::GetExperimentRequest const& request) {
  return child_->GetExperiment(request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsTracingConnection::CreateExperiment(
    google::cloud::dialogflow::cx::v3::CreateExperimentRequest const& request) {
  return child_->CreateExperiment(request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsTracingConnection::UpdateExperiment(
    google::cloud::dialogflow::cx::v3::UpdateExperimentRequest const& request) {
  return child_->UpdateExperiment(request);
}

Status ExperimentsTracingConnection::DeleteExperiment(
    google::cloud::dialogflow::cx::v3::DeleteExperimentRequest const& request) {
  return child_->DeleteExperiment(request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsTracingConnection::StartExperiment(
    google::cloud::dialogflow::cx::v3::StartExperimentRequest const& request) {
  return child_->StartExperiment(request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsTracingConnection::StopExperiment(
    google::cloud::dialogflow::cx::v3::StopExperimentRequest const& request) {
  return child_->StopExperiment(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google