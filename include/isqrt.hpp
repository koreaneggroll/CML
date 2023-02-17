#ifndef CML_ISQRT_HPP
#define CML_ISQRT_HPP

/*

Returns an approximation of the inverse square root

    1
---------
  sqrt(x)

*/


extern "C"{
    float cml_my_isqrt(float number);
}


namespace cml{
    float isqrt(float number);
};//namespace cml


#endif //CML_ISQRT_HPP