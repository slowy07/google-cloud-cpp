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
// source: google/cloud/retail/v2/product_service.proto

#include "google/cloud/retail/internal/product_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ProductServiceTracingConnection::ProductServiceTracingConnection(
    std::shared_ptr<retail::ProductServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::retail::v2::Product>
ProductServiceTracingConnection::CreateProduct(
    google::cloud::retail::v2::CreateProductRequest const& request) {
  return child_->CreateProduct(request);
}

StatusOr<google::cloud::retail::v2::Product>
ProductServiceTracingConnection::GetProduct(
    google::cloud::retail::v2::GetProductRequest const& request) {
  return child_->GetProduct(request);
}

StreamRange<google::cloud::retail::v2::Product>
ProductServiceTracingConnection::ListProducts(
    google::cloud::retail::v2::ListProductsRequest request) {
  return child_->ListProducts(request);
}

StatusOr<google::cloud::retail::v2::Product>
ProductServiceTracingConnection::UpdateProduct(
    google::cloud::retail::v2::UpdateProductRequest const& request) {
  return child_->UpdateProduct(request);
}

Status ProductServiceTracingConnection::DeleteProduct(
    google::cloud::retail::v2::DeleteProductRequest const& request) {
  return child_->DeleteProduct(request);
}

future<StatusOr<google::cloud::retail::v2::ImportProductsResponse>>
ProductServiceTracingConnection::ImportProducts(
    google::cloud::retail::v2::ImportProductsRequest const& request) {
  return child_->ImportProducts(request);
}

future<StatusOr<google::cloud::retail::v2::SetInventoryResponse>>
ProductServiceTracingConnection::SetInventory(
    google::cloud::retail::v2::SetInventoryRequest const& request) {
  return child_->SetInventory(request);
}

future<StatusOr<google::cloud::retail::v2::AddFulfillmentPlacesResponse>>
ProductServiceTracingConnection::AddFulfillmentPlaces(
    google::cloud::retail::v2::AddFulfillmentPlacesRequest const& request) {
  return child_->AddFulfillmentPlaces(request);
}

future<StatusOr<google::cloud::retail::v2::RemoveFulfillmentPlacesResponse>>
ProductServiceTracingConnection::RemoveFulfillmentPlaces(
    google::cloud::retail::v2::RemoveFulfillmentPlacesRequest const& request) {
  return child_->RemoveFulfillmentPlaces(request);
}

future<StatusOr<google::cloud::retail::v2::AddLocalInventoriesResponse>>
ProductServiceTracingConnection::AddLocalInventories(
    google::cloud::retail::v2::AddLocalInventoriesRequest const& request) {
  return child_->AddLocalInventories(request);
}

future<StatusOr<google::cloud::retail::v2::RemoveLocalInventoriesResponse>>
ProductServiceTracingConnection::RemoveLocalInventories(
    google::cloud::retail::v2::RemoveLocalInventoriesRequest const& request) {
  return child_->RemoveLocalInventories(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_internal
}  // namespace cloud
}  // namespace google