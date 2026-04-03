#include "MyVector.hpp"
#include <iostream>

// Template implementation for MyVector<T>

template <typename T>
MyVector<T>::MyVector(int capacity) {
    this->capacity = capacity;
    size = 0;
    elements = new T[capacity];
}

// Copy constructor
template <typename T>
MyVector<T>::MyVector(const MyVector<T>& other) {
    capacity = other.capacity;
    size = other.size;
    elements = new T[capacity];
    for (int i = 0; i < size; i++) {
        elements[i] = other.elements[i];
    }
}

template <typename T>
MyVector<T>::~MyVector() {
    delete [] elements;
}

template <typename T>
void MyVector<T>::print() const {
    std::cout << "[ ";
    for (int i = 0; i < size; i++) {
        std::cout << elements[i] << ' ';
    }
    std::cout << "]\n";
}

template <typename T>
void MyVector<T>::push_back(const T& val) {
    if (full()) {
        allocateMemory(capacity * 2);
    }
    elements[size] = val;
    size++;
}

template <typename T>
bool MyVector<T>::empty() const {
    return size == 0;
}

template <typename T>
bool MyVector<T>::full() const {
    return size == capacity;
}

template <typename T>
void MyVector<T>::allocateMemory(int memory_size) {
    capacity = memory_size;
    T* old_array = elements;
    elements = new T[capacity];
    for (int i = 0; i < size; i++) {
        elements[i] = old_array[i];
    }
    delete [] old_array;
}

template <typename T>
T MyVector<T>::pop_back() {
    if (!empty()) {
        if (size < capacity / 2) {
            allocateMemory(capacity / 2);
        }
        return elements[--size];
    } else {
        throw "Empty vector";
    }
}

template <typename T>
int MyVector<T>::getCapacity() const {
    return capacity;
}

template <typename T>
T& MyVector<T>::at(int index) const {
    if (index < -size || index > size - 1) {
        throw "Invalid index";
    }
    if (index >= 0) {
        return elements[index];
    } else {
        return elements[size + index];
    }
}

template <typename T>
void MyVector<T>::clear() {
    delete [] elements;
    size = 0;
    capacity = 10;
    elements = new T[capacity];
}

template <typename T>
int MyVector<T>::getSize() const {
    return size;
}

template <typename T>
void MyVector<T>::push_front(const T& value) {
    if (size >= capacity) {
        allocateMemory(capacity * 2);
    }
    for (int i = size; i >= 1; i--) {
        elements[i] = elements[i - 1];
    }
    elements[0] = value;
    size++;
}

template <typename T>
void MyVector<T>::insert(int pos, const T& value) {
    if (size == 0 && pos == -1) {
        push_back(value);
        return;
    }
    if (pos < -size || pos > size - 1) {
        throw "Invalid index";
    }
    if (size >= capacity) {
        allocateMemory(capacity * 2);
    }
    if (pos < 0) {
        pos = size + pos;
    }
    for (int i = size; i >= pos; i--) {
        elements[i] = elements[i - 1];
    }
    elements[pos] = value;
    size++;
}