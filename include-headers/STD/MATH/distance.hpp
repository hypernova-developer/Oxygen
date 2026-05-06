#pragma once

#ifndef O2_MATH_DISTANCE_HPP
#define O2_MATH_DISTANCE_HPP

#include "values.hpp"

// --- Unit to Meter ---

// Converts any given value from a specific unit to Meters.
inline constexpr long double to_meter(const long double value, const long double unit_multiplier)
{
    return value * unit_multiplier;
}

// --- Meter to Unit ---

// Converts a value from Meters to a specific target unit.
inline constexpr long double from_meter(const long double meters, const long double unit_multiplier)
{
    return meters / unit_multiplier;
}

// --- Universal Unit to Unit ---
inline constexpr long double convert_distance(const long double value, 
                                              const long double source_multiplier, 
                                              const long double target_multiplier)
{
    // First convert to meter, then to the target unit.
    return (value * source_multiplier) / target_multiplier;
}

#endif
