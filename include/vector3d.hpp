#ifndef CML_VECTOR3D_HPP
#define CML_VECTOR3D_HPP

#include <cmath>
#include <iostream>
#include <set>
#include <tuple>

namespace cml{

    class Vector3{
        public:
            double x; //x-component of vector
            double y; //y-component of vector
            double z; //z-component of vector

            //default constructor
            Vector3();
            //constructor
            Vector3(double uX, double uY, double uZ);
            //copy constructor
            Vector3(const Vector3& v);
            //destructor
            ~Vector3();

            //overloaded addition operator for 3D Vector
            Vector3 operator+(const Vector3& v)const;
            void operator+=(const Vector3& v);
            //overloaded subtraction operator for 3D Vector
            Vector3 operator-(const Vector3& v) const;
            void operator-=(const Vector3& v);
            //overloaded multiplication operator
            Vector3 operator*(const float s) const;
            //dot product operator overloading
            double operator*(const Vector3& v)const;
            double dot(const Vector3& v)const;
            void operator*=(const float s);
            //division operator overloading
            Vector3 operator/(const float s) const;
            void operator/=(const float s);
            //cross product operator overloading
            Vector3 operator%(const Vector3& v)const;
            void operator%=(const Vector3&v);
            Vector3 cross(const Vector3& v)const;

            //overloaded << operator for 3D Vector
            friend std::ostream& operator<<(std::ostream& os, const Vector3& v){
                os << "[" << v.x << ", " << v.y << ", " << v.z << "]";
                return os;
            }

            //overloaded = operator for 3D Vector
            Vector3 operator=(const Vector3& v);
            //overloaded < operator for 3D Vector
            friend bool operator<(const Vector3& l, const Vector3& r){
                return std::tie(l.x, l.y, l.z)
                    < std::tie(r.x, r.y, r.z);
            }
            friend inline bool operator>(const Vector3& lhs, const Vector3& rhs){ return rhs < lhs; }
            friend inline bool operator<=(const Vector3& lhs, const Vector3& rhs) { return !(lhs > rhs); }
            friend inline bool operator>=(const Vector3& lhs, const Vector3& rhs) { return !(lhs < rhs); }
            

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