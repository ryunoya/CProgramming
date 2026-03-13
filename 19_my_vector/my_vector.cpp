
#include "my_vector.hpp"
#include <iostream>

my_vector::MyVector(int capacity) {
    this->capacity = capacity;
    size = 0;
    elements = new int[capacity];
}

// Copy constructor
my_vector::MyVector(const my_vector& other) {
    this->capacity = other.capacity;
    this->size = other.size;
    this->elements = new int[capacity];
    for(int i = 0; i < size; i++) {
        elements[i] = other.elements[i];
    }
}

my_vector::~MyVector() {
    delete [] elements;
}

void my_vector::print() const {
    std::cout << "[ ";
    for (int i = 0; i < size; i++) {
        std::cout << elements[i] << ' ';
    }
    std::cout << "]\n";
}

void my_vector::push_back(int val) {
// TODO consider the case when the vector is full
    if (full()) {
        allocateMemory(capacity * 2);
        // Handle the case when the vector is full
    }
    elements[size] = val;
    size++;
}
bool MyVector::empty() const {
    return size == 0;
}

bool MyVector::full() const {
    return size == capacity;
}

void MyVector::allocateMemory(int memory_size) {
    capacity = memory_size;
    // Save the old address of the array
    int* old_array = elements;
    // Allocate new memory
    elements = new int[capacity];

    // Copy the elements
    for (int i = 0; i < size; i++) {
        elements[i] = old_array[i];
    };
    delete [] old_array;
}

int MyVector::pop_back() {
    if (!empty()) {
        if (size < capacity / 2) {
            allocateMemory(capacity / 2);
        }
        return elements[--size];
    }
    else {
        throw "Empty vector";
    }
}

int MyVector::getCapacity() const {
    return capacity;
}

int& MyVector::at(int index) const {
    if (index < 0 || index >= size) {
        throw "At: out of boundaries\n";
    }
    else {
        return elements[index];
    }
}

int MyVector::getSize() const {
    return size;
}

void MyVector::clear() {
    size = 0;
}
void push_front(int value) {
    if (full()) {
        allocateMemory(capacity * 2);
    }
    for (int i = size; i > 0; i--) {
        elements[i] = elements[i - 1];
    }
    elements[0] = value;
    size++;
}