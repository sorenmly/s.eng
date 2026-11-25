#include "../include/seng/Renderer.h"
#include "../include/seng/Logging.h"
#include <GL/gl.h>

void seng::renderer::clear(seng::vec4<double> color) {
  glClearColor(color.x, color.y, color.z, color.a);
  glClear(GL_COLOR_BUFFER_BIT);
}
