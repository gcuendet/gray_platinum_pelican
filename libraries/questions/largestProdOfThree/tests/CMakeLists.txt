set(tests_name "unit_tests_questions_largest_three")

enable_testing()

add_executable(
    ${tests_name}
    "${CMAKE_CURRENT_SOURCE_DIR}/units/sort_method.cpp"
)

target_link_libraries(
    ${tests_name}
    gpp::${lib_name}
    gtest_main
)

include(GoogleTest)
gtest_discover_tests(${tests_name})

