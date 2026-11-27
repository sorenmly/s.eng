#include <seng.h>

int main() {
  // Creating window instance
  seng::window window(1080, 720, "title");

  // Game loop
  while (!window.shouldClose()) {
    window.eventUpdate();

    /*
     * Here, the color R = 1.0, G = 1.0, B = 0.0 and A = 1.0 is a yellow,
     * where X is red, Y is green, Z is blue and A is Alpha
     */
    seng::renderer::clear(seng::vec4<double>(1.0, 1.0, 0.0, 1.0));

    window.drawUpdate();
  }
}
