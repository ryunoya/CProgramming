#include "my_vector.hpp"

int main() {
    // create vector dynamically
    MyVector* vec = new MyVector(10);

    for (int i = 0; i < 10; ++i) {
        vec->push)back((i * i);
    }

    mv -> print();

    delete mv;
    return 0;
}
