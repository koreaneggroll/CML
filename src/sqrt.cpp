#include "../include/sqrt.hpp"


float cml::sqrt(float a){
    //using sqrt implementation in the FASTTRIG.H library
    return FT::sqrt(a);
}


float cml::asqrt(float a){
    return FTA::sqrt(a);
}

