#include "../include/vector2d.hpp"


cml::Vector2 cml::Vector2::scalar(float sc, Vector2 v){
    return Vector2(v.x*sc, v.y*sc);
}

cml::Vector2 cml::Vector2::cross(Vector2 a, Vector2 b){
    return Vector2(a.x * b.y, b.x * a.y);
}

float cml::Vector2::dot(Vector2 a, Vector2 b){
    return a.x * b.x + a.y * b.y;
}

float cml::Vector2::magnitude(Vector2 v){
    return sqrt(pow(v.x, 2) + pow(v.y, 2));
}