set(benchmarks_name "bench_questions_largest_three")

add_executable(
    ${benchmarks_name}
    "${CMAKE_CURRENT_SOURCE_DIR}/benchmark_methods.cpp"
)

target_link_libraries(
     ${benchmarks_name}
     gpp::${lib_name}
     benchmark_main
)
