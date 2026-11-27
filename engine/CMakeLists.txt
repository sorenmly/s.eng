include(FetchContent)

FetchContent_Declare(
  glfw
  GIT_REPOSITORY https://github.com/glfw/glfw.git
  GIT_TAG master
  FIND_PACKAGE_ARGS
)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(glfw)
find_package(OpenGL REQUIRED)

add_library(seng SHARED src/Core.cpp src/Window.cpp src/Logging.cpp
  src/Util.cpp src/Renderer.cpp)

target_compile_definitions(seng PUBLIC SENG_LOG)
target_include_directories(seng PUBLIC include/seng)
target_link_libraries(seng PRIVATE OpenGL::GL glfw glad)
