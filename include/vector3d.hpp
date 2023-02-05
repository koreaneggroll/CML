#ifndef CML_VECTOR3D_HPP
#define CML_VECTOR3D_HPP

#include <cmath>

namespace cml{

    class Vector3{
        public:
            double x; //x-component of vector
            double y; //y-component of vector
            double z; //z-component of vector

            //constructor
            Vector3(double uX, double uY, double uZ): x(uX), y(uY), z(uZ){}

            //overloaded addition operator for 3D Vector
            Vector3 operator+(const Vector3& v){
                return Vector3(x+v.x, y+v.y, z+v.z);
            }

            //overloaded subtraction operator for 3D Vector
            Vector3 operator-(const Vector3& v){
                return Vector3(x-v.x, y-v.y, z-v.z);
            }
            

    }; //class Vector3

    // scalar-multiplication for Vector3d
    Vector3 scalar(double sc, Vector3 &v);
    // cross-operator for Vector3d
    Vector3 cross(Vector3 &a, Vector3 &b);
    // dot-operator for Vector3d
    double dot(Vector3 &a, Vector3 &b);
    // magnitude for Vector3D
    double magnitude(Vector3 &v);
    // the angle between 2 vectors
    double angle(Vector3 &a, Vector3& b);
    // unit of Vector3d
    Vector3 unit(Vector3 &v);
    // computing the projection of `b` onto `a`
    Vector3 projection(Vector3 &a, Vector3 &b);
    // computing the scalar projection of `b` onto `a`
    double scalar_projection(Vector3 &a, Vector3 &b);

};//namespace cml


#endif //CML_VECTOR3D_HPP