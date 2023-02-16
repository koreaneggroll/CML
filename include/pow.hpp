#ifndef CML_POW_HPP
#define CML_POW_HPP

extern "C"{
    float my_powf(float a, float b);
    float cml_my_exp(float x);
}

namespace cml{

    //`pow` function
    float pow(float a, float b);
    //e^x
    float exp(float x);

};//namespace cml


#endif //CML_POW_HPP