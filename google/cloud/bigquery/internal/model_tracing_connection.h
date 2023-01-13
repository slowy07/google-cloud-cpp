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
// source: google/cloud/bigquery/v2/model.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_INTERNAL_MODEL_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_INTERNAL_MODEL_TRACING_CONNECTION_H

#include "google/cloud/bigquery/model_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ModelServiceTracingConnection : public bigquery::ModelServiceConnection {
 public:
  ~ModelServiceTracingConnection() override = default;

  explicit ModelServiceTracingConnection(
      std::shared_ptr<bigquery::ModelServiceConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::bigquery::v2::Model> GetModel(
      google::cloud::bigquery::v2::GetModelRequest const& request) override;

  StatusOr<google::cloud::bigquery::v2::ListModelsResponse> ListModels(
      google::cloud::bigquery::v2::ListModelsRequest const& request) override;

  StatusOr<google::cloud::bigquery::v2::Model> PatchModel(
      google::cloud::bigquery::v2::PatchModelRequest const& request) override;

  Status DeleteModel(
      google::cloud::bigquery::v2::DeleteModelRequest const& request) override;

 private:
  std::shared_ptr<bigquery::ModelServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_INTERNAL_MODEL_TRACING_CONNECTION_H