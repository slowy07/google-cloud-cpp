// Copyright 2018 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TERMINATE_HANDLER_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TERMINATE_HANDLER_H

#include "google/cloud/version.h"
#include <functional>

namespace google {
namespace cloud {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
/**
 * @defgroup terminate Control behavior on unrecoverable errors.
 *
 * If exceptions are not enabled via `GOOGLE_CLOUD_CPP_HAVE_EXCEPTIONS`, calling
 * any function from throw_delegate.h will result in calling the handler
 * installed via this API. By default, the library calls `std::abort()`.
 */

/**
 * Terminate handler.
 *
 * It should handle the error, whose description are given in *msg* and should
 * never return.
 *
 * @ingroup terminate
 */
using TerminateHandler = std::function<void(char const* msg)>;

/**
 * Install terminate handler and get the old one atomically.
 *
 * @param f the handler. It should never return, behaviour is undefined
 *        otherwise.
 *
 * @return Previously set handler.
 *
 * @ingroup terminate
 */
TerminateHandler SetTerminateHandler(TerminateHandler f);

/**
 * Get the currently installed handler.
 *
 * @return The currently installed handler.
 *
 * @ingroup terminate
 */
TerminateHandler GetTerminateHandler();

/**
 * Invoke the currently installed handler.
 *
 * @param msg Details about the error.
 *
 * This function should never return.
 *
 * @ingroup terminate
 */
[[noreturn]] void Terminate(char const* msg);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TERMINATE_HANDLER_H
