#pragma once

namespace seng {

template <typename T> class vec2 {
public:
  T x, y;

  vec2(T x, T y) : x(x), y(y) {};

  vec2<T> operator+(const vec2<T> &other) const {
    return vec2<T>(x + other.x, y + other.y);
  };
};

template <typename T> class vec3 {
public:
  T x, y, z;

  vec3(T x, T y, T z) : x(x), y(y), z(z) {};

  vec3<T> operator+(const vec3 &other) const {
    return vec3<T>(x + other.x, y + other.y, z + other.z);
  };
};

template <typename T> class vec4 {
public:
  T x, y, z, a;

  vec4(T x, T y, T z, T a) : x(x), y(y), z(z), a(a) {};

  vec4<T> operator+(const vec4 &other) const {
    return vec4<T>(x + other.x, y + other.y, z + other.z);
  };
};
} // namespace seng
