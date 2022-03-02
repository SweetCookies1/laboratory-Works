add_library(data_structures
        string/string_.c
        )

add_subdirectory(string)
target_link_libraries(data_structures)