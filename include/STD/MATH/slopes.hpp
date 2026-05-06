#pragma once

#ifndef O2_MATH_SLOPES_HPP
#define O2_MATH_SLOPES_HPP

inline long double get_slope(long double x1, long double y1, long double x2, long double y2)
{
    if (x1 == x2) return 0.0L; // Represents vertical line (Undefined in reality)
    return (y2 - y1) / (x2 - x1);
}

inline bool are_perpendicular(long double m1, long double m2)
{
    return (m1 * m2) == -1.0L;
}

#endif
