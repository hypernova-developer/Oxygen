#pragma once

#ifndef O2_MATH_RATIONALS_HPP
#define O2_MATH_RATIONALS_HPP

#include <iostream>
#include <numeric>
#include <string>

struct Rational
{
    long long num; // Numerator
    long long den; // Denominator

    // Constructor with automatic simplification
    Rational(long long n = 0, long long d = 1)
    {
        if (d == 0)
        {
            // In a real-world Oxygen app, this would throw a custom exception.
            // For now, we enforce a valid denominator.
            d = 1; 
        }

        // Standardize the sign: denominator should always be positive
        long long common = std::gcd(n, d);
        num = (d > 0 ? n : -n) / common;
        den = (d > 0 ? d : -d) / common;
    }

    // --- Arithmetic Operators ---

    Rational operator+(const Rational& other) const
    {
        return Rational(num * other.den + other.num * den, den * other.den);
    }

    Rational operator-(const Rational& other) const
    {
        return Rational(num * other.den - other.num * den, den * other.den);
    }

    Rational operator*(const Rational& other) const
    {
        return Rational(num * other.num, den * other.den);
    }

    Rational operator/(const Rational& other) const
    {
        // Division is just multiplication by the reciprocal
        return Rational(num * other.den, den * other.num);
    }

    // --- Utilities ---

    // Converts the fraction to a decimal string for output.
    std::string to_string() const
    {
        return std::to_string(num) + "/" + std::to_string(den);
    }

    // Converts to long double for floating-point calculations.
    long double to_long_double() const
    {
        return static_cast<long double>(num) / static_cast<long double>(den);
    }
};

#endif
