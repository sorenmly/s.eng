
#include <seng.h>

class App : public seng::Application {
public:
  App() {}

  ~App() {}
};

int main() {

  App *app = new App();

  app->Run();
  return 0;
}
