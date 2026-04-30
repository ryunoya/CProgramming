#include "matrix.hpp"
#include <iostream>
#include <stdexcept>
#include <iomanip>

int main(void) {
    int r, c;

    std::cout << "Enter rows and columns: "
    std::cin >> r >> c;

    try {
        Matrix(r, c).print();
    }
    catch (const std::logic_error& ex) {
        std::cout << ex.what() << std::endl;
    }

    try {
        Matrix<int> mat = Matrix<int>::load("input.txt")
        mat.print();
    }
    catch (const std::exception& ex) {
        std::cout << 
    }

    return 0;
}