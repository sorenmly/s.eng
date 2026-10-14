find_package(glfw3 REQUIRED)
find_package(OpenGL REQUIRED)

add_library(engine SHARED src/Core.cpp)

target_include_directories(engine PUBLIC include)
target_link_libraries(engine PRIVATE OpenGL::GL glfw3 glad)
