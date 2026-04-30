#ifndef MATRIX_HPP
#define MATRIX_HPP
#include "matrix.cpp"

template <typename T>
class Matrix {
public:
    Matrix(int r = 1, int c = 1);
    ~Matrix();

    Matrix (const Matric<T>& other)

    Matrix<T>& operator=(const Matrix<T>& other);
    Matrix<T>& operator=(const Matrix<T>& other);


    static Matrix<T> load(const char* filename);
// doesnt modify any data member in the class (static)
    void print () const;

private:
    T** data;
    int rows, cols;
};


#endif 
