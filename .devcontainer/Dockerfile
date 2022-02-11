# See here for image contents: https://github.com/microsoft/vscode-dev-containers/tree/v0.217.4/containers/cpp/.devcontainer/base.Dockerfile

# [Choice] Debian / Ubuntu version (use Debian 11, Ubuntu 18.04/21.04 on local arm64/Apple Silicon): debian-11, debian-10, ubuntu-21.04, ubuntu-20.04, ubuntu-18.04
ARG VARIANT="bullseye"
FROM mcr.microsoft.com/vscode/devcontainers/base:0-${VARIANT}
ARG CMAKE_VERSION="3.22.2"

# [Optional] Uncomment this section to install additional packages.
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    # Install LLVM 14 (!)
    && apt-get -y install --no-install-recommends lsb-release wget software-properties-common make \
    && wget https://apt.llvm.org/llvm.sh \
    && chmod +x llvm.sh \
    && ./llvm.sh 14 \ 
    # Install libc++-14-dev manually (to replace libstdc++-10 that is on Hirsute by default)
    && apt-get -y install --no-install-recommends libc++-14-dev libc++abi-14-dev
    # Install CMake 3.22.2
    && wget https://github.com/Kitware/CMake/releases/download/v${CMAKE_VERSION}/cmake-${CMAKE_VERSION}-linux-$(uname -m).sh -O cmake.sh\
    && chmod +x cmake.sh \
    && ./cmake.sh --prefix=/usr/local/ --exclude-subdir