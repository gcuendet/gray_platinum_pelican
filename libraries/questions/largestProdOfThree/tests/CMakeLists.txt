set(tests_name "unit_tests_questions_largest_three")

add_executable(
    ${tests_name}
    "${CMAKE_CURRENT_SOURCE_DIR}/units/brute_force_method.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/units/sort_method.cpp"
)

target_link_libraries(
    ${tests_name}
    gpp::${lib_name}
    gtest_main
)

gtest_discover_tests(${tests_name})

set(benchmarks_name "bench_questions_largest_three")

add_executable(
    ${benchmarks_name}
    "${CMAKE_CURRENT_SOURCE_DIR}/benchmarks/benchmark_methods.cpp"
)

target_link_libraries(
     ${benchmarks_name}
     gpp::${lib_name}
     benchmark_main
)
