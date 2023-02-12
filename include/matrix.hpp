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
            Matrix sum(const Matrix &m2);
            Matrix &operator=(const Matrix& m2); //assignment operator overloading
            Matrix operator+(const Matrix& m2); //sum operator overloading
            friend std::ostream& operator<<(std::ostream& out, const Matrix& m){
                if(out){
                    out << std::fixed << std::setprecision(1);
                    for(unsigned r = 0; r < m.rows_; ++r){
                        for(unsigned c = 0; c < m.cols_; ++c){
                            out << (c > 0 ? " " : "") << std::setw(4);
                            out << m(r, c);
                        }
                        out << "\n";
                    }
                }

                return out;
            } //output stream operator overloading

            //fillRandom function
            void fillRandom(void);
            //setters
            //v = value, r = row, c = column
            void setValueAt(double v, unsigned r, unsigned c);
            //getters
            unsigned rows(void) {   return this->rows_;   }
            unsigned cols(void) {   return this->cols_;   }
    };//class Matrix


    void setIdentity(Matrix& matrix);


}; //namespace cml


#endif //MATRIX_HPP