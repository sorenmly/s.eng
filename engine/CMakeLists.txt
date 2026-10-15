find_package(glfw3 REQUIRED)
find_package(OpenGL REQUIRED)

add_library(engine SHARED src/Core.cpp src/Window.cpp src/Logging.cpp)

target_compile_definitions(engine PUBLIC SENG_LOG)
target_include_directories(engine PUBLIC include/seng)
target_link_libraries(engine PRIVATE OpenGL::GL glfw3 glad)
