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
// source: google/cloud/dialogflow/v2/participant.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_PARTICIPANTS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_PARTICIPANTS_TRACING_CONNECTION_H

#include "google/cloud/dialogflow_es/participants_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ParticipantsTracingConnection
    : public dialogflow_es::ParticipantsConnection {
 public:
  ~ParticipantsTracingConnection() override = default;

  explicit ParticipantsTracingConnection(
      std::shared_ptr<dialogflow_es::ParticipantsConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::dialogflow::v2::Participant> CreateParticipant(
      google::cloud::dialogflow::v2::CreateParticipantRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::Participant> GetParticipant(
      google::cloud::dialogflow::v2::GetParticipantRequest const& request)
      override;

  StreamRange<google::cloud::dialogflow::v2::Participant> ListParticipants(
      google::cloud::dialogflow::v2::ListParticipantsRequest request) override;

  StatusOr<google::cloud::dialogflow::v2::Participant> UpdateParticipant(
      google::cloud::dialogflow::v2::UpdateParticipantRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::AnalyzeContentResponse>
  AnalyzeContent(google::cloud::dialogflow::v2::AnalyzeContentRequest const&
                     request) override;

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::dialogflow::v2::StreamingAnalyzeContentRequest,
      google::cloud::dialogflow::v2::StreamingAnalyzeContentResponse>>
  AsyncStreamingAnalyzeContent() override;

  StatusOr<google::cloud::dialogflow::v2::SuggestArticlesResponse>
  SuggestArticles(google::cloud::dialogflow::v2::SuggestArticlesRequest const&
                      request) override;

  StatusOr<google::cloud::dialogflow::v2::SuggestFaqAnswersResponse>
  SuggestFaqAnswers(
      google::cloud::dialogflow::v2::SuggestFaqAnswersRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::SuggestSmartRepliesResponse>
  SuggestSmartReplies(
      google::cloud::dialogflow::v2::SuggestSmartRepliesRequest const& request)
      override;

 private:
  std::shared_ptr<dialogflow_es::ParticipantsConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_PARTICIPANTS_TRACING_CONNECTION_H