#pragma once

#ifndef O2_MATH_LOGARITHM_HPP
#define O2_MATH_LOGARITHM_HPP

#include <cmath>

// --- Standard Logarithms ---

// Natural logarithm (base-e).
inline long double ln(const long double value)
{
    return std::logl(value);
}

// Common logarithm (base-10).
inline long double log10(const long double value)
{
    return std::log10l(value);
}

// Binary logarithm (base-2). Useful for information theory and CS.
inline long double log2(const long double value)
{
    return std::log2l(value);
}

// Custom base logarithm using the change of base formula.
inline long double log_custom(const long double value, const long double base)
{
    return std::logl(value) / std::logl(base);
}

// --- Specialized Functions ---

inline long double ln_1p(const long double x)
{
    return std::log1pl(x);
}

inline long double exp_power(const long double x)
{
    return std::expl(x);
}

inline long double exp_m1(const long double x)
{
    return std::expm1l(x);
}

inline long double logistic_sigmoid(const long double x)
{
    return 1.0L / (1.0L + std::expl(-x));
}

#endif
