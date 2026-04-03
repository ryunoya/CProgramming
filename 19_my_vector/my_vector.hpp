#ifndef MY_VECTOR_HPP
#define MY_VECTOR_HPP

class my_vector {
public:
// constructor
    MyVector(int capacity = 10);

// copy constructor
    MyVector(const MyVector& other);

// destructor
    ~MyVector();

    void print() const; // print elements of the vector
    void push_back(int value); // add an element to the end of the vector
    int pop_back(); // remove the last element from the vector and return it
    void clear(); // remove all elements from the vector
    void push_front(int value); // add an element to the front of the vector
    void insert(int index, int value); // insert an element at the specified index

    int getSize() const; // return the current size of the vector
    bool empty() const; // return true if the vector is empty, false otherwise
    int getCapacity() const; // return the current capacity of the vector
    int& at(int index) const; // return the element at the specified index
    //TODO: implement the following functions
    int thirdMax() const; // return the third largest element in the vector
        // if there is no third max, return max

    
private:
    int* elements;      // array of elements 
    int size;           // current number of elements
    int capacity;       // max number of elements vector can hold 

    bool full() const; // helper function to check if the vector is full
    void allocateMemory(int memory_size); // helper function to allocate memory
};

#endif 