#ifndef CML_MATH_HPP
#define CML_MATH_HPP


#include "./abs.hpp"
#include "./bin.hpp"
#include "./fma.hpp"
#include "./hypot.hpp"
#include "./isqrt.hpp"
#include "./pow.hpp"
#include "./trig.hpp"
#include "./sqrt.hpp"
#include "./radians_degrees.hpp"



namespace cml{
    int max(int a, int b);
    float max(float a, float b);

    int min(int a, int b);
    float min(float a, float b);
};


#endif //CML_MATH_HPP