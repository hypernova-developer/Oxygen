#pragma once

#ifndef O2_MATH_ELLIPSE_HPP
#define O2_MATH_ELLIPSE_HPP

#include "values.hpp"
#include <cmath>

inline constexpr long double get_ellipse_area(const long double semi_major, const long double semi_minor)
{
    return PI * semi_major * semi_minor;
}

inline long double get_ellipse_perimeter(const long double a, const long double b)
{
    long double h = ((a - b) * (a - b)) / ((a + b) * (a + b));
    
    return PI * (a + b) * (1.0L + (3.0L * h) / (10.0L + std::sqrtl(4.0L - 3.0L * h)));
}

inline long double get_ellipse_eccentricity(const long double semi_major, const long double semi_minor)
{
    return std::sqrtl(1.0L - ((semi_minor * semi_minor) / (semi_major * semi_major)));
}

#endif
