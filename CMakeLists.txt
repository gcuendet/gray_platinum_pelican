cmake_minimum_required(VERSION 3.17)
project(GrayPlatinumPelican LANGUAGES CXX)

include(cmake/config.cmake)
include(cmake/options.cmake)

add_subdirectory(3rdparty)

add_subdirectory(apps)
add_subdirectory(libraries)

