#include "../include/matrix.hpp"

cml::Matrix::Matrix(unsigned rows, unsigned cols) : rows_(rows), cols_(cols){
    if (rows == 0 || cols == 0)
    {
        // throws a std::logic_error if the matrix has 0 size
        throw std::logic_error("Matrix constructor has 0 size");
    }
    data_ = new double[rows * cols];
}

cml::Matrix::Matrix(const Matrix &m) : rows_(m.rows_), cols_(m.cols_){
    data_ = new double[rows_ * cols_];
    for (int i = 0; i < rows_ * cols_; ++i){
        data_[i] = m.data_[i];
    }
}

cml::Matrix::~Matrix(){
    delete[] data_;
}



double& cml::Matrix::operator()(unsigned row, unsigned col){
    if (row >= rows_ || col >= cols_){
        throw std::out_of_range("Matrix subscript out of bounds at `double& Matrix::operator()`");
    }
    return data_[cols_ * row + col];
}

double cml::Matrix::operator()(unsigned row, unsigned col) const {
    if (row >= rows_ || col >= cols_){
        throw std::out_of_range("Matrix subscript out of bounds at `double Matrix::operator()`");
    }
    return data_[cols_ * row + col];

}


void cml::Matrix::fillRandom(void){
    for(unsigned r = 0; r < rows_; ++r){
        for(unsigned c = 0; c < cols_; ++c){
            //accesses the value at row `r` and column `c` and sets it to a random value
            (*this)(r, c) = (rand() % 100) / 10.0;
        }
    }
}


//setters

void cml::Matrix::setValueAt(double v, unsigned r, unsigned c){
    if(r >= this->rows_ || c >= this->cols_){
        throw std::out_of_range("Matrix subscript out of bounds at `void Matrix::setValueAt()`");
    }
    //accesses the value at row `r` and column `c` and sets it to `v`
    (*this)(r, c) = v;
}




cml::Matrix cml::Matrix::sum(const Matrix& m2){
    if(this->rows_ != m2.rows_ || this->cols_ != m2.cols_){
        throw std::invalid_argument("Matrix dimensions do not match at `Matrix Matrix::sum()`");
    }
    Matrix ret(rows_, cols_);
    
    for(unsigned i = 0; i < rows_ * cols_; ++i){
        ret.data_[i] = data_[i] + m2.data_[i];
    }

    return ret;
}


cml::Matrix& cml::Matrix::operator=(const Matrix& m2){
    if(this == &m2){
        throw std::logic_error("Matrix cannot overwrite itself");
    }
    if(rows_ != m2.rows_ || cols_ != m2.cols_){
        throw std::out_of_range("Cannot assign matrix with different dimensions");
    }

    for(unsigned i = 0; i < rows_ * cols_; ++i){
        data_[i] = m2.data_[i];
    }

    return *this;

}


cml::Matrix cml::Matrix::operator+(const Matrix& m2){
    return sum(m2);
}