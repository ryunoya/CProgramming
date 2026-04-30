#include "matrix.hpp"
#include <stdexcept>
#include <iostream>

template <typename T>
Matrix<T>::Matrix(int r = 1, int c = 1) : rows(r), cols(c) {
    if (rows < 1 || cols < 1) {
        rows = 0;
        cols = 0;
        //throw error
        throw std::logic_error("Rows and columns should be positive!")
    }
    //if that isnt true, allocate 
    data = new T*[rows]; //create and array of pointers to T
    // for each pointer allocate an array of T's
    for (int i = 0; i < rows; i++) {
        data[i] = new T[cols];
    }

    // initialize the array
     for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            data[i][j] = T(); // T() - default template value
        }
     }
}

template <typename T>
void Matrix<T>::print() const {
     for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << std::left << stdsetw(6) << data[i][j];
        }
        std::cout < '\n'
     }
}

template <typename T>
Matrix<T> Matrix<T>::load(const char* filename) {
    std::ifstream in(filename);
    if(!in) {
        throw std::invalid_argument("Cannot open the fileto load!")
    }

    int r, c;
    in >> r >> c;
    Matrix m(r, c);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j , cols; j++) {
            in >> m.data[i][j];
        }
    }
    
    //close file stream
    in.close();

    return m;
}
