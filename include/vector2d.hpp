#ifndef CML_VECTOR3D_HPP
#define CML_VECTOR3D_HPP

#include <cmath>


namespace cml{

    class Vector2{
        public:
            float x; //x-component of vector
            float y; //y-component of vector

            //constructor
            Vector2(float uX, float uY):x(uX), y(uY){}

            //overloaded addition operator for Vector2d
            Vector2 operator+(const Vector2& v){
                return Vector2(x+v.x, y+v.y);
            }

            //overloaded subtraction operator for Vector2d
            Vector2 operator-(const Vector2& v){
                return Vector2(x-v.x, y-v.y);
            }

    };//class Vector2;

    // scalar-multiplication for Vector2d
    Vector2 scalar(float sc, Vector2 v);
    // cross-operator for Vector2d
    Vector2 cross(Vector2 a, Vector2 b);
    // dot-operator for Vector2d
    float dot(Vector2 a, Vector2 b);
    // magnitude for Vector2D
    float magnitude(Vector2 v);
    // the angle between a vector and the positive x-axis
    float angle(Vector2 v);
    // unit of vector2d
    Vector2 unit(Vector2 v);
    // computing the projection of `b` onto `a`
    Vector2 projection(Vector2 a, Vector2 b);
    //computing the scalar projection of `b` onto `a`
    float scalar_projection(Vector2 a, Vector2 b);


};//namespace cml


#endif //VECTOR3D_HPP