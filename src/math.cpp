#include "../include/math.hpp"


 #define MAX(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a > _b ? _a : _b; })

#define MIN(a, b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a > _b ? _b : _a; })

int cml::max(int a, int b){
    return MAX(a,b);
}

float cml::max(float a, float b){
    return MAX(a,b);
}


int cml::min(int a, int b){
    return MAX(a,b);
}

float cml::min(float a, float b){
    return MAX(a,b);
}