cmake_minimum_required(VERSION 3.13)
project(s.eng LANGUAGES C CXX VERSION 0.0.1)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(vendor)
add_subdirectory(engine)
add_subdirectory(example)


