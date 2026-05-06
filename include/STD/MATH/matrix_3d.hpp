#pragma once

#ifndef O2_MATH_MATRIX_3D_HPP
#define O2_MATH_MATRIX_3D_HPP

#include "values.hpp"
#include <cmath>

struct Matrix3D
{
    long double data[3][3];
};

// --- Core Matrix Utilities ---

inline Matrix3D get_identity_matrix()
{
    return { {
        {1.0L, 0.0L, 0.0L},
        {0.0L, 1.0L, 0.0L},
        {0.0L, 0.0L, 1.0L}
    } };
}

// --- Matrix Arithmetic ---

// Adds two 3x3 matrices.
inline Matrix3D add_matrices(const Matrix3D m1, const Matrix3D m2)
{
    Matrix3D result;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            result.data[i][j] = m1.data[i][j] + m2.data[i][j];
        }
    }
    return result;
}

inline Matrix3D multiply_matrices(const Matrix3D m1, const Matrix3D m2)
{
    Matrix3D result = { { {0.0L, 0.0L, 0.0L}, {0.0L, 0.0L, 0.0L}, {0.0L, 0.0L, 0.0L} } };
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
                result.data[i][j] += m1.data[i][k] * m2.data[k][j];
            }
        }
    }
    return result;
}

// --- Advanced Operations ---

// Calculates the determinant of a 3x3 matrix.
inline long double get_matrix_determinant(const Matrix3D m)
{
    return m.data[0][0] * (m.data[1][1] * m.data[2][2] - m.data[1][2] * m.data[2][1]) -
           m.data[0][1] * (m.data[1][0] * m.data[2][2] - m.data[1][2] * m.data[2][0]) +
           m.data[0][2] * (m.data[1][0] * m.data[2][1] - m.data[1][1] * m.data[2][0]);
}

#endif
