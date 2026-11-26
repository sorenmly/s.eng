
#include <iostream>
#include <seng.h>
int main() {
  seng::window window(640, 360, "s.eng");

  std::cout << seng::vec2<double>(1., 1.).length() << std::endl;
  std::cout << seng::vec2<double>(3, 4).normalize() << std::endl;

  std::cout << seng::vec3<float>(3., 4., 3.).normalize() << std::endl;
  std::cout << seng::vec4<float>(3., 4., 3., 4.).normalize() << std::endl;

  seng::vec2<double> a(1.0, 2.0);
  seng::vec2<double> b(1.0, 2.0);
  seng::vec2<double> c(2.0, 1.0);

  std::cout << "a==b = " << (a == b) << ", a==c = " << (a == c) << std::endl;

  while (!window.shouldClose()) {
    window.eventUpdate();

    seng::renderer::clear(seng::vec4<double>(1.0, 1.0, 0.0, 1.0));

    window.drawUpdate();
  }
  return 0;
}
