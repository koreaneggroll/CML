#include "../include/vector2d.hpp"


cml::Vector2::Vector2(): x(0.0f), y(0.0f){}
cml::Vector2::Vector2(double uX, double uY): x(uX), y(uY){}
cml::Vector2::~Vector2(){}



cml::Vector2 cml::scalar(double sc, Vector2& v){
    return Vector2(v.x*sc, v.y*sc);
}

// cml::Vector2 cml::Vector2::scalar(double sc){
//     return Vector2(this->x*sc, this->y*sc);
// }

// cml::Vector2 cml::Vector2::scalar(const float sc){
//     return Vector2(this->x*sc, this->y*sc);
// }

// cml::Vector2 cml::Vector2::scalar(int sc){
//     return Vector2(this->x*sc, this->y*sc);
// }

cml::Vector2 cml::cross(Vector2& a, Vector2& b){
    return Vector2(a.x * b.y, b.x * a.y);
}

double cml::dot(Vector2& a, Vector2& b){
    return a.x * b.x + a.y * b.y;
}

double cml::magnitude(Vector2& v){
    return sqrt(pow(v.x, 2) + pow(v.y, 2));
}

double cml::angle(Vector2& v){
    //arc tangent
    return atan(v.y/v.x);
}

cml::Vector2 cml::unit(Vector2& v){
    //assigned to a variable to only be computed once
    double vMagnitude = magnitude(v);
    return Vector2(v.x/vMagnitude, v.y/vMagnitude);
}

cml::Vector2 cml::projection(Vector2& a, Vector2& b){
    Vector2 result = scalar(dot(b, a)/pow(magnitude(a), 2), a);
    return result;
}

double cml::scalar_projection(Vector2& a, Vector2& b){
    return dot(b, a)/magnitude(a);
}


//overloading operators

// overloaded addition operator for Vector2d
cml::Vector2 cml::Vector2::operator+(const Vector2 &v)const{
    return Vector2(x + v.x, y + v.y);
}


void cml::Vector2::operator+=(const Vector2& v){
    this->x += v.x;
    this->y += v.y;
}

void cml::Vector2::operator-=(const Vector2& v){
    this->x -= v.x;
    this->y -= v.y;
}

// overloaded subtraction operator for Vector2d
cml::Vector2 cml::Vector2::operator-(const Vector2 &v)const{
    return Vector2(x - v.x, y - v.y);
}


cml::Vector2 cml::Vector2::operator*(const float s)const{
    return Vector2(this->x*s, this->y*s);
}

double cml::Vector2::operator*(const Vector2& v)const{
    return x*v.x+y*v.y;
}

double cml::Vector2::dot(const Vector2& v)const{
    return x*v.x+y*v.y;
}

void cml::Vector2::operator*=(const float s){
    this->x *= s;
    this->y *= s;
}


cml::Vector2 cml::Vector2::operator/(const float s)const{
    return Vector2(this->x/s, this->y/s);
}

void cml::Vector2::operator/=(const float s){
    this->x /= s;
    this->y /= s;
}

// cml::Vector2 cml::Vector2::operator%(const Vector2& v)const{
//     return Vector2(y*v.z-z*v.y,
//                        z*v.x-x*v.z,
//                        x*v.y-y*v.x);
// }

// void cml::Vector2::operator%=(const Vector2& v){

// }

// cml::Vector2 cml::Vector2::cross(const Vector2& v)const{

// }

cml::Vector2& cml::Vector2::operator=(const Vector2 &other){
    this->x = other.x;
    this->y = other.y;

    return *this;
}



//other functions

//swaps the values of the vector
void cml::Vector2::swap(){
    double temp = this->x;
    this->x = this->y;
    this->y = temp;
}
