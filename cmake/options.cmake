option(WITH_TESTS "Build unit tests" ON)

if (${WITH_TESTS})
    enable_testing()
    include(GoogleTest)
endif()
