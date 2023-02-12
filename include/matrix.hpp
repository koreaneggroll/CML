#ifndef CML_MATRIX_HPP
#define CML_MATRIX_HPP

/*
unsigned `var_name` <=> unsigned int `var_name`

*/


//includes

#include <cstdlib>
#include <stdexcept>


namespace cml{

    //R(ows) and C(olumns)
    template <unsigned R, unsigned C>
    class Matrix{
        private:
            unsigned rows_;
            unsigned cols_;
            double* data_;

        public:
            //constructors
            Matrix(): rows_(R), cols_(C)
            {
                if(R == 0 || C == 0){
                    throw BadIndex("Matrix constructor has 0 size");
                }
                data_ = new double[R * C];
            }

            //subscript operators
            double& operator()(unsigned row, unsigned col){
                if(row >= rows_ || col >= cols_){
                    throw std::out_of_range("Matrix subscript out of bounds at `double& Matrix::operator()`");
                }
                return data_[cols_ * row + col];
            }

            double operator()(unsigned row, unsigned col) const{
                if(row >= rows_ || col >= cols_){
                    throw std::out_of_range("Matrix subscript out of bounds at `double Matrix::operator()`")
                }
                return data_[cols_ * row + col];
            }

            //destructor
            ~Matrix(){
                delete[] data_;
            }
            //copy constructor
            Matrix(const Matrix& m): rows_(m.rows_), cols_(m.cols_)
            {
                data_ = new double[rows_ * cols_];
                for(int i = 0; i < rows_ * cols_; ++i){
                    data_[i] = m.data_[i];
                }
            }
            //assignment operator
            Matrix& operator=(const Matrix& m);






            //other functions
            void fillRandom(void){
                for(int r = 0; r < this->rows_; ++r){
                    for(int c = 0; r < this->cols_; ++c){
                        this(r,c) = (rand() % 100) / 10.0;
                    }
                }
            }


        




    };//class Matrix


}; //namespace cml


#endif //MATRIX_HPP