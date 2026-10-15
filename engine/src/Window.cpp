#include "../include/seng/Window.h"
#include "../include/seng/Logging.h"
#include <GLFW/glfw3.h>

static int glfw_count_init = 0;

seng::window::window(int width, int height, const char *title) {
  if (glfw_count_init == 0) {
    glfwInit();
    glfw_count_init = 1;
  }
  m_width = width;
  m_height = height;
  m_title = title;

  /* creating window */
  m_window_handler = glfwCreateWindow(width, height, title, NULL, NULL);
  if (!m_window_handler) {
    glfwTerminate();
    seng::log::error("Window couldn't init.");
  } else {
    seng::log::info("Window initialized!");
  }

  glfwMakeContextCurrent(m_window_handler);
}

seng::window::~window() {
  if (m_window_handler)
    glfwDestroyWindow(m_window_handler);
}

int seng::window::shouldClose() {
  return glfwWindowShouldClose(m_window_handler);
}

GLFWwindow *seng::window::getWindowHandler() const { return m_window_handler; }

void seng::window::drawUpdate() const { glfwSwapBuffers(m_window_handler); }
void seng::window::eventUpdate() const { glfwPollEvents(); }

const char *seng::window::getTitle() const { return m_title; }
int seng::window::getWidth() const { return m_width; }
int seng::window::getHeight() const { return m_height; }
