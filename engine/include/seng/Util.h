#pragma once

#include <cmath>
#include <ostream>

namespace seng {

template <typename T> class vec2 {
public:
  T x, y;

  vec2(T x, T y) : x(x), y(y) {};

  vec2<T> operator+(const vec2<T> &other) const {
    return vec2<T>(x + other.x, y + other.y);
  };

  vec2<T> operator*(const vec2<T> &other) const {
    return vec2<T>(x * other.x, y * other.y);
  }

  T length();
  vec2<T> normalize();

  bool operator==(const vec2<T> &v) const { return x == v.x && y == v.y; }
};

template <typename T> class vec3 {
public:
  T x, y, z;

  vec3(T x, T y, T z) : x(x), y(y), z(z) {};

  vec3<T> operator+(const vec3 &other) const {
    return vec3<T>(x + other.x, y + other.y, z + other.z);
  };

  vec3<T> operator*(const vec3<T> &other) const {
    return vec3<T>(x * other.x, y * other.y, z * other.z);
  }

  T length();
  vec3<T> normalize();

  bool operator==(const vec3<T> &v) const {
    return x == v.x && y == v.y && z == v.z;
  }
};

template <typename T> class vec4 {
public:
  T x, y, z, a;

  vec4(T x, T y, T z, T a) : x(x), y(y), z(z), a(a) {};

  vec4<T> operator+(const vec4 &other) const {
    return vec4<T>(x + other.x, y + other.y, z + other.z);
  };

  vec4<T> operator*(const vec4<T> &other) const {
    return vec4<T>(x * other.x, y * other.y, z * other.z, a * other.a);
  }

  T length();
  vec4<T> normalize();

  bool operator==(const vec4<T> &v) const {
    return x == v.x && y == v.y && z == v.z && a == v.a;
  }
};

template <typename T> std::ostream &operator<<(std::ostream &os, vec2<T> v) {
  os << "vec2(" << v.x << ", " << v.y << ")";
  return os;
}

template <typename T> std::ostream &operator<<(std::ostream &os, vec3<T> v) {
  os << "vec3(" << v.x << ", " << v.y << ", " << v.z << ")";
  return os;
}

template <typename T> std::ostream &operator<<(std::ostream &os, vec4<T> v) {
  os << "vec4(" << v.x << ", " << v.y << ", " << v.z << ", " << v.a << ")";

  return os;
}
} // namespace seng
  //
#include "Util.tpp"
