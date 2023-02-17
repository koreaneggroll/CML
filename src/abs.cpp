#include "../include/abs.hpp"


#ifdef __STDC__
    int cml_my_absi(int x)
#else
    int cml_my_absi(x)
    int x;
#endif
{
    return (x < 0) ? -x : x; //absolute value of {x}
}


#ifdef __STDC__
    float cml_my_absf(float x)
#else
    float cml_my_absf(x)
    float x;
#endif
{
    return (x < 0) ? -x : x; //absolute value of float {x}
}


#ifdef __STDC__
    float cml_my_fdim(float x, float y)
#else
    float cml_my_fdim(x, y)
    float x, y;
#endif
{
    return cml_my_absf(x - y);
}


int cml::abs(int x){
    return cml_my_absi(x);
}

float cml::abs(float x){
    return cml_my_absf(x);
}


float cml::fdim(float x, float y){
    return cml_my_fdim(x, y);
}