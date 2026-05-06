#pragma once

#ifndef O2_MATH_TRIGONOMETRY_HPP
#define O2_MATH_TRIGONOMETRY_HPP

#include "values.hpp"
#include <cmath>

inline long double to_radians(const long double degrees) { return degrees * (PI / 180.0L); }
inline long double to_degrees(const long double radians) { return radians * (180.0L / PI); }

inline long double get_sine(const long double degrees) { return std::sinl(to_radians(degrees)); }
inline long double get_cosine(const long double degrees) { return std::cosl(to_radians(degrees)); }
inline long double get_tangent(const long double degrees) { return std::tanl(to_radians(degrees)); }
inline long double get_cotangent(const long double degrees) { return 1.0L / std::tanl(to_radians(degrees)); }

#endif
