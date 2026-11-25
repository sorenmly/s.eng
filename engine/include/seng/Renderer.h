#pragma once

#include "../../../vendor/glad/include/glad/gl.h"
#include "Util.h"

namespace seng {
class renderer {

public:
  static void clear(seng::vec4<double> color);
};
} // namespace seng
