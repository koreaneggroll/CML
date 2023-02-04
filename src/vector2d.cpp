#include "../include/vector2d.hpp"


cml::Vector2 cml::scalar(float sc, Vector2 v){
    return Vector2(v.x*sc, v.y*sc);
}

cml::Vector2 cml::cross(Vector2 a, Vector2 b){
    return Vector2(a.x * b.y, b.x * a.y);
}

float cml::dot(Vector2 a, Vector2 b){
    return a.x * b.x + a.y * b.y;
}

float cml::magnitude(Vector2 v){
    return sqrt(pow(v.x, 2) + pow(v.y, 2));
}

float cml::angle(Vector2 v){
    //arc tangent
    return atan(v.y/v.x);
}

cml::Vector2 cml::unit(Vector2 v){
    //assigned to a variable to only be computed once
    float vMagnitude = magnitude(v);
    return Vector2(v.x/vMagnitude, v.y/vMagnitude);
}

cml::Vector2 cml::projection(Vector2 a, Vector2 b){
    Vector2 result = scalar(dot(b, a)/pow(magnitude(a), 2), a);
    return result;
}

float cml::scalar_projection(Vector2 a, Vector2 b){
    return dot(b, a)/magnitude(a);
}