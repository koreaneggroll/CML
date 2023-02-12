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
            Matrix &operator=(const Matrix& m2); //assignment operator overloading
            Matrix operator+(const Matrix& m2); //sum operator overloading
            friend std::ostream& operator<<(std::ostream& out, const Matrix& m); //output stream operator overloading


            //fillRandom function
            void fillRandom(void);
            //setters
            //v = value, r = row, c = column
            void setValueAt(double v, unsigned r, unsigned c);


            Matrix sum(const Matrix& m2);
        




    };//class Matrix


}; //namespace cml


#endif //MATRIX_HPP