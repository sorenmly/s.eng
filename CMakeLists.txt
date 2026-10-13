cmake_minimum_required(VERSION 3.12)

project(seng VERSION 1.0)


add_subdirectory(extern/glfw)

add_executable(seng src/glad.c src/main.cpp)

target_include_directories(seng PUBLIC extern/glfw/include extern/glad )
target_link_directories(seng PRIVATE extern/glfw/src)
target_link_libraries(seng glfw3)

