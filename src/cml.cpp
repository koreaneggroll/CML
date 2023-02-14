#include "../include/cml.hpp"


double cml::hypot(double catheti1, double catheti2){
    return cml::sqrt(cml::pow(catheti1, 2) + cml::pow(catheti2, 2));
}
