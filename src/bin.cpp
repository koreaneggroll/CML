#include "../include/bin.hpp"


#ifdef __STDC__
static long long
#else
static long long
#endif
binary = 0,
remainder,
product = 1;


#ifdef __STDC__
    long long cml_my_bin(long long x)
#else
    long long cml_my_bin(x)
    long long x;
#endif

// x = decimal
{
    while(x != 0){
        remainder = x % 2;
        binary += (remainder * product);
        x /= 2;
        product *= 10;
    }

    return binary;
}




long long cml::bin(long long x){
    return cml_my_bin(x);
}