#pragma once

#ifndef O2_MATH_LOGIC_HPP
#define O2_MATH_LOGIC_HPP

#include <cmath>

// Checks if two long double values are nearly equal within a given epsilon. 
inline bool is_nearly_equal(const long double a, const long double b, const long double epsilon = 1e-12L)
{
    return std::fabsl(a - b) < epsilon;
}

// Checks if a value is within a specific range [min, max]. 
inline constexpr bool is_between(const long double val, const long double min, const long double max)
{
    return (val >= min && val <= max);
}

// Returns the absolute value of a long double. 
inline long double absolute(const long double n)
{
    return (n < 0.0L) ? -n : n;
}

#endif
