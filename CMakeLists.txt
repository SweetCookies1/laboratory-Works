cmake_minimum_required(VERSION 3.20)
project(new_projects C)

set(CMAKE_C_STANDARD 11)

add_executable(new-projects main.c
        libs/algorithms/array/array.c libs/algorithms/array/array.h
        libs/sorting_complexity/generators/generators.c libs/sorting_complexity/generators/generators.h
        libs/sorting_complexity/sorting_complexity.c libs/sorting_complexity/sorting_complexity.h
        )

add_subdirectory(libs)

target_link_libraries(new-projects algorithms)
target_link_libraries(new-projects sorting_complexity)


