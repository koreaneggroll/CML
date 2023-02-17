#ifndef CML_ABS_HPP
#define CML_ABS_HPP


extern "C"{
    //abs()
    int cml_my_absi(int x);
    float cml_my_absf(float x);

    //fdim()
    float cml_my_fdim(float x, float y);
}


namespace cml{

    int abs(int x);
    float abs(float x);

    float fdim(float x, float y);

};//namespace cml


#endif //CML_ABS_HPP