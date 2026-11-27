#include <seng.h>

int main() {
  // Creating window instance
  seng::window window(1080, 720, "title");

  // Game loop

  /*
   * "while the window are not supposed to close, update the events and
   * clear the screen with the color in the vector i passed"
   *
   */
  while (!window.shouldClose()) {
    window.eventUpdate();

    seng::renderer::clear(seng::vec4<double>(1.0, 1.0, 0.0, 1.0));

    window.drawUpdate();
  }
}
