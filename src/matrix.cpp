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


//setters

void cml::Matrix::setValueAt(double v, unsigned r, unsigned c){
    if(r >= this->rows_ || c >= this->cols_){
        throw std::out_of_range("Matrix subscript out of bounds at `void Matrix::setValueAt()`");
    }
    (*this)(r, c) = v;
}