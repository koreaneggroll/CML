#ifndef CML_MATRIX_HPP
#define CML_MATRIX_HPP

/*
unsigned `var_name` <=> unsigned int `var_name`

*/


//includes

#include <cstdlib>
#include <stdexcept>
#include <iomanip>
#include <iostream>
#include <ostream>


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

            // operator overloading
            Matrix &operator=(const Matrix& m); //assignment operator overloading
            Matrix operator+(const Matrix& m); //sum operator overloading

            //fillRandom function
            void fillRandom(void);


            //setters

            //v = value, r = row, c = column
            void setValueAt(double v, unsigned r, unsigned c);
        




    };//class Matrix


}; //namespace cml


#endif //MATRIX_HPP