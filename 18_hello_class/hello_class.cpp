#include <iostream>

class Hello {
public:

    Hello() {
        std::cout << "no arg constructor for " << this << std::endl;
    }
    void bye() {
        std::cout << "bye\n" << this << std::endl;
    }
private:

};

int main(void) {

    // create and object of Hello class dynamically
    Hello* hi = new Hello();

    // call bye for hi object
    hi->bye();

    // deallocate the memory
    delete hi;

    return 0;
}