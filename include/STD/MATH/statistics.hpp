#pragma once

#ifndef O2_MATH_STATISTICS_HPP
#define O2_MATH_STATISTICS_HPP

#include <vector>
#include <numeric>
#include <cmath>
#include <algorithm>

inline long double get_mean(const std::vector<long double>& data)
{
    if (data.empty()) return 0.0L;
    return std::accumulate(data.begin(), data.end(), 0.0L) / static_cast<long double>(data.size());
}

inline long double get_median(std::vector<long double> data)
{
    if (data.empty()) return 0.0L;
    std::sort(data.begin(), data.end());
    size_t size = data.size();
    if (size % 2 == 0) return (data[size / 2 - 1] + data[size / 2]) / 2.0L;
    return data[size / 2];
}

inline long double get_standard_deviation(const std::vector<long double>& data)
{
    if (data.size() < 2) return 0.0L;
    long double mean = get_mean(data);
    long double sum_sq = 0.0L;
    for (auto val : data) sum_sq += std::powl(val - mean, 2);
    return std::sqrtl(sum_sq / static_cast<long double>(data.size()));
}

inline long double get_arithmetic_mean(const std::vector<long double>& data)
{
    if (data.empty()) 
    {
        return 0.0L;
    }

    long double sum = std::accumulate(data.begin(), data.end(), 0.0L);
    return sum / static_cast<long double>(data.size());
}

#endif
