#ifndef VECTOR3D_HPP
#define VECTOR3D_HPP

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

            //scalar-multiplication for Vector2d
            Vector2 scalar(float sc, Vector2 v);
            //cross-operator for Vector2d
            Vector2 cross(Vector2 a, Vector2 b);
            //dot-operator for Vector2d
            float dot(Vector2 a, Vector2 b);
            //magnitude for Vector2D
            float magnitude(Vector2 v);
            

    };

    

};


#endif //VECTOR3D_HPP