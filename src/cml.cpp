#include "../include/cml.hpp"


double cml::hypot(double catheti1, double catheti2){
    return sqrt(pow(catheti1, 2), pow(catheti2, 2));
}

float cml::isqrt(float number){
    long i;
    float x2, y;
    const float threehalfs = 1.5F;

    x2 = number * 0.5F;
    y = number;
    i = *(long*)&y;
    i = 0x5f3759df - ( i >> 1);
    y = *(float*)&i;
    y = y * (threehalfs - (x2 * y * y));
    y = y * (threehalfs - (x2 * y * y));
}
