#pragma once

#ifndef O2_MATH_ANGLES_HPP
#define O2_MATH_ANGLES_HPP

#include "values.hpp"

// Checks if an angle is an acute angle (0 < angle < 90).
inline constexpr bool is_acute(const long double angle)
{
    return angle > 0.0L && angle < RIGHT_ANGLE;
}

// Checks if an angle is a right angle (angle == 90). 
inline constexpr bool is_right(const long double angle)
{
    return angle == RIGHT_ANGLE;
}

// Checks if an angle is an obtuse angle (90 < angle < 180). 
inline constexpr bool is_obtuse(const long double angle)
{
    return angle > RIGHT_ANGLE && angle < STRAIGHT_ANGLE;
}

// It checks whether two angles add up to a ninety-degree angle (complementary angles). 
inline constexpr bool are_complementary(const long double a, const long double b)
{
    return (a + b) == COMPLEMENTARY_SUM;
}

// It checks whether two angles add up to one hundred and eighty degrees (they are supplementary). 
inline constexpr bool are_supplementary(const long double a, const long double b)
{
    return (a + b) == SUPPLEMENTARY_SUM;
}

// It normalizes negative angles or angles greater than 360 to the range [0, 360]. 
inline long double normalize_angle(long double angle)
{
    while (angle < 0.0L) angle += FULL_ANGLE;
    while (angle >= FULL_ANGLE) angle -= FULL_ANGLE;
    return angle;
}

#endif
