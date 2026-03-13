#include <iostream>
#include <string>

class Hello {
public:
    // No arg constructor
    Hello() : size(0), messages(nullptr) {
        std::cout << "No arg constructor for " << this << std::endl;
    }

    // Constructor with arguments
    Hello(int n) : size(n) {
        std::cout << "Argument constructor for " << this << std::endl;
        messages = new std::string[size];
        // Initialize a dynamic array
        for (int i = 0; i < size; i++) {
            messages[i] = (i % 2) ? "Welcome!" : "Not welcome!";
        }
    }

    // copy constructor
    Hello(const Hello& other) {
        std::cout << "copy constructor for " << this << std::endl;

        size = other.size;
        // allocate the memory for the new array
        messages = new std::string[size];
        // copy the values 
        for (int i = 0; i < size; i++) {
            messages[i] = other.messages[i];
        }

    }

    // Destructor
    ~Hello() {
        std::cout << "Destructor for " << this << std::endl;
        if (messages) {
            delete [] messages;
        }
    }

    void bye() const {
        std::cout << "Bye!!!\n";
    }
private:
    std::string* messages;
    int size;
};

int main(void) {
    // Create Hello object dynamically
    Hello* hi = new Hello;

    // Call bye method
    hi->bye();

    // Create an object with argument constructor
    Hello* hi2 = new Hello(10);

    // Deallocate the memory
    delete hi;
    delete hi2;

    // for (int i = 0; i < 100; i++) {
    // Hello(9999999);
    // }

    Hello hi3(20);
    Hello hi4 = hi3;

    return 0;
}