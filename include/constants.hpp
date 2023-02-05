#ifndef CML_CONSTANTS_HPP
#define CML_CONSTANTS_HPP


#include "./vector2d.hpp"


namespace cml{

    static constexpr float pi = 3.14159265358979323846f;
    static constexpr float degreesToRadians = pi / 180.0f;
    static constexpr float radiansToDegrees = 180.0f / pi;

    static const Vector2 zeros2f(0.0f, 0.0f);
    static const Vector2 ones2f(1.0f, 1.0f);
    static const Vector2 axisXf(1.0f, 0.0f);
    static const Vector2 axisYf(0.0f, 1.0f);

};//namespace cml


#endif //CML_CONSTANTS_HPP