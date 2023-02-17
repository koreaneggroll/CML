#ifndef CML_MATH_HPP
#define CML_MATH_HPP


#include "./abs.hpp"
#include "./bin.hpp"
#include "./fma.hpp"
#include "./hypot.hpp"
#include "./isqrt.hpp"
#include "./pow.hpp"
#include "./trig.hpp"
#include "./sqrt.hpp"
#include "./radians_degrees.hpp"

#include <type_traits>

namespace cml{
    template<
    typename T, //real type
    typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
    T max(T a, T b){
        return (a > b ? a : b);
    }

    template<
    typename T, //real type
    typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
    T min(T a, T b){
        return (a > b ? b : a);
    }
};


#endif //CML_MATH_HPP