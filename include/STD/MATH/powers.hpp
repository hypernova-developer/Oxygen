#pragma once

#ifndef O2_MATH_POWERS_HPP
#define O2_MATH_POWERS_HPP

// Returns the square of a number.
inline constexpr long double square(const long double n)
{
    return n * n;
}

// Returns the cube of a number. 
inline constexpr long double cube(const long double n)
{
    return n * n * n;
}

// Calculates power using the Binary Exponentiation algorithm for efficiency. 
inline long double power(long double base, int exp)
{
    long double res = 1.0L;
    
    while (exp > 0)
    {
        if (exp % 2 == 1) 
        {
            res *= base;
        }
        
        base *= base;
        exp /= 2;
    }
    
    return res;
}

#endif
