option(WITH_TESTS "Build unit tests" ON)
option(WITH_BENCHMARKS "Build benchmarks" ON)

if (${WITH_TESTS})
    enable_testing()
    include(GoogleTest)
endif()

