#include "../include/sqrt.hpp"

#ifdef __STDC__
static const double
#else
static double
#endif
SQRT_EXP = 0.5;

float cml::sqrt(float a){
    return pow(a, SQRT_EXP);
}