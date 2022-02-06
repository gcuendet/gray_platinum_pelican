include(FetchContent)

if (${WITH_TESTS} OR ${WITH_BENCHMARKS})
    include("${CMAKE_CURRENT_SOURCE_DIR}/gtest.cmake")
endif()

if (${WITH_BENCHMARKS})
    include("${CMAKE_CURRENT_SOURCE_DIR}/gbenchmark.cmake")
endif()

