#include "../include/hypot.hpp"


/*

Returns sqrt(catheti1^2 + catheti2^2)

*/


float cml::hypot(float catheti1, float catheti2){
    return cml::sqrt(pow(catheti1, 2) + pow(catheti2, 2));
}