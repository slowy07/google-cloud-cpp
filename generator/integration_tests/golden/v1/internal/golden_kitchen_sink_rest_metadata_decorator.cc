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


#include "generator/integration_tests/golden/v1/internal/golden_kitchen_sink_rest_metadata_decorator.h"
#include "absl/strings/str_format.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/routing_matcher.h"
#include "google/cloud/status_or.h"
#include <memory>

namespace google {
namespace cloud {
namespace golden_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GoldenKitchenSinkRestMetadata::GoldenKitchenSinkRestMetadata(
    std::shared_ptr<GoldenKitchenSinkRestStub> child)
    : child_(std::move(child)),
      api_client_header_(google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::test::admin::database::v1::GenerateAccessTokenResponse>
GoldenKitchenSinkRestMetadata::GenerateAccessToken(
    rest_internal::RestContext& rest_context,
    google::test::admin::database::v1::GenerateAccessTokenRequest const& request) {
  SetMetadata(rest_context);
  return child_->GenerateAccessToken(rest_context, request);
}

StatusOr<google::test::admin::database::v1::GenerateIdTokenResponse>
GoldenKitchenSinkRestMetadata::GenerateIdToken(
    rest_internal::RestContext& rest_context,
    google::test::admin::database::v1::GenerateIdTokenRequest const& request) {
  SetMetadata(rest_context);
  return child_->GenerateIdToken(rest_context, request);
}

StatusOr<google::test::admin::database::v1::WriteLogEntriesResponse>
GoldenKitchenSinkRestMetadata::WriteLogEntries(
    rest_internal::RestContext& rest_context,
    google::test::admin::database::v1::WriteLogEntriesRequest const& request) {
  SetMetadata(rest_context);
  return child_->WriteLogEntries(rest_context, request);
}

StatusOr<google::test::admin::database::v1::ListLogsResponse>
GoldenKitchenSinkRestMetadata::ListLogs(
    rest_internal::RestContext& rest_context,
    google::test::admin::database::v1::ListLogsRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListLogs(rest_context, request);
}

StatusOr<google::test::admin::database::v1::ListServiceAccountKeysResponse>
GoldenKitchenSinkRestMetadata::ListServiceAccountKeys(
    rest_internal::RestContext& rest_context,
    google::test::admin::database::v1::ListServiceAccountKeysRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListServiceAccountKeys(rest_context, request);
}

Status
GoldenKitchenSinkRestMetadata::DoNothing(
    rest_internal::RestContext& rest_context,
    google::protobuf::Empty const& request) {
  SetMetadata(rest_context);
  return child_->DoNothing(rest_context, request);
}

Status
GoldenKitchenSinkRestMetadata::ExplicitRouting1(
    rest_internal::RestContext& rest_context,
    google::test::admin::database::v1::ExplicitRoutingRequest const& request) {
  std::vector<std::string> params;
  params.reserve(2);

  static auto* table_location_matcher = []{
    return new google::cloud::internal::RoutingMatcher<google::test::admin::database::v1::ExplicitRoutingRequest>{
      "table_location=", {
      {[](google::test::admin::database::v1::ExplicitRoutingRequest const& request) -> std::string const& {
        return request.table_name();
      },
      std::regex{"(regions/[^/]+/zones/[^/]+)/tables/[^/]+", std::regex::optimize}},
      {[](google::test::admin::database::v1::ExplicitRoutingRequest const& request) -> std::string const& {
        return request.table_name();
      },
      std::regex{"projects/[^/]+/(instances/[^/]+)/tables/[^/]+", std::regex::optimize}},
      }};
  }();
  table_location_matcher->AppendParam(request, params);

  static auto* routing_id_matcher = []{
    return new google::cloud::internal::RoutingMatcher<google::test::admin::database::v1::ExplicitRoutingRequest>{
      "routing_id=", {
      {[](google::test::admin::database::v1::ExplicitRoutingRequest const& request) -> std::string const& {
        return request.app_profile_id();
      },
      std::regex{"profiles/([^/]+)", std::regex::optimize}},
      {[](google::test::admin::database::v1::ExplicitRoutingRequest const& request) -> std::string const& {
        return request.app_profile_id();
      },
      absl::nullopt},
      {[](google::test::admin::database::v1::ExplicitRoutingRequest const& request) -> std::string const& {
        return request.table_name();
      },
      std::regex{"(projects/[^/]+)/.*", std::regex::optimize}},
      }};
  }();
  routing_id_matcher->AppendParam(request, params);

  SetMetadata(rest_context, params);

  return child_->ExplicitRouting1(rest_context, request);
}

Status
GoldenKitchenSinkRestMetadata::ExplicitRouting2(
    rest_internal::RestContext& rest_context,
    google::test::admin::database::v1::ExplicitRoutingRequest const& request) {
  std::vector<std::string> params;
  params.reserve(2);

  if (!request.app_profile_id().empty()) {
    params.push_back("no_regex_needed=" + request.app_profile_id());
  } else if (!request.table_name().empty()) {
    params.push_back("no_regex_needed=" + request.table_name());
  } else if (!request.no_regex_needed().empty()) {
    params.push_back("no_regex_needed=" + request.no_regex_needed());
  }

  if (!request.nested1().nested2().value().empty()) {
    params.push_back("routing_id=" + request.nested1().nested2().value());
  }

  SetMetadata(rest_context, params);

  return child_->ExplicitRouting2(rest_context, request);
}

void GoldenKitchenSinkRestMetadata::SetMetadata(
      rest_internal::RestContext& rest_context,
      std::vector<std::string> const& params) {
  rest_context.AddHeader("x-goog-api-client", api_client_header_);
  if (!params.empty()) {
    rest_context.AddHeader("x-goog-request-params", absl::StrJoin(params, "&"));
  }
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    rest_context.AddHeader(
        "x-goog-user-project", options.get<UserProjectOption>());
  }
  if (options.has<google::cloud::QuotaUserOption>()) {
    rest_context.AddHeader(
        "x-goog-quota-user", options.get<google::cloud::QuotaUserOption>());
  }
  if (options.has<google::cloud::ServerTimeoutOption>()) {
    auto ms_rep = absl::StrCat(
        absl::Dec(options.get<google::cloud::ServerTimeoutOption>().count(),
        absl::kZeroPad4));
    rest_context.AddHeader("x-server-timeout",
        ms_rep.insert(ms_rep.size() - 3, "."));
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1_internal
}  // namespace cloud
}  // namespace google