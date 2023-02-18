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
            float x; //x-component of vector
            float y; //y-component of vector
	    
            //default constructor
            Vector2();
            
            //constructor
            Vector2(float uX, float uY);

            //destructor
            ~Vector2();

            //overloaded addition operator for Vector2d
            Vector2 operator+(const Vector2& v)const;
            void operator+=(const Vector2& v);
            //overloaded subtraction operator for Vector2d
            Vector2 operator-(const Vector2& v)const;
            void operator-=(const Vector2& v);
            //overloaded multiplication operator for Vector2d using scalar function
            Vector2 operator*(const float s) const;
            float operator*(const Vector2& v)const;
            float dot(const Vector2& v)const;
            void operator*=(const float s);
            //overloaded division operator for Vector2d
            Vector2 operator/(const float s) const;
            void operator/=(const float s);
            //% operator overloaded as cross product
            Vector2 operator%(const Vector2& v)const;
            void operator%=(const Vector2& v);
            Vector2 cross(const Vector2& v)const;
            //overloaded << operator for Vector2d
            friend std::ostream& operator<<(std::ostream& os, const Vector2& v){
                os << "[" << v.x << ", " << v.y << "]";
                return os;
            }

            //overloaded = operator for Vector2d
            Vector2& operator=(const Vector2& other);
            //overloaded < operator for Vector2d
            friend bool operator<(const Vector2& l, const Vector2& r){
                return std::tie(l.x, l.y)
                    < std::tie(r.x, r.y);
            }
            friend inline bool operator>(const Vector2& lhs, const Vector2& rhs){ return rhs < lhs; }
            friend inline bool operator<=(const Vector2& lhs, const Vector2& rhs) { return !(lhs > rhs); }
            friend inline bool operator>=(const Vector2& lhs, const Vector2& rhs) { return !(lhs < rhs); }
            //other functions

            //swaps the values of the vector
            void swap();

    };//class Vector2;

    //scalar multiplication for a vector
    Vector2 scalar(float sc, Vector2& v);
    // cross-operator for Vector2d
    Vector2 cross(Vector2& a, Vector2& b);
    // dot-operator for Vector2d
    float dot(Vector2& a, Vector2& b);
    // magnitude for Vector2D
    float magnitude(Vector2& v);
    // the angle between a vector and the positive x-axis
    float angle(Vector2& v);
    // unit of vector2d
    Vector2 unit(Vector2& v);
    // computing the projection of `b` onto `a`
    Vector2 projection(Vector2& a, Vector2& b);
    //computing the scalar projection of `b` onto `a`
    float scalar_projection(Vector2& a, Vector2& b);


};//namespace cml


#endif //VECTOR3D_HPP
