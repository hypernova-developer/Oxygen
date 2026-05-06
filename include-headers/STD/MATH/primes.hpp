#pragma once

#ifndef O2_MATH_PRIMES_HPP
#define O2_MATH_PRIMES_HPP

#include <vector>
#include <cmath>

// Function to Check If the Given Number a 'Prime Number'
inline bool is_prime(const long long n)
{
    if (n <= 1)
    {
        return false;
    }

    if (n <= 3)
    {
        return true;
    }

    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }

    for (long long i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}

// Function to Get Prime Factors
inline std::vector<long long> get_prime_factors(long long n)
{
    std::vector<long long> factors;

    while (n % 2 == 0)
    {
        factors.push_back(2);
        n /= 2;
    }

    for (long long i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            factors.push_back(i);
            n /= i;
        }
    }

    if (n > 2)
    {
        factors.push_back(n);
    }

    return factors;
}

#endif
