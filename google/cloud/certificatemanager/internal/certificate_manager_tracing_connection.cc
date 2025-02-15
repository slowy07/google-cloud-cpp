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
// source: google/cloud/certificatemanager/v1/certificate_manager.proto

#include "google/cloud/certificatemanager/internal/certificate_manager_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace certificatemanager_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CertificateManagerTracingConnection::CertificateManagerTracingConnection(
    std::shared_ptr<certificatemanager::CertificateManagerConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::certificatemanager::v1::Certificate>
CertificateManagerTracingConnection::ListCertificates(
    google::cloud::certificatemanager::v1::ListCertificatesRequest request) {
  return child_->ListCertificates(request);
}

StatusOr<google::cloud::certificatemanager::v1::Certificate>
CertificateManagerTracingConnection::GetCertificate(
    google::cloud::certificatemanager::v1::GetCertificateRequest const&
        request) {
  return child_->GetCertificate(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::Certificate>>
CertificateManagerTracingConnection::CreateCertificate(
    google::cloud::certificatemanager::v1::CreateCertificateRequest const&
        request) {
  return child_->CreateCertificate(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::Certificate>>
CertificateManagerTracingConnection::UpdateCertificate(
    google::cloud::certificatemanager::v1::UpdateCertificateRequest const&
        request) {
  return child_->UpdateCertificate(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
CertificateManagerTracingConnection::DeleteCertificate(
    google::cloud::certificatemanager::v1::DeleteCertificateRequest const&
        request) {
  return child_->DeleteCertificate(request);
}

StreamRange<google::cloud::certificatemanager::v1::CertificateMap>
CertificateManagerTracingConnection::ListCertificateMaps(
    google::cloud::certificatemanager::v1::ListCertificateMapsRequest request) {
  return child_->ListCertificateMaps(request);
}

StatusOr<google::cloud::certificatemanager::v1::CertificateMap>
CertificateManagerTracingConnection::GetCertificateMap(
    google::cloud::certificatemanager::v1::GetCertificateMapRequest const&
        request) {
  return child_->GetCertificateMap(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::CertificateMap>>
CertificateManagerTracingConnection::CreateCertificateMap(
    google::cloud::certificatemanager::v1::CreateCertificateMapRequest const&
        request) {
  return child_->CreateCertificateMap(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::CertificateMap>>
CertificateManagerTracingConnection::UpdateCertificateMap(
    google::cloud::certificatemanager::v1::UpdateCertificateMapRequest const&
        request) {
  return child_->UpdateCertificateMap(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
CertificateManagerTracingConnection::DeleteCertificateMap(
    google::cloud::certificatemanager::v1::DeleteCertificateMapRequest const&
        request) {
  return child_->DeleteCertificateMap(request);
}

StreamRange<google::cloud::certificatemanager::v1::CertificateMapEntry>
CertificateManagerTracingConnection::ListCertificateMapEntries(
    google::cloud::certificatemanager::v1::ListCertificateMapEntriesRequest
        request) {
  return child_->ListCertificateMapEntries(request);
}

StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>
CertificateManagerTracingConnection::GetCertificateMapEntry(
    google::cloud::certificatemanager::v1::GetCertificateMapEntryRequest const&
        request) {
  return child_->GetCertificateMapEntry(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>>
CertificateManagerTracingConnection::CreateCertificateMapEntry(
    google::cloud::certificatemanager::v1::
        CreateCertificateMapEntryRequest const& request) {
  return child_->CreateCertificateMapEntry(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>>
CertificateManagerTracingConnection::UpdateCertificateMapEntry(
    google::cloud::certificatemanager::v1::
        UpdateCertificateMapEntryRequest const& request) {
  return child_->UpdateCertificateMapEntry(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
CertificateManagerTracingConnection::DeleteCertificateMapEntry(
    google::cloud::certificatemanager::v1::
        DeleteCertificateMapEntryRequest const& request) {
  return child_->DeleteCertificateMapEntry(request);
}

StreamRange<google::cloud::certificatemanager::v1::DnsAuthorization>
CertificateManagerTracingConnection::ListDnsAuthorizations(
    google::cloud::certificatemanager::v1::ListDnsAuthorizationsRequest
        request) {
  return child_->ListDnsAuthorizations(request);
}

StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>
CertificateManagerTracingConnection::GetDnsAuthorization(
    google::cloud::certificatemanager::v1::GetDnsAuthorizationRequest const&
        request) {
  return child_->GetDnsAuthorization(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>>
CertificateManagerTracingConnection::CreateDnsAuthorization(
    google::cloud::certificatemanager::v1::CreateDnsAuthorizationRequest const&
        request) {
  return child_->CreateDnsAuthorization(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>>
CertificateManagerTracingConnection::UpdateDnsAuthorization(
    google::cloud::certificatemanager::v1::UpdateDnsAuthorizationRequest const&
        request) {
  return child_->UpdateDnsAuthorization(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
CertificateManagerTracingConnection::DeleteDnsAuthorization(
    google::cloud::certificatemanager::v1::DeleteDnsAuthorizationRequest const&
        request) {
  return child_->DeleteDnsAuthorization(request);
}

StreamRange<google::cloud::certificatemanager::v1::CertificateIssuanceConfig>
CertificateManagerTracingConnection::ListCertificateIssuanceConfigs(
    google::cloud::certificatemanager::v1::ListCertificateIssuanceConfigsRequest
        request) {
  return child_->ListCertificateIssuanceConfigs(request);
}

StatusOr<google::cloud::certificatemanager::v1::CertificateIssuanceConfig>
CertificateManagerTracingConnection::GetCertificateIssuanceConfig(
    google::cloud::certificatemanager::v1::
        GetCertificateIssuanceConfigRequest const& request) {
  return child_->GetCertificateIssuanceConfig(request);
}

future<
    StatusOr<google::cloud::certificatemanager::v1::CertificateIssuanceConfig>>
CertificateManagerTracingConnection::CreateCertificateIssuanceConfig(
    google::cloud::certificatemanager::v1::
        CreateCertificateIssuanceConfigRequest const& request) {
  return child_->CreateCertificateIssuanceConfig(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
CertificateManagerTracingConnection::DeleteCertificateIssuanceConfig(
    google::cloud::certificatemanager::v1::
        DeleteCertificateIssuanceConfigRequest const& request) {
  return child_->DeleteCertificateIssuanceConfig(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace certificatemanager_internal
}  // namespace cloud
}  // namespace google
