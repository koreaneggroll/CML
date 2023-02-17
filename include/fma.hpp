#ifndef CML_FMA_HPP
#define CML_FMA_HPP


/*
Returns x * y + z
*/

extern "C"{
    float cml_my_fma(float x, float y, float z);
}


namespace cml{
    float fma(float x, float y, float z);
};


#endif //CML_FMA_HPP