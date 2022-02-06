# Grey Platinum Pelican

This repo contains algorithmic experimentations in C++.
The name was generated on [the code name generator](https://www.codenamegenerator.com).

## Requirements

In order to be able to build the content of this repo, you'll need:

- A C++ compiler (tested with apple clang 12 on macOS and GCC 9.3 on Ubuntu)
- Git (used to fetch dependencies)
- CMake >=3.17

On Ubuntu 20.04 this can be installed with:
```
# install a compiler and git
sudo apt install build-essential git -y
# install cmake
sudo apt install wget -y
wget https://github.com/Kitware/CMake/releases/download/v3.22.2/cmake-3.22.2-Linux-x86_64.sh -O cmake.sh
sudo sh cmake.sh --prefix=/usr/local/ --exclude-subdir
```

## Build

```
cmake -S. -Bbuild
cmake --build build
```
