# Copyright 2021 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

ARG DISTRO_VERSION=bionic
FROM ubuntu:${DISTRO_VERSION} AS devtools
ARG NCPU=4

## [START packaging.md]

# Install the minimal development tools, libcurl, OpenSSL and libc-ares:

# ```bash
RUN apt-get update && \
    apt-get --no-install-recommends install -y apt-transport-https apt-utils \
        automake build-essential ccache cmake ca-certificates git gcc g++ \
        libc-ares-dev libc-ares2 libcurl4-openssl-dev libssl-dev m4 make \
        pkg-config tar wget zlib1g-dev
# ```

# #### Abseil

# We need a recent version of Abseil.

# ```bash
WORKDIR /var/tmp/build
RUN wget -q https://github.com/abseil/abseil-cpp/archive/20200923.3.tar.gz && \
    tar -xf 20200923.3.tar.gz && \
    cd abseil-cpp-20200923.3 && \
    sed -i 's/^#define ABSL_OPTION_USE_\(.*\) 2/#define ABSL_OPTION_USE_\1 0/' "absl/base/options.h" && \
    cmake \
      -DCMAKE_BUILD_TYPE=Release \
      -DBUILD_TESTING=OFF \
      -DBUILD_SHARED_LIBS=yes \
      -DCMAKE_CXX_STANDARD=11 \
      -H. -Bcmake-out && \
    cmake --build cmake-out -- -j ${NCPU:-4} && \
    cmake --build cmake-out --target install -- -j ${NCPU:-4} && \
    ldconfig
# ```

# #### Protobuf

# We need to install a version of Protobuf that is recent enough to support the
# Google Cloud Platform proto files:

# ```bash
WORKDIR /var/tmp/build
RUN wget -q https://github.com/google/protobuf/archive/v3.14.0.tar.gz && \
    tar -xf v3.14.0.tar.gz && \
    cd protobuf-3.14.0/cmake && \
    cmake \
        -DCMAKE_BUILD_TYPE=Release \
        -DBUILD_SHARED_LIBS=yes \
        -Dprotobuf_BUILD_TESTS=OFF \
        -H. -Bcmake-out && \
    cmake --build cmake-out -- -j ${NCPU:-4} && \
    cmake --build cmake-out --target install -- -j ${NCPU:-4} && \
    ldconfig
# ```

# #### RE2

# We need a newer version of RE2 than the system package provides.

# ```bash
WORKDIR /var/tmp/build
RUN wget -q https://github.com/google/re2/archive/2020-11-01.tar.gz && \
    tar -xf 2020-11-01.tar.gz && \
    cd re2-2020-11-01 && \
    cmake -DCMAKE_BUILD_TYPE=Release \
        -DBUILD_SHARED_LIBS=ON \
        -DRE2_BUILD_TESTING=OFF \
        -H. -Bcmake-out && \
    cmake --build cmake-out -- -j ${NCPU:-4} && \
    cmake --build cmake-out --target install -- -j ${NCPU:-4} && \
    ldconfig
# ```

# #### gRPC

# We also need a version of gRPC that is recent enough to support the Google
# Cloud Platform proto files. We install it using:

# ```bash
WORKDIR /var/tmp/build
RUN wget -q https://github.com/grpc/grpc/archive/v1.35.0.tar.gz && \
    tar -xf v1.35.0.tar.gz && \
    cd grpc-1.35.0 && \
    cmake \
        -DCMAKE_BUILD_TYPE=Release \
        -DgRPC_INSTALL=ON \
        -DgRPC_BUILD_TESTS=OFF \
        -DgRPC_ABSL_PROVIDER=package \
        -DgRPC_CARES_PROVIDER=package \
        -DgRPC_PROTOBUF_PROVIDER=package \
        -DgRPC_RE2_PROVIDER=package \
        -DgRPC_SSL_PROVIDER=package \
        -DgRPC_ZLIB_PROVIDER=package \
        -H. -Bcmake-out && \
    cmake --build cmake-out -- -j ${NCPU:-4} && \
    cmake --build cmake-out --target install -- -j ${NCPU:-4} && \
    ldconfig
# ```

# #### crc32c

# The project depends on the Crc32c library, we need to compile this from
# source:

# ```bash
WORKDIR /var/tmp/build
RUN wget -q https://github.com/google/crc32c/archive/1.1.0.tar.gz && \
    tar -xf 1.1.0.tar.gz && \
    cd crc32c-1.1.0 && \
    cmake \
        -DCMAKE_BUILD_TYPE=Release \
        -DBUILD_SHARED_LIBS=yes \
        -DCRC32C_BUILD_TESTS=OFF \
        -DCRC32C_BUILD_BENCHMARKS=OFF \
        -DCRC32C_USE_GLOG=OFF \
        -H. -Bcmake-out && \
    cmake --build cmake-out -- -j ${NCPU:-4} && \
    cmake --build cmake-out --target install -- -j ${NCPU:-4} && \
    ldconfig
# ```

# #### nlohmann_json library

# The project depends on the nlohmann_json library. We use CMake to
# install it as this installs the necessary CMake configuration files.
# Note that this is a header-only library, and often installed manually.
# This leaves your environment without support for CMake pkg-config.

# ```bash
WORKDIR /var/tmp/build
RUN wget -q https://github.com/nlohmann/json/archive/v3.9.0.tar.gz && \
    tar -xzf v3.9.0.tar.gz && \
    cd json-3.9.0 && \
    cmake \
      -DCMAKE_BUILD_TYPE=Release \
      -DBUILD_SHARED_LIBS=yes \
      -DBUILD_TESTING=OFF \
      -H. -Bcmake-out/nlohmann/json && \
    cmake --build cmake-out/nlohmann/json --target install -- -j ${NCPU} && \
    ldconfig
# ```

## [END packaging.md]