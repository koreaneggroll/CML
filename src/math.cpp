#include "../include/math.hpp"

int cml::max(int a, int b){
    return (a > b ? a : b);
}

float cml::max(float a, float b){
    return (a > b ? a : b);
}


int cml::min(int a, int b){
    return (a > b ? b : a);
}

float cml::min(float a, float b){
    return (a > b ? b : a);
}