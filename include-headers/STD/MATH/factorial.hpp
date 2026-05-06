#pragma once

#ifndef O2_MATH_FACTORIAL_HPP
#define O2_MATH_FACTORIAL_HPP

#include <cstdint>
#include <stdexcept>

// Function to Calculate Factorial of the Given Number
inline uint64_t factorial(int n)
{
    if (n < 0) {
        throw std::invalid_argument("Factorial of negative numbers is undefined.");
    }
    
    if (n <= 1) return 1;

    uint64_t result = 1;
    
    for (int i = 2; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

#endif
