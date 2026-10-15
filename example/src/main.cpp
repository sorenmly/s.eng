
#include <seng.h>

int main() {

  seng::log log;
  seng::window window(640, 360, "s.eng");

  while (!window.shouldClose()) {
    window.eventUpdate();

    window.drawUpdate();
  }
  return 0;
}
