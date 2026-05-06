#pragma once

#ifndef O2_MATH_SECTOR_HPP
#define O2_MATH_SECTOR_HPP

#include "values.hpp"
#include <cmath>

inline constexpr long double get_arc_length(const long double radius, const long double degree)
{
    return (2.0L * PI * radius) * (degree / 360.0L);
}

inline constexpr long double get_sector_area(const long double radius, const long double degree)
{
    return (PI * (radius * radius)) * (degree / 360.0L);
}

inline constexpr long double get_sector_area_by_arc(const long double radius, const long double arc_length)
{
    return (arc_length * radius) / 2.0L;
}

#endif
