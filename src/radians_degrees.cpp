#include "../include/radians_degrees.hpp"

float cml::convert_rad(float radian){
    return (radian * cml::radiansToDegrees);
}

float cml::convert_deg(float degrees){
    return (degrees * cml::degreesToRadians);
}