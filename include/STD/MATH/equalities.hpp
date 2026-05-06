#pragma once

#ifndef O2_MATH_EQUALITIES_HPP
#define O2_MATH_EQUALITIES_HPP

#include <functional>

// Function to Solve Equalities
inline double evaluate_equality(const std::function<double(double)>& equation, double x)
{
    return equation(x);
}

#endif
