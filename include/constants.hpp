#ifndef CML_CONSTANTS_HPP
#define CML_CONSTANTS_HPP


#include "./vector2d.hpp"
#include "./vector3d.hpp"


namespace cml{

    //21 digits of pi (20 after decimal point)
    static constexpr float pi = 3.14159265358979323846f;
    //multiplication value to convert degrees to radians
    static constexpr float degreesToRadians = pi / 180.0f;
    //multiplication value to convert radians to degrees
    static constexpr float radiansToDegrees = 180.0f / pi;

    //2D vector of zeros
    static const Vector2 zeros2f(0.0f, 0.0f);
    //2D vector of ones
    static const Vector2 ones2f(1.0f, 1.0f);
    //2D unit vector pointing along the X-axis
    static const Vector2 axisX2f(1.0f, 0.0f);
    //2D unit vector pointing along the Y-axis
    static const Vector2 axisY2f(0.0f, 1.0f);

    // 3D vector of zeros
    static const Vector3 zeros3f(0.0f, 0.0f, 0.0f);
    // 3D vector of ones
    static const Vector3 ones3f(0.0f, 0.0f, 0.0f);
    //3D unit vector pointing along the X-axis
    static const Vector3 axisX3f(1.0f, 0.0f, 0.0f);
    //3D unit vector pointing along the Y-axis
    static const Vector3 axisY3f(0.0f, 1.0f, 0.0f);
    //3D unit vector pointing along the Z-axis
    static const Vector3 axisZ3f(0.0f, 0.0f, 1.0f);

};//namespace cml


#endif //CML_CONSTANTS_HPP