#ifndef CML_CONSTANTS_HPP
#define CML_CONSTANTS_HPP


#include "./vector2d.hpp"
#include "./vector3d.hpp"
#include "./matrix.hpp"


namespace cml{

    //21 digits of pi (20 after decimal point)
    static constexpr double pi = 3.14159265358979323846f;
    //multiplication value to convert degrees to radians
    static constexpr double degreesToRadians = pi / 180.0f;
    //multiplication value to convert radians to degrees
    static constexpr double radiansToDegrees = 180.0f / pi;

    //2D vector of zeros
    static const cml::Vector2 zeros2f(0.0f, 0.0f);
    //2D vector of ones
    static const cml::Vector2 ones2f(1.0f, 1.0f);
    //2D unit vector pointing along the X-axis
    static const cml::Vector2 axisX2f(1.0f, 0.0f);
    //2D unit vector pointing along the Y-axis
    static const cml::Vector2 axisY2f(0.0f, 1.0f);

    // 3D vector of zeros
    static const cml::Vector3 zeros3f(0.0f, 0.0f, 0.0f);
    // 3D vector of ones
    static const cml::Vector3 ones3f(0.0f, 0.0f, 0.0f);
    //3D unit vector pointing along the X-axis
    static const cml::Vector3 axisX3f(1.0f, 0.0f, 0.0f);
    //3D unit vector pointing along the Y-axis
    static const cml::Vector3 axisY3f(0.0f, 1.0f, 0.0f);
    //3D unit vector pointing along the Z-axis
    static const cml::Vector3 axisZ3f(0.0f, 0.0f, 1.0f);

    //Empty 2D Matrix
    static const cml::Matrix eMatrix2D(2, 2);
    //Empty 3D Matrix
    static const cml::Matrix eMatrix3D(3, 3);
    //Empty 4D Matrix
    static const cml::Matrix eMatrix4D(4, 4);

};//namespace cml


#endif //CML_CONSTANTS_HPP