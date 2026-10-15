#pragma once

struct GLFWwindow;

namespace seng {

/// @brief Represents an application window.
///
/// Owns the underlying GLFW window handle and destroys it when the object
/// goes out of scope (RAII). Because it owns a unique resource, the class
/// cannot be copied.
class window {
private:
  const char *m_title;                    ///< Window title (not owned).
  int m_width, m_height;                  ///< Window size in screen units.
  GLFWwindow *m_window_handler = nullptr; ///< Underlying GLFW handle (owned).

public:
  /// @brief Creates a window.
  /// @param width  Width of the window.
  /// @param height Height of the window.
  /// @param title  Title shown in the title bar. The pointer is stored,
  ///               not copied, so it must outlive the window.
  window(int width, int height, const char *title);

  /// @brief Copying is disabled.
  ///
  /// The window owns a GLFW handle that must be destroyed exactly once.
  /// A copy would lead to a double free.
  window(const window &other) = delete;

  /// @brief Copy assignment is disabled for the same reason as above.
  window &operator=(const window &other) = delete;

  /// @brief Destroys the window and releases the GLFW handle.
  ~window();

  /// @brief Checks if the window should close. If not, maintains the window.
  /// @returns An int: 1 if it shouldn't close and 0 otherwise.
  int shouldClose();

  /// @brief Returns the window width.
  int getWidth() const;

  /// @brief Returns the window height.
  int getHeight() const;

  /// @brief Returns the window title.
  /// @return Pointer to the title string. Do not free it.
  const char *getTitle() const;

  /// @brief Returns the window handler (window pointer itself)
  /// @return The handler of the window in which is a pointer to a GLFWwindow
  /// type.
  GLFWwindow *getWindowHandler() const;

  /// @brief Updates the drawing process. Wrapper to glfwSwapBuffers().
  void drawUpdate() const;

  /// @brief Updates the events in the engine, like input. Wrapper to
  /// glfwPollEvents();
  void eventUpdate() const;
};

} // namespace seng
