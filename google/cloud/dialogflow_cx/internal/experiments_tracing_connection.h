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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_EXPERIMENTS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_EXPERIMENTS_TRACING_CONNECTION_H

#include "google/cloud/dialogflow_cx/experiments_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ExperimentsTracingConnection
    : public dialogflow_cx::ExperimentsConnection {
 public:
  ~ExperimentsTracingConnection() override = default;

  explicit ExperimentsTracingConnection(
      std::shared_ptr<dialogflow_cx::ExperimentsConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::dialogflow::cx::v3::Experiment> ListExperiments(
      google::cloud::dialogflow::cx::v3::ListExperimentsRequest request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> GetExperiment(
      google::cloud::dialogflow::cx::v3::GetExperimentRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> CreateExperiment(
      google::cloud::dialogflow::cx::v3::CreateExperimentRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> UpdateExperiment(
      google::cloud::dialogflow::cx::v3::UpdateExperimentRequest const& request)
      override;

  Status DeleteExperiment(
      google::cloud::dialogflow::cx::v3::DeleteExperimentRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> StartExperiment(
      google::cloud::dialogflow::cx::v3::StartExperimentRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> StopExperiment(
      google::cloud::dialogflow::cx::v3::StopExperimentRequest const& request)
      override;

 private:
  std::shared_ptr<dialogflow_cx::ExperimentsConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_EXPERIMENTS_TRACING_CONNECTION_H
