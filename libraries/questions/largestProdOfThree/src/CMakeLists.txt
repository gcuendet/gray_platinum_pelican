set(lib_sources
    "${CMAKE_CURRENT_SOURCE_DIR}/brute_force_method.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/queue_method.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/sort_method.cpp"
)

target_sources(${lib_name} PRIVATE ${lib_sources})
