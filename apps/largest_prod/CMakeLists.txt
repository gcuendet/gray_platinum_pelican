set(app_name "largestProd")

set(srcs 
    "${CMAKE_CURRENT_SOURCE_DIR}/inputs.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp"
)

add_executable(${app_name} ${srcs})
target_link_libraries(${app_name} gpp::largest_three)
