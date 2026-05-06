#pragma once

#ifndef O2_MATH_VALUES_HPP
#define O2_MATH_VALUES_HPP

/* 
    DEV NOTE: Save these variables inside a fine header file!!! 
    Oxygen Special Variables
    inline constexpr const char oxygen_dev_name[20] = "hypernova-developer";
    inline constexpr const int dev_year = 2026;
    inline constexpr const char* oxygen_dev_ProtocolX_encoded_signs = "104X121X112X101X114X110X111X118X97XX45XX100X101X118X101X108X111X112X101X114X";
    inline constexpr const char* oxygen_slogan = "When you are drowned, refresh yourself with Oxygen.";
*/

// Irrationals: 
inline constexpr long double PI = 3.14159265358979323846L;
inline constexpr long double E = 2.71828182845904523536L;
inline constexpr long double GOLDEN_RATIO = 1.61803398874989484820L;

// Physics: Basic properties
inline constexpr long double LIGHT_SPEED = 299792458.0L;
inline constexpr long double SOUND_SPEED = 343.2L;
inline constexpr long double GRAVITY = 9.80665L;

// Physics: Fundamental constants
inline constexpr long double PLANCK_CONSTANT = 6.62607015e-34L;
inline constexpr long double AVOGADRO_NUMBER = 6.02214076e23L;
inline constexpr long double BOLTZMANN_CONSTANT = 1.380649e-23L;
inline constexpr long double GAS_CONSTANT = 8.314462618L;
inline constexpr long double FARADAY_CONSTANT = 96485.33212L;
inline constexpr long double STEFAN_BOLTZMANN_CONSTANT = 5.670374419e-8L;

// Angles
inline constexpr long double RIGHT_ANGLE = 90.0L;
inline constexpr long double STRAIGHT_ANGLE = 180.0L;
inline constexpr long double FULL_ANGLE = 360.0L;
inline constexpr long double COMPLEMENTARY_SUM = 90.0L;
inline constexpr long double SUPPLEMENTARY_SUM = 180.0L;

// Distance Units (Base unit: Meters)
// Micro Scale
inline constexpr long double NANOMETER = 1e-9L;
inline constexpr long double MICROMETER = 1e-6L;
inline constexpr long double MILLIMETER = 0.001L;
inline constexpr long double CENTIMETER = 0.01L;
inline constexpr long double DECIMETER = 0.1L;

// Human Scale
inline constexpr long double INCH = 0.0254L;
inline constexpr long double FOOT = 0.3048L;
inline constexpr long double YARD = 0.9144L;

// Macro Scale
inline constexpr long double KILOMETER = 1000.0L;
inline constexpr long double MILE = 1609.344L;
inline constexpr long double NAUTICAL_MILE = 1852.0L;

// Astronomical Scale
inline constexpr long double ASTRONOMICAL_UNIT = 149597870700.0L;
inline constexpr long double LIGHT_YEAR = 9460730472580800.0L;
inline constexpr long double PARSEC = 30856775814913673.0L;

#endif
