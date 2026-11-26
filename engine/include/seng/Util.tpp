#include "Util.h"

namespace seng {

template <typename T> T vec2<T>::length() { return std::sqrt(x * x + y * y); }
template <typename T> vec2<T> vec2<T>::normalize() { T len = length(); return vec2<T>(x/len, y/len); }


template <typename T> T vec3<T>::length() { return std::sqrt(x * x + y * y + z * z); }
template <typename T> vec3<T> vec3<T>::normalize() { T len = length(); return vec3<T>(x/len, y/len, z/len); }

template <typename T> T vec4<T>::length() { return std::sqrt(x * x + y * y + z * z + a * a); }
template <typename T> vec4<T> vec4<T>::normalize() { T len = length(); return vec4<T>(x/len, y/len, z/len, a/len); }

}; // namespace seng
