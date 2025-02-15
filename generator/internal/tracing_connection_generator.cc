// Copyright 2023 Google LLC
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

#include "generator/internal/tracing_connection_generator.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "generator/internal/codegen_utils.h"
#include "generator/internal/predicate_utils.h"
#include "generator/internal/printer.h"
#include <google/protobuf/descriptor.h>

namespace google {
namespace cloud {
namespace generator_internal {

TracingConnectionGenerator::TracingConnectionGenerator(
    google::protobuf::ServiceDescriptor const* service_descriptor,
    VarsDictionary service_vars,
    std::map<std::string, VarsDictionary> service_method_vars,
    google::protobuf::compiler::GeneratorContext* context)
    : ServiceCodeGenerator("tracing_connection_header_path",
                           "tracing_connection_cc_path", service_descriptor,
                           std::move(service_vars),
                           std::move(service_method_vars), context) {}

Status TracingConnectionGenerator::GenerateHeader() {
  HeaderPrint(CopyrightLicenseFileHeader());
  HeaderPrint(R"""(
// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: $proto_file_name$

#ifndef $header_include_guard$
#define $header_include_guard$
)""");

  // includes
  HeaderPrint("\n");
  HeaderLocalIncludes(
      {vars("connection_header_path"), "google/cloud/version.h"});
  HeaderSystemIncludes({"memory"});

  auto result = HeaderOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  HeaderPrint(R"""(
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class $tracing_connection_class_name$
    : public $product_namespace$::$connection_class_name$ {
 public:
  ~$tracing_connection_class_name$() override = default;

  explicit $tracing_connection_class_name$(
    std::shared_ptr<$product_namespace$::$connection_class_name$> child);
)""");

  HeaderPrint(R"""(
  Options options() override { return child_->options(); }
)""");

  for (auto const& method : methods()) {
    HeaderPrintMethod(method, __FILE__, __LINE__, MethodDeclaration(method));
  }

  for (auto const& method : async_methods()) {
    if (IsStreamingRead(method)) continue;
    if (IsStreamingWrite(method)) continue;
    HeaderPrintMethod(method, __FILE__, __LINE__,
                      AsyncMethodDeclaration(method));
  }

  HeaderPrint(R"""(
 private:
  std::shared_ptr<$product_namespace$::$connection_class_name$> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
)""");

  HeaderCloseNamespaces();

  // close header guard
  HeaderPrint("\n#endif  // $header_include_guard$\n");
  return {};
}

Status TracingConnectionGenerator::GenerateCc() {
  CcPrint(CopyrightLicenseFileHeader());
  CcPrint(R"""(
// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: $proto_file_name$

)""");

  // includes
  CcLocalIncludes({
      vars("tracing_connection_header_path"),
      "google/cloud/internal/opentelemetry.h",
  });
  CcSystemIncludes({"memory"});

  auto result = CcOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  CcPrint(R"""(
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

$tracing_connection_class_name$::$tracing_connection_class_name$(
    std::shared_ptr<$product_namespace$::$connection_class_name$> child)
    : child_(std::move(child)) {}
)""");

  for (auto const& method : methods()) {
    CcPrintMethod(method, __FILE__, __LINE__, MethodDefinition(method));
  }

  for (auto const& method : async_methods()) {
    if (IsStreamingRead(method)) continue;
    if (IsStreamingWrite(method)) continue;
    CcPrintMethod(method, __FILE__, __LINE__, AsyncMethodDefinition(method));
  }

  CcPrint(R"""(
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
)""");
  CcCloseNamespaces();
  return {};
}

std::string TracingConnectionGenerator::MethodDeclaration(
    google::protobuf::MethodDescriptor const& method) {
  if (IsBidirStreaming(method)) {
    return R"""(
  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      $request_type$,
      $response_type$>>
  Async$method_name$() override;
)""";
  }

  if (IsStreamingRead(method)) {
    return R"""(
  StreamRange<$response_type$>
  $method_name$($request_type$ const& request) override;
)""";
  }

  if (IsStreamingWrite(method)) {
    // Streaming writes are only used in services that need hand-crafted
    // connection and client classes, they are not supported.
    return {};
  }

  if (IsPaginated(method)) {
    return R"""(
  StreamRange<$range_output_type$>
  $method_name$($request_type$ request) override;
)""";
  }

  if (IsLongrunningOperation(method)) {
    if (IsResponseTypeEmpty(method)) {
      return R"""(
  future<Status>
  $method_name$($request_type$ const& request) override;
)""";
    }
    return R"""(
  future<StatusOr<$longrunning_deduced_response_type$>>
  $method_name$($request_type$ const& request) override;
)""";
  }

  if (IsResponseTypeEmpty(method)) {
    return R"""(
  Status
  $method_name$($request_type$ const& request) override;
)""";
  }
  return R"""(
  StatusOr<$response_type$>
  $method_name$($request_type$ const& request) override;
)""";
}

std::string TracingConnectionGenerator::AsyncMethodDeclaration(
    google::protobuf::MethodDescriptor const& method) {
  if (IsResponseTypeEmpty(method)) {
    return R"""(
  future<Status>
  Async$method_name$($request_type$ const& request) override;
)""";
  }

  return R"""(
  future<StatusOr<$response_type$>>
  Async$method_name$($request_type$ const& request) override;
)""";
}

std::string TracingConnectionGenerator::MethodDefinition(
    google::protobuf::MethodDescriptor const& method) {
  if (IsBidirStreaming(method)) {
    return R"""(
std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    $request_type$,
    $response_type$>>
$tracing_connection_class_name$::Async$method_name$() {
  return child_->Async$method_name$();
}
)""";
  }

  if (IsStreamingRead(method)) {
    return R"""(
StreamRange<$response_type$>
$tracing_connection_class_name$::$method_name$($request_type$ const& request) {
  return child_->$method_name$(request);
})""";
  }

  if (IsStreamingWrite(method)) {
    // Streaming writes are only used in services that need hand-crafted
    // connection and client classes, they are not supported.
    return {};
  }

  if (IsPaginated(method)) {
    return R"""(
StreamRange<$range_output_type$>
$tracing_connection_class_name$::$method_name$($request_type$ request) {
  return child_->$method_name$(request);
}
)""";
  }

  if (IsLongrunningOperation(method)) {
    return absl::StrCat(
        // The return type may be a simple `Status` or the
        // computed type of the long-running operation
        IsResponseTypeEmpty(method) ?
                                    R"""(
future<Status>)"""
                                    :
                                    R"""(
future<StatusOr<$longrunning_deduced_response_type$>>)""",
        R"""(
$tracing_connection_class_name$::$method_name$($request_type$ const& request) {
  return child_->$method_name$(request);
}
)""");
  }

  return absl::StrCat(IsResponseTypeEmpty(method) ? R"""(
Status)"""
                                                  : R"""(
StatusOr<$response_type$>)""",
                      R"""(
$tracing_connection_class_name$::$method_name$($request_type$ const& request) {
  return child_->$method_name$(request);
}
)""");
}

std::string TracingConnectionGenerator::AsyncMethodDefinition(
    google::protobuf::MethodDescriptor const& method) {
  return absl::StrCat(IsResponseTypeEmpty(method) ? R"""(
future<Status>)"""
                                                  : R"""(
future<StatusOr<$response_type$>>)""",
                      R"""(
$tracing_connection_class_name$::Async$method_name$($request_type$ const& request) {
  return child_->Async$method_name$(request);
}
)""");
}

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google
