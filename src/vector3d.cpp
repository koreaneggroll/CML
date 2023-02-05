#include "../include/vector3d.hpp"

cml::Vector3 cml::scalar(double sc, Vector3 &v){
    return Vector3(sc*v.x, sc*v.y, sc*v.z);
}

cml::Vector3 cml::cross(Vector3 &a, Vector3 &b){
    return Vector3(a.y*b.z - a.z*b.y, a.z*b.x - a.x*b.z, a.x*b.y - a.y*b.x);
}

double cml::dot(Vector3 &a, Vector3 &b){
    return a.x*b.x + a.y*b.y + a.z*b.z;
}

double cml::magnitude(Vector3 &v){
    return sqrt(pow(v.x, 2) + pow(v.y, 2) + pow(v.z, 2));
}

double cml::angle(Vector3 &a, Vector3 &b){
    return acos(dot(a, b)/magnitude(a) * magnitude(b));
}

cml::Vector3 cml::unit(Vector3 &v){
    double vMagnitude = magnitude(v);
    return Vector3(v.x/vMagnitude, v.y/vMagnitude, v.z/vMagnitude);
}

cml::Vector3 cml::projection(Vector3 &a, Vector3 &b){
    Vector3 result = scalar(dot(b, a) / pow(magnitude(a), 2), a);
    return result;
}

double cml::scalar_projection(Vector3 &a, Vector3 &b){
    return dot(b, a) / magnitude(a);
}


//overloaded operators

// overloaded addition operator for 3D Vector
cml::Vector3 cml::Vector3::operator+(const Vector3 &v){
    return Vector3(x + v.x, y + v.y, z + v.z);
}

// overloaded subtraction operator for 3D Vector
cml::Vector3 cml::Vector3::operator-(const Vector3 &v){
    return Vector3(x - v.x, y - v.y, z - v.z);
}