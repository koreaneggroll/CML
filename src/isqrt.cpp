#include "../include/isqrt.hpp"

#ifdef __STDC__
static const float
#else
static float
#endif
threehalfs = 1.5F,
onehalf = 0.5F;
#ifdef __STDC__
    float cml_my_isqrt(float number)
#else
    float cml_my_isqrt(number)
    float number;
#endif
{
    long i;
    float x2, y;

    x2 = number * onehalf;
    y = number;
    i = *(long*)&y;
    i = 0x5f3759df - ( i >> 1);
    y = *(float*)&i;
    y = y * (threehalfs - (x2 * y * y));
    y = y * (threehalfs - (x2 * y * y));

    return y;
}


float cml::isqrt(float number){
    return cml_my_isqrt(number);
}