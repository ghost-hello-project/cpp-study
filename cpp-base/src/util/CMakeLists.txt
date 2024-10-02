aux_source_directory(. SRCS_UTIL)

if(MSVC)
    add_compile_options(-DJANNA_LIB_UTIL_EXPORT)
endif()

add_library(${lib_util_name} SHARED ${SRCS_UTIL})

if(WIN32)
    add_custom_command(TARGET ${lib_util_name} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:${lib_util_name}> ${bin_dir}/
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:${lib_util_name}> ${bin_test_dir}/
        VERBATIM
    )
endif()
