#include "../include/fma.hpp"



#ifdef __STDC__
    float cml_my_fma(float x, float y, float z)
#else
    float cml_my_fma(x, y, z)
    float x, y, z;
#endif
{
    return x * y + z;
}


float cml::fma(float x, float y, float z){
    return cml_my_fma(x, y, z);
}