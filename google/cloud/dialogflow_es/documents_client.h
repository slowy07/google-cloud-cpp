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
// source: google/cloud/dialogflow/v2/document.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_DOCUMENTS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_DOCUMENTS_CLIENT_H

#include "google/cloud/dialogflow_es/documents_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for managing knowledge
/// [Documents][google.cloud.dialogflow.v2.Document].
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class DocumentsClient {
 public:
  explicit DocumentsClient(std::shared_ptr<DocumentsConnection> connection,
                           Options opts = {});
  ~DocumentsClient();

  //@{
  // @name Copy and move support
  DocumentsClient(DocumentsClient const&) = default;
  DocumentsClient& operator=(DocumentsClient const&) = default;
  DocumentsClient(DocumentsClient&&) = default;
  DocumentsClient& operator=(DocumentsClient&&) = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(DocumentsClient const& a, DocumentsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(DocumentsClient const& a, DocumentsClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Returns the list of all documents of the knowledge base.
  ///
  /// @param parent  Required. The knowledge base to list all documents for.
  ///  Format: `projects/<Project ID>/locations/<Location
  ///  ID>/knowledgeBases/<Knowledge Base ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Document,google/cloud/dialogflow/v2/document.proto#L245}
  ///
  /// [google.cloud.dialogflow.v2.ListDocumentsRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L391}
  /// [google.cloud.dialogflow.v2.Document]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L245}
  ///
  StreamRange<google::cloud::dialogflow::v2::Document> ListDocuments(
      std::string const& parent, Options opts = {});

  ///
  /// Returns the list of all documents of the knowledge base.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::ListDocumentsRequest,google/cloud/dialogflow/v2/document.proto#L391}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Document,google/cloud/dialogflow/v2/document.proto#L245}
  ///
  /// [google.cloud.dialogflow.v2.ListDocumentsRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L391}
  /// [google.cloud.dialogflow.v2.Document]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L245}
  ///
  StreamRange<google::cloud::dialogflow::v2::Document> ListDocuments(
      google::cloud::dialogflow::v2::ListDocumentsRequest request,
      Options opts = {});

  ///
  /// Retrieves the specified document.
  ///
  /// @param name  Required. The name of the document to retrieve.
  ///  Format `projects/<Project ID>/locations/<Location
  ///  ID>/knowledgeBases/<Knowledge Base ID>/documents/<Document ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Document,google/cloud/dialogflow/v2/document.proto#L245}
  ///
  /// [google.cloud.dialogflow.v2.GetDocumentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L378}
  /// [google.cloud.dialogflow.v2.Document]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L245}
  ///
  StatusOr<google::cloud::dialogflow::v2::Document> GetDocument(
      std::string const& name, Options opts = {});

  ///
  /// Retrieves the specified document.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::GetDocumentRequest,google/cloud/dialogflow/v2/document.proto#L378}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Document,google/cloud/dialogflow/v2/document.proto#L245}
  ///
  /// [google.cloud.dialogflow.v2.GetDocumentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L378}
  /// [google.cloud.dialogflow.v2.Document]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L245}
  ///
  StatusOr<google::cloud::dialogflow::v2::Document> GetDocument(
      google::cloud::dialogflow::v2::GetDocumentRequest const& request,
      Options opts = {});

  ///
  /// Creates a new document.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/cx/docs/how/long-running-operation).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`:
  /// [KnowledgeOperationMetadata][google.cloud.dialogflow.v2.KnowledgeOperationMetadata]
  /// - `response`: [Document][google.cloud.dialogflow.v2.Document]
  ///
  /// @param parent  Required. The knowledge base to create a document for.
  ///  Format: `projects/<Project ID>/locations/<Location
  ///  ID>/knowledgeBases/<Knowledge Base ID>`.
  /// @param document  Required. The document to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Document,google/cloud/dialogflow/v2/document.proto#L245}
  ///
  /// [google.cloud.dialogflow.v2.CreateDocumentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L444}
  /// [google.cloud.dialogflow.v2.Document]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L245}
  ///
  future<StatusOr<google::cloud::dialogflow::v2::Document>> CreateDocument(
      std::string const& parent,
      google::cloud::dialogflow::v2::Document const& document,
      Options opts = {});

  ///
  /// Creates a new document.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/cx/docs/how/long-running-operation).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`:
  /// [KnowledgeOperationMetadata][google.cloud.dialogflow.v2.KnowledgeOperationMetadata]
  /// - `response`: [Document][google.cloud.dialogflow.v2.Document]
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::CreateDocumentRequest,google/cloud/dialogflow/v2/document.proto#L444}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Document,google/cloud/dialogflow/v2/document.proto#L245}
  ///
  /// [google.cloud.dialogflow.v2.CreateDocumentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L444}
  /// [google.cloud.dialogflow.v2.Document]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L245}
  ///
  future<StatusOr<google::cloud::dialogflow::v2::Document>> CreateDocument(
      google::cloud::dialogflow::v2::CreateDocumentRequest const& request,
      Options opts = {});

  ///
  /// Creates documents by importing data from external sources.
  /// Dialogflow supports up to 350 documents in each request. If you try to
  /// import more, Dialogflow will return an error.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/cx/docs/how/long-running-operation).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`:
  /// [KnowledgeOperationMetadata][google.cloud.dialogflow.v2.KnowledgeOperationMetadata]
  /// - `response`:
  /// [ImportDocumentsResponse][google.cloud.dialogflow.v2.ImportDocumentsResponse]
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::ImportDocumentsRequest,google/cloud/dialogflow/v2/document.proto#L460}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::ImportDocumentsResponse,google/cloud/dialogflow/v2/document.proto#L513}
  ///
  /// [google.cloud.dialogflow.v2.ImportDocumentsRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L460}
  /// [google.cloud.dialogflow.v2.ImportDocumentsResponse]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L513}
  ///
  future<StatusOr<google::cloud::dialogflow::v2::ImportDocumentsResponse>>
  ImportDocuments(
      google::cloud::dialogflow::v2::ImportDocumentsRequest const& request,
      Options opts = {});

  ///
  /// Deletes the specified document.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/cx/docs/how/long-running-operation).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`:
  /// [KnowledgeOperationMetadata][google.cloud.dialogflow.v2.KnowledgeOperationMetadata]
  /// - `response`: An [Empty
  ///   message](https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#empty)
  ///
  /// @param name  Required. The name of the document to delete.
  ///  Format: `projects/<Project ID>/locations/<Location
  ///  ID>/knowledgeBases/<Knowledge Base ID>/documents/<Document ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::KnowledgeOperationMetadata,google/cloud/dialogflow/v2/document.proto#L609}
  ///
  /// [google.cloud.dialogflow.v2.DeleteDocumentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L519}
  /// [google.cloud.dialogflow.v2.KnowledgeOperationMetadata]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L609}
  ///
  future<StatusOr<google::cloud::dialogflow::v2::KnowledgeOperationMetadata>>
  DeleteDocument(std::string const& name, Options opts = {});

  ///
  /// Deletes the specified document.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/cx/docs/how/long-running-operation).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`:
  /// [KnowledgeOperationMetadata][google.cloud.dialogflow.v2.KnowledgeOperationMetadata]
  /// - `response`: An [Empty
  ///   message](https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#empty)
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::DeleteDocumentRequest,google/cloud/dialogflow/v2/document.proto#L519}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::KnowledgeOperationMetadata,google/cloud/dialogflow/v2/document.proto#L609}
  ///
  /// [google.cloud.dialogflow.v2.DeleteDocumentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L519}
  /// [google.cloud.dialogflow.v2.KnowledgeOperationMetadata]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L609}
  ///
  future<StatusOr<google::cloud::dialogflow::v2::KnowledgeOperationMetadata>>
  DeleteDocument(
      google::cloud::dialogflow::v2::DeleteDocumentRequest const& request,
      Options opts = {});

  ///
  /// Updates the specified document.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/cx/docs/how/long-running-operation).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`:
  /// [KnowledgeOperationMetadata][google.cloud.dialogflow.v2.KnowledgeOperationMetadata]
  /// - `response`: [Document][google.cloud.dialogflow.v2.Document]
  ///
  /// @param document  Required. The document to update.
  /// @param update_mask  Optional. Not specified means `update all`.
  ///  Currently, only `display_name` can be updated, an InvalidArgument will be
  ///  returned for attempting to update other fields.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Document,google/cloud/dialogflow/v2/document.proto#L245}
  ///
  /// [google.cloud.dialogflow.v2.UpdateDocumentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L532}
  /// [google.cloud.dialogflow.v2.Document]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L245}
  ///
  future<StatusOr<google::cloud::dialogflow::v2::Document>> UpdateDocument(
      google::cloud::dialogflow::v2::Document const& document,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the specified document.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/cx/docs/how/long-running-operation).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`:
  /// [KnowledgeOperationMetadata][google.cloud.dialogflow.v2.KnowledgeOperationMetadata]
  /// - `response`: [Document][google.cloud.dialogflow.v2.Document]
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::UpdateDocumentRequest,google/cloud/dialogflow/v2/document.proto#L532}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Document,google/cloud/dialogflow/v2/document.proto#L245}
  ///
  /// [google.cloud.dialogflow.v2.UpdateDocumentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L532}
  /// [google.cloud.dialogflow.v2.Document]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L245}
  ///
  future<StatusOr<google::cloud::dialogflow::v2::Document>> UpdateDocument(
      google::cloud::dialogflow::v2::UpdateDocumentRequest const& request,
      Options opts = {});

  ///
  /// Reloads the specified document from its specified source, content_uri or
  /// content. The previously loaded content of the document will be deleted.
  /// Note: Even when the content of the document has not changed, there still
  /// may be side effects because of internal implementation changes.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/cx/docs/how/long-running-operation).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`:
  /// [KnowledgeOperationMetadata][google.cloud.dialogflow.v2.KnowledgeOperationMetadata]
  /// - `response`: [Document][google.cloud.dialogflow.v2.Document]
  ///
  /// Note: The `projects.agent.knowledgeBases.documents` resource is
  /// deprecated; only use `projects.knowledgeBases.documents`.
  ///
  /// @param name  Required. The name of the document to reload.
  ///  Format: `projects/<Project ID>/locations/<Location
  ///  ID>/knowledgeBases/<Knowledge Base ID>/documents/<Document ID>`
  /// @param content_uri  Optional. The path of gcs source file for reloading
  /// document content. For now,
  ///  only gcs uri is supported.
  ///  For documents stored in Google Cloud Storage, these URIs must have
  ///  the form `gs://<bucket-name>/<object-name>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Document,google/cloud/dialogflow/v2/document.proto#L245}
  ///
  /// [google.cloud.dialogflow.v2.ReloadDocumentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L543}
  /// [google.cloud.dialogflow.v2.Document]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L245}
  ///
  future<StatusOr<google::cloud::dialogflow::v2::Document>> ReloadDocument(
      std::string const& name, std::string const& content_uri,
      Options opts = {});

  ///
  /// Reloads the specified document from its specified source, content_uri or
  /// content. The previously loaded content of the document will be deleted.
  /// Note: Even when the content of the document has not changed, there still
  /// may be side effects because of internal implementation changes.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/cx/docs/how/long-running-operation).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`:
  /// [KnowledgeOperationMetadata][google.cloud.dialogflow.v2.KnowledgeOperationMetadata]
  /// - `response`: [Document][google.cloud.dialogflow.v2.Document]
  ///
  /// Note: The `projects.agent.knowledgeBases.documents` resource is
  /// deprecated; only use `projects.knowledgeBases.documents`.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::ReloadDocumentRequest,google/cloud/dialogflow/v2/document.proto#L543}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Document,google/cloud/dialogflow/v2/document.proto#L245}
  ///
  /// [google.cloud.dialogflow.v2.ReloadDocumentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L543}
  /// [google.cloud.dialogflow.v2.Document]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L245}
  ///
  future<StatusOr<google::cloud::dialogflow::v2::Document>> ReloadDocument(
      google::cloud::dialogflow::v2::ReloadDocumentRequest const& request,
      Options opts = {});

  ///
  /// Exports a smart messaging candidate document into the specified
  /// destination.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/cx/docs/how/long-running-operation).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`:
  /// [KnowledgeOperationMetadata][google.cloud.dialogflow.v2.KnowledgeOperationMetadata]
  /// - `response`: [Document][google.cloud.dialogflow.v2.Document]
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::ExportDocumentRequest,google/cloud/dialogflow/v2/document.proto#L576}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Document,google/cloud/dialogflow/v2/document.proto#L245}
  ///
  /// [google.cloud.dialogflow.v2.ExportDocumentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L576}
  /// [google.cloud.dialogflow.v2.Document]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/document.proto#L245}
  ///
  future<StatusOr<google::cloud::dialogflow::v2::Document>> ExportDocument(
      google::cloud::dialogflow::v2::ExportDocumentRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<DocumentsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_DOCUMENTS_CLIENT_H