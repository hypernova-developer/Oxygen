#pragma once

#ifndef O2_MATH_CONVERSION_HPP
#define O2_MATH_CONVERSION_HPP

#include "values.hpp"

// --- Angle Conversions ---

inline constexpr long double degree_to_radian(const long double degree)
{
    return (degree * PI) / STRAIGHT_ANGLE;
}

inline constexpr long double radian_to_degree(const long double radian)
{
    return (radian * STRAIGHT_ANGLE) / PI;
}


// --- Heat Conversions ---

inline constexpr long double celsius_to_kelvin(const long double celsius)
{
    return celsius + 273.15L;
}

inline constexpr long double kelvin_to_celsius(const long double kelvin)
{
    return kelvin - 273.15L;
}

inline constexpr long double celsius_to_fahrenheit(const long double celsius)
{
    return (celsius * 1.8L) + 32.0L;
}

inline constexpr long double fahrenheit_to_celsius(const long double fahrenheit)
{
    return (fahrenheit - 32.0L) / 1.8L;
}


// --- Distance & Lenght Conversions ---

inline constexpr long double km_to_miles(const long double km)
{
    return km * 0.621371L;
}

inline constexpr long double miles_to_km(const long double miles)
{
    return miles / 0.621371L;
}

inline constexpr long double inch_to_cm(const long double inch)
{
    return inch * 2.54L;
}

inline constexpr long double cm_to_inch(const long double cm)
{
    return cm / 2.54L;
}


// --- Speed Conversions ---

inline constexpr long double kmh_to_ms(const long double kmh)
{
    return kmh / 3.6L;
}

inline constexpr long double ms_to_kmh(const long double ms)
{
    return ms * 3.6L;
}

// Time Calculation Based On Light Speed (Distance -> Seconds)
inline constexpr long double distance_to_light_time(const long double distance_meters)
{
    return distance_meters / LIGHT_SPEED;
}

#endif
