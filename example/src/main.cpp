
#include <seng.h>

int main() {
  seng::window window(640, 360, "s.eng");

  while (!window.shouldClose()) {
    window.eventUpdate();

    seng::renderer::clear(seng::vec4<double>(1.0, 1.0, 0.0, 1.0));

    window.drawUpdate();
  }
  return 0;
}
