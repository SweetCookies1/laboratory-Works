cmake_minimum_required(VERSION 3.20)
project(new_projects C)

set(CMAKE_C_STANDARD 11)

add_executable(new_projects main.c)
add_subdirectory(libs)
target_link_libraries(new-project data_structures)
