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
    class Matrix{
        private:
            const unsigned rows_;
            const unsigned cols_;
            double* data_;

        public:
            //constructors
            Matrix(unsigned rows, unsigned cols);

            //subscript operators
            double& operator()(unsigned row, unsigned col);
            double operator()(unsigned row, unsigned col) const;

            //destructor
            ~Matrix();
            //copy constructor
            Matrix(const Matrix& m);
            //assignment operator
            Matrix& operator=(const Matrix& m);


            //setters

            //v = value, r = row, c = column
            void setValueAt(double v, unsigned r, unsigned c);
        




    };//class Matrix


}; //namespace cml


#endif //MATRIX_HPP