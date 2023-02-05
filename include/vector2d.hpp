#ifndef CML_VECTOR2D_HPP
#define CML_VECTOR2D_HPP

#include <cmath>
#include <iostream>
#include <set>
#include <tuple>



namespace cml{

    //2D Vector
    class Vector2{
        public:
            double x; //x-component of vector
            double y; //y-component of vector

            //constructor
            Vector2(double uX, double uY):x(uX), y(uY){}

            //overloaded addition operator for Vector2d
            Vector2 operator+(const Vector2& v);
            //overloaded subtraction operator for Vector2d
            Vector2 operator-(const Vector2& v);
            //overloaded << operator for Vector2d
            friend std::ostream& operator<<(std::ostream& os, const Vector2& v){
                os << "[" << v.x << ", " << v.y << "]";
                return os;
            }

            //overloaded = operator for Vector2d
            void operator=(const Vector2& other);
            //overloaded < operator for Vector2d
            friend bool operator<(const Vector2& l, const Vector2& r){
                return std::tie(l.x, l.y)
                    < std::tie(r.x, r.y);
            }
            friend inline bool operator>(const Vector2& lhs, const Vector2& rhs){ return rhs < lhs; }
            friend inline bool operator<=(const Vector2& lhs, const Vector2& rhs) { return !(lhs > rhs); }
            friend inline bool operator>=(const Vector2& lhs, const Vector2& rhs) { return !(lhs < rhs); }


    };//class Vector2;

    // scalar-multiplication for Vector2d
    Vector2 scalar(double sc, Vector2& v);
    // cross-operator for Vector2d
    Vector2 cross(Vector2& a, Vector2& b);
    // dot-operator for Vector2d
    double dot(Vector2& a, Vector2& b);
    // magnitude for Vector2D
    double magnitude(Vector2& v);
    // the angle between a vector and the positive x-axis
    double angle(Vector2& v);
    // unit of vector2d
    Vector2 unit(Vector2& v);
    // computing the projection of `b` onto `a`
    Vector2 projection(Vector2& a, Vector2& b);
    //computing the scalar projection of `b` onto `a`
    double scalar_projection(Vector2& a, Vector2& b);


};//namespace cml


#endif //VECTOR3D_HPP