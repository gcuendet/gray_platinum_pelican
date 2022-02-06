set(lib_name "largestProdOfThree")

add_library(${lib_name})
add_library(gpp::${lib_name} ALIAS ${lib_name})

add_subdirectory("src")
target_include_directories(${lib_name} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")

add_subdirectory("tests")
