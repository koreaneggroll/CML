#ifndef CML_POW_HPP
#define CML_POW_HPP

extern "C"{
    float my_powf(float a, float b);

    float cml_my_expf(float x);

    float cml_my_exp2f(float x);

    float cml_my_expm1(float x);
}

namespace cml{

    //`pow` function
    float pow(float a, float b);
    //e^x
    float exp(float x);
    //2^x
    float exp2(float x);
    //e^x - 1
    float expm1(float x);

};//namespace cml


#endif //CML_POW_HPP