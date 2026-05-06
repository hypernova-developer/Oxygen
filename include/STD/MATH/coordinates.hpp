#pragma once

#ifndef O2_MATH_COORDINATES_HPP
#define O2_MATH_COORDINATES_HPP

#include "values.hpp"
#include <cmath>

// --- Cartesian to Polar ---

// Calculates the radius (r) from Cartesian coordinates (x, y). 
inline long double get_polar_r(const long double x, const long double y)
{
    return std::sqrtl((x * x) + (y * y));
}

// Calculates the angle (theta) in radians from Cartesian coordinates (x, y). 
inline long double get_polar_theta(const long double x, const long double y)
{
    return std::atan2l(y, x);
}


// --- Polar to Cartesian ---

// Calculates the X coordinate from Polar coordinates (r, theta). 
inline long double get_cartesian_x(const long double r, const long double theta)
{
    return r * std::cosl(theta);
}

// Calculates the Y coordinate from Polar coordinates (r, theta). 
inline long double get_cartesian_y(const long double r, const long double theta)
{
    return r * std::sinl(theta);
}


// --- Distance Calculations ---

// Calculates the Euclidean distance between two 2D points. 
inline long double get_distance_2d(const long double x1, const long double y1, 
                                   const long double x2, const long double y2)
{
    long double dx = x2 - x1;
    long double dy = y2 - y1;
    
    return std::sqrtl((dx * dx) + (dy * dy));
}

// Calculates the Euclidean distance between two 3D points. 
inline long double get_distance_3d(const long double x1, const long double y1, const long double z1,
                                   const long double x2, const long double y2, const long double z2)
{
    long double dx = x2 - x1;
    long double dy = y2 - y1;
    long double dz = z2 - z1;
    
    return std::sqrtl((dx * dx) + (dy * dy) + (dz * dz));
}

#endif
