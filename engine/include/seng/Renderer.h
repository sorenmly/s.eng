#pragma once

#include "Util.h"

namespace seng {

/// @class renderer
/// @brief Manages the rendering in the engine.
class renderer {

public:
  /// @fn clear(seng::vec4<double> color)
  /// @brief Clears the screen with given color as seng::vec4.
  /// @param color The color as seng::vec4. See example or class definition of
  /// std::vec4 for more information.
  ///
  /// @example example_clearvec4.cpp
  static void clear(seng::vec4<double> color);

  /// @fn clear(seng::vec4<float> color)
  /// @brief Clears the screen with given color as seng::vec4.
  /// @param color The color as seng::vec4. See example or class definition of
  /// std::vec4 for more information.
  ///
  static void clear(seng::vec4<float> color);
};
} // namespace seng
