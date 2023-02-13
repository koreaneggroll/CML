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
            const unsigned rows_; //no. of rows in the matrix
            const unsigned cols_; //no. of columns in the matrix
            double* data_; //data stored in a 1D array

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
	    //used in in the sum operator overloading
            Matrix sum(const Matrix &m2);
	    //used in the multiplication operator overloading
            Matrix mult(const Matrix& m2);
            Matrix &operator=(const Matrix& m2); //assignment operator overloading
            Matrix operator+(const Matrix& m2); //sum operator overloading
            Matrix operator*(const Matrix& m2);
	    //output operator overloading
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


            //fills the matrix with random numbers
            void fillRandom(void);
	    //fills the matrix with a single value
            void fill(double val);
            
	    
	    //setters
            //v = value, r = row, c = column
	    //sets a value at a specified row and  column
            void setValueAt(double v, unsigned r, unsigned c);
            //getters
	    //returns the number of rows
            unsigned rows(void);
	    //returns the number of cols
            unsigned cols(void);   
    };//class Matrix

    //gives the matrix an identity
    void setIdentity(Matrix& matrix);


}; //namespace cml


#endif //MATRIX_HPP
