#ifndef CML_ABS_HPP
#define CML_ABS_HPP


extern "C"{
    int cml_my_absi(int x);
    float cml_my_absf(float x);
}


namespace cml{

    int abs(int x);
    float abs(float x);

};//namespace cml


#endif //CML_ABS_HPP