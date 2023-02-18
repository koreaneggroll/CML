#include "../include/vector3d.hpp"


cml::Vector3::Vector3(): x(0.0f), y(0.0f), z(0.0f){}
cml::Vector3::Vector3(float uX, float uY, float uZ): x(uX), y(uY), z(uZ){}
cml::Vector3::Vector3(const Vector3& v): x(v.x), y(v.y), z(v.z){}
cml::Vector3::~Vector3(){}

cml::Vector3 cml::scalar(float sc, Vector3 &v){
    return Vector3(sc*v.x, sc*v.y, sc*v.z);
}

cml::Vector3 cml::cross(Vector3 &a, Vector3 &b){
    return Vector3(a.y*b.z - a.z*b.y, a.z*b.x - a.x*b.z, a.x*b.y - a.y*b.x);
}

float cml::dot(Vector3 &a, Vector3 &b){
    return a.x*b.x + a.y*b.y + a.z*b.z;
}

float cml::magnitude(Vector3 &v){
    return sqrt(pow(v.x, 2) + pow(v.y, 2) + pow(v.z, 2));
}

float cml::angle(Vector3 &a, Vector3 &b){
    return acos(dot(a, b)/magnitude(a) * magnitude(b));
}

cml::Vector3 cml::unit(Vector3 &v){
    float vMagnitude = magnitude(v);
    return Vector3(v.x/vMagnitude, v.y/vMagnitude, v.z/vMagnitude);
}

cml::Vector3 cml::projection(Vector3 &a, Vector3 &b){
    Vector3 result = scalar(dot(b, a) / pow(magnitude(a), 2), a);
    return result;
}

float cml::scalar_projection(Vector3 &a, Vector3 &b){
    return dot(b, a) / magnitude(a);
}


//overloaded operators

// overloaded addition operator for 3D Vector
cml::Vector3 cml::Vector3::operator+(const Vector3 &v)const{
    return Vector3(x + v.x, y + v.y, z + v.z);
}

void cml::Vector3::operator+=(const Vector3& v){
    this->x += v.x;
    this->y += v.y;
    this->z += v.z;
}

// overloaded subtraction operator for 3D Vector
cml::Vector3 cml::Vector3::operator-(const Vector3 &v)const{
    return Vector3(x - v.x, y - v.y, z - v.z);
}

void cml::Vector3::operator-=(const Vector3& v){
    this->x -= v.x;
    this->y -= v.y;
    this->z -= v.z;
}

cml::Vector3 cml::Vector3::operator*(const float s)const{
    return Vector3(this->x*s, this->y*s, this->z*s);
}

float cml::Vector3::operator*(const Vector3& v)const{
    return x*v.x+y*v.y+z*v.z;
}

float cml::Vector3::dot(const Vector3& v) const{
    return x*v.x+y*v.y+z*v.z;
}

void cml::Vector3::operator*=(const float s){
    this->x *= s;
    this->y *= s;
    this->z *= s;
}

cml::Vector3 cml::Vector3::operator/(const float s)const{
    return Vector3(this->x/s, this->y/s, this->z/s);
}

void cml::Vector3::operator/=(const float s){
    this->x /= s;
    this->y /= s;
    this->z /= s;
}

cml::Vector3 cml::Vector3::operator%(const Vector3& v)const{
    return Vector3 (y*v.z-z*v.y,
                    z*v.x-x*v.z,
                    x*v.y-y*v.x);
}

void cml::Vector3::operator%=(const Vector3& v){
    *this=cross(v);
}

cml::Vector3 cml::Vector3::cross(const Vector3& v)const{
    return Vector3 (y*v.z-z*v.y,
                    z*v.x-x*v.z,
                    x*v.y-y*v.x);
}

cml::Vector3 cml::Vector3::operator=(const Vector3& v){
    this->x = v.x;
    this->y = v.y;
    this->z = v.z;

    return *this;
}