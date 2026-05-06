#pragma once

#ifndef O2_MATH_SHAPES_HPP
#define O2_MATH_SHAPES_HPP

#include "values.hpp"
#include <cmath>

// --- Triangle Family ---

struct Triangle
{
    long double a, b, c; // Sides

    long double get_perimeter() const { return a + b + c; }
    
    // Heron's Formula for any triangle
    long double get_area() const 
    {
        long double s = get_perimeter() / 2.0L;
        return std::sqrtl(s * (s - a) * (s - b) * (s - c));
    }
};

struct EquilateralTriangle : Triangle
{
    EquilateralTriangle(long double side) { a = b = c = side; }
};

// --- Quadrilateral Family ---

struct Rectangle
{
    long double width, height;
    long double get_area() const { return width * height; }
    long double get_perimeter() const { return 2.0L * (width + height); }
};

struct Square : Rectangle
{
    Square(long double side) { width = height = side; }
};

struct Parallelogram
{
    long double base, height, side;
    long double get_area() const { return base * height; }
    long double get_perimeter() const { return 2.0L * (base + side); }
};

struct Rhombus // Eşkenar Dörtgen
{
    long double side, diag1, diag2;
    long double get_area() const { return (diag1 * diag2) / 2.0L; }
    long double get_perimeter() const { return 4.0L * side; }
};

// --- Regular Polygons (The "Power" Section) ---

struct RegularPolygon
{
    int side_count;
    long double side_length;

    long double get_perimeter() const { return side_count * side_length; }
    
    long double get_area() const 
    {
        return (side_count * std::powl(side_length, 2)) / 
               (4.0L * std::tanl(PI / static_cast<long double>(side_count)));
    }
};

// Specialized Types for Clean Syntax
struct Pentagon  : RegularPolygon { Pentagon(long double s)  { side_count = 5;  side_length = s; } };
struct Hexagon   : RegularPolygon { Hexagon(long double s)   { side_count = 6;  side_length = s; } };
struct Heptagon  : RegularPolygon { Heptagon(long double s)  { side_count = 7;  side_length = s; } };
struct Octagon   : RegularPolygon { Octagon(long double s)   { side_count = 8;  side_length = s; } };
struct Nonagon   : RegularPolygon { Nonagon(long double s)   { side_count = 9;  side_length = s; } };
struct Decagon   : RegularPolygon { Decagon(long double s)   { side_count = 10; side_length = s; } };
struct Hendecagon: RegularPolygon { Hendecagon(long double s){ side_count = 11; side_length = s; } };
struct Dodecagon : RegularPolygon { Dodecagon(long double s) { side_count = 12; side_length = s; } };

#endif
