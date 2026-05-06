#pragma once

#ifndef O2_MATH_VECTORS_2D_HPP
#define O2_MATH_VECTORS_2D_HPP

#include <cmath>

struct Vector2D
{
    long double x;
    long double y;
};

// --- Basic Vector Arithmetic ---

// Adds two vectors together.
inline Vector2D add_vectors(const Vector2D v1, const Vector2D v2)
{
    return { v1.x + v2.x, v1.y + v2.y };
}

// Subtracts the second vector from the first.
inline Vector2D subtract_vectors(const Vector2D v1, const Vector2D v2)
{
    return { v1.x - v2.x, v1.y - v2.y };
}

// Scales a vector by a scalar value.
inline Vector2D scale_vector(const Vector2D v, const long double scalar)
{
    return { v.x * scalar, v.y * scalar };
}

// --- Advanced Operations ---

// Calculates the dot product of two vectors.
inline long double get_dot_product(const Vector2D v1, const Vector2D v2)
{
    return (v1.x * v2.x) + (v1.y * v2.y);
}

// Calculates the magnitude (length) of the vector.
inline long double get_vector_magnitude(const Vector2D v)
{
    return std::sqrtl((v.x * v.x) + (v.y * v.y));
}

// Returns a normalized (unit) vector in the same direction.
inline Vector2D normalize_vector(const Vector2D v)
{
    long double mag = get_vector_magnitude(v);
    
    if (mag == 0.0L) 
    {
        return { 0.0L, 0.0L };
    }
    
    return { v.x / mag, v.y / mag };
}

#endif
