include(FetchContent)

if (${WITH_TESTS})
    include("${CMAKE_CURRENT_SOURCE_DIR}/gtest.cmake")
endif()
