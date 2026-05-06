#pragma once

#ifndef O2_MATH_CIRCLE_HPP
#define O2_MATH_CIRCLE_HPP

#include <cmath>
#include "values.hpp"

inline long double circle_area(long double radius)
{
    return PI * radius * radius;
}

inline long double circle_circumference(long double radius)
{
    return 2.0L * PI * radius;
}

inline long double radius_by_area(long double area)
{
    return std::sqrt(area / PI);
}

inline long double radius_by_circumference(long double circumference)
{
    return circumference / (2.0L * PI);
}

#endif
