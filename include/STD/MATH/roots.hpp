#pragma once

#ifndef O2_MATH_ROOTS_HPP
#define O2_MATH_ROOTS_HPP

#include <cmath>


// --- Basic Roots ---

// Calculates the square root of a value.
inline long double get_sqrt(const long double value)
{
    return std::sqrtl(value);
}

// Calculates the cubic root (3rd root) of a value.
inline long double get_cbrt(const long double value)
{
    return std::cbrtl(value);
}

// --- Universal Root Calculation ---

inline long double get_nth_root(const long double value, const long double n)
{
    if (value == 0.0L) 
    {
        return 0.0L;
    }
    
    return std::powl(value, 1.0L / n);
}

// --- Specialized Utilities ---

inline long double get_hypotenuse(const long double x, const long double y)
{
    return std::hypotl(x, y);
}

inline long double get_hypotenuse_3d(const long double x, const long double y, const long double z)
{
    return std::sqrtl((x * x) + (y * y) + (z * z));
}

#endif
