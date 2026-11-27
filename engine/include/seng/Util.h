#pragma once

#include <cmath>
#include <ostream>

namespace seng {

/// @brief Represents a two-dimensional mathematical vector.
///
/// A templated vector class that stores two components, x and y.
/// Provides basic vector arithmetic, length calculation, normalization,
/// equality comparison, and stream output.
///
/// @tparam T Numeric type used for the vector components.
///
/// @par Example
/// @code
/// seng::vec2<float> a(2.0f, 3.0f);
/// seng::vec2<float> b(1.0f, 4.0f);
///
/// auto sum = a + b;
/// auto product = a * b;
///
/// std::cout << sum << std::endl;
/// @endcode
template <typename T> class vec2 {
public:
  T x; ///< Vector component "x"
  T y; ///< Vector component "y"

  /// @brief Constructs a two-dimensional vector.
  /// @param x Initial X component.
  /// @param y Initial Y component.
  vec2(T x, T y) : x(x), y(y) {};

  /// @brief Adds two vectors component-wise.
  /// @param other Vector to add.
  /// @return A new vector containing the sum of both vectors.
  vec2<T> operator+(const vec2<T> &other) const {
    return vec2<T>(x + other.x, y + other.y);
  };

  /// @brief Multiplies two vectors component-wise.
  ///
  /// This operation performs component-wise multiplication rather
  /// than a dot product.
  ///
  /// @param other Vector whose components will be multiplied.
  /// @return A new vector containing the component-wise product.
  vec2<T> operator*(const vec2<T> &other) const {
    return vec2<T>(x * other.x, y * other.y);
  }

  /// @brief Calculates the vector's Euclidean length.
  /// @return The magnitude of the vector.
  T length();

  /// @brief Normalizes the vector.
  ///
  /// Produces a vector with the same direction and unit length.
  ///
  /// @return The normalized vector.
  vec2<T> normalize();

  /// @brief Compares two vectors for equality.
  ///
  /// Compares both components using their equality operators.
  ///
  /// @param v Vector to compare against.
  /// @return true if both components are equal, false otherwise.
  bool operator==(const vec2<T> &v) const { return x == v.x && y == v.y; }
};

/// @brief Represents a three-dimensional mathematical vector.
///
/// A templated vector class that stores three components, x, y, and z.
/// Provides basic vector arithmetic, length calculation, normalization,
/// equality comparison, and stream output.
///
/// @tparam T Numeric type used for the vector components.
///
/// @par Example
/// @code
/// seng::vec3<float> position(1.0f, 2.0f, 3.0f);
/// seng::vec3<float> offset(2.0f, 0.0f, 1.0f);
///
/// auto result = position + offset;
/// std::cout << result << std::endl;
/// @endcode
template <typename T> class vec3 {
public:
  T x; ///< Vector component "x"
  T y; ///< Vector component "y"
  T z; ///< Vector component "z"

  /// @brief Constructs a three-dimensional vector.
  /// @param x Initial X component.
  /// @param y Initial Y component.
  /// @param z Initial Z component.
  vec3(T x, T y, T z) : x(x), y(y), z(z) {};

  /// @brief Adds two vectors component-wise.
  /// @param other Vector to add.
  /// @return A new vector containing the sum of both vectors.
  vec3<T> operator+(const vec3 &other) const {
    return vec3<T>(x + other.x, y + other.y, z + other.z);
  };

  /// @brief Multiplies two vectors component-wise.
  ///
  /// This operation performs component-wise multiplication rather
  /// than a dot product.
  ///
  /// @param other Vector whose components will be multiplied.
  /// @return A new vector containing the component-wise product.
  vec3<T> operator*(const vec3<T> &other) const {
    return vec3<T>(x * other.x, y * other.y, z * other.z);
  }

  /// @brief Calculates the vector's Euclidean length.
  /// @return The magnitude of the vector.
  T length();

  /// @brief Normalizes the vector.
  ///
  /// Produces a vector with the same direction and unit length.
  ///
  /// @return The normalized vector.
  vec3<T> normalize();

  /// @brief Compares two vectors for equality.
  ///
  /// Compares all three components using their equality operators.
  ///
  /// @param v Vector to compare against.
  /// @return true if all components are equal, false otherwise.
  bool operator==(const vec3<T> &v) const {
    return x == v.x && y == v.y && z == v.z;
  }
};

/// @brief Represents a four-dimensional mathematical vector.
///
/// A templated vector class that stores four components: x, y, z, and a.
/// Provides basic vector arithmetic, length calculation, normalization,
/// equality comparison, and stream output.
///
/// @tparam T Numeric type used for the vector components.
///
/// @par Example
/// @code
/// seng::vec4<float> color(1.0f, 0.5f, 0.0f, 1.0f);
/// seng::vec4<float> factor(0.5f, 1.0f, 1.0f, 1.0f);
///
/// auto result = color * factor;
/// std::cout << result << std::endl;
/// @endcode
template <typename T> class vec4 {
public:
  T x; ///< Vector component "x"
  T y; ///< Vector component "y"
  T z; ///< Vector component "z"
  T a; ///< Vector component "a"

  /// @brief Constructs a four-dimensional vector.
  /// @param x Initial X component.
  /// @param y Initial Y component.
  /// @param z Initial Z component.
  /// @param a Initial fourth component.
  vec4(T x, T y, T z, T a) : x(x), y(y), z(z), a(a) {};

  /// @brief Adds two vectors component-wise.
  /// @param other Vector to add.
  /// @return A new vector containing the sum of both vectors.
  vec4<T> operator+(const vec4 &other) const {
    return vec4<T>(x + other.x, y + other.y, z + other.z, a + other.a);
  };

  /// @brief Multiplies two vectors component-wise.
  ///
  /// This operation performs component-wise multiplication rather
  /// than a dot product.
  ///
  /// @param other Vector whose components will be multiplied.
  /// @return A new vector containing the component-wise product.
  vec4<T> operator*(const vec4<T> &other) const {
    return vec4<T>(x * other.x, y * other.y, z * other.z, a * other.a);
  }

  /// @brief Calculates the vector's Euclidean length.
  /// @return The magnitude of the vector.
  T length();

  /// @brief Normalizes the vector.
  ///
  /// Produces a vector with the same direction and unit length.
  ///
  /// @return The normalized vector.
  vec4<T> normalize();

  /// @brief Compares two vectors for equality.
  ///
  /// Compares all four components using their equality operators.
  ///
  /// @param v Vector to compare against.
  /// @return true if all components are equal, false otherwise.
  bool operator==(const vec4<T> &v) const {
    return x == v.x && y == v.y && z == v.z && a == v.a;
  }
};

/// @brief Writes a two-dimensional vector to an output stream.
///
/// Formats the vector as `vec2(x, y)`.
///
/// @tparam T Numeric type of the vector components.
/// @param os Output stream.
/// @param v Vector to output.
/// @return Reference to the output stream.
template <typename T> std::ostream &operator<<(std::ostream &os, vec2<T> v) {
  os << "vec2(" << v.x << ", " << v.y << ")";
  return os;
}

/// @brief Writes a three-dimensional vector to an output stream.
///
/// Formats the vector as `vec3(x, y, z)`.
///
/// @tparam T Numeric type of the vector components.
/// @param os Output stream.
/// @param v Vector to output.
/// @return Reference to the output stream.
template <typename T> std::ostream &operator<<(std::ostream &os, vec3<T> v) {
  os << "vec3(" << v.x << ", " << v.y << ", " << v.z << ")";
  return os;
}

/// @brief Writes a four-dimensional vector to an output stream.
///
/// Formats the vector as `vec4(x, y, z, a)`.
///
/// @tparam T Numeric type of the vector components.
/// @param os Output stream.
/// @param v Vector to output.
/// @return Reference to the output stream.
template <typename T> std::ostream &operator<<(std::ostream &os, vec4<T> v) {
  os << "vec4(" << v.x << ", " << v.y << ", " << v.z << ", " << v.a << ")";

  return os;
}
} // namespace seng

#include "Util.tpp"
