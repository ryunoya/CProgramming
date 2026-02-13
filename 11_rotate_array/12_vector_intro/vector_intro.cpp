#include <iostream>
#include <vector>

void print(const std::vector<int>& v); // pass a reference to a vector


int main(void) {
    //create a vector
    std::vector<int> v; // empty vector

    // create and initialize
    std::vector<int> v2 = {1, 2, 3, 4, 5, 6}; // vector with 5 elements
    print(v2);

    // provide the size and default value
    std::vector<int> v3(5, 10); // vector with 5
    print(v3);
    
    // copy from another vector
    std::vector<int> v4(v3); // copy constructor
    print(v4);

    // current size (numb. of elements)
    std::cout << "Size: " << v2.size() << std::endl;

    // first and last elements
    std::cout << "first: "<< v2.front() << std::endl; // first element
    std::cout << "last: " << v2.back() << std::endl; // last element

    // add to the end of the vector
    v.push_back(100); // add 100 to the end of the vector
    v.push_back(200); // add 100 to the end of the vector
    print(v);

    // remove from the end
    v2.pop_back(); // remove the last element
    print(v2);

    // begin() -> points to the first element
    // end() -> points to the position after the last element

    std::cout << *v2.begin() << std::endl; // address of the first element
    std::cout << *v2.begin() + 2 << std::endl; // address of the last element

    // insert (location (interator) and value)
    v2.insert(v2.begin() + 1, 900); // insert 900 at index 1
    print(v2);

    // inset 500 between 3 and 4
    v2.insert(v2.begin() + 4, 500); // insert 500
    print(v2);
    return 0;
}

void print(const std::vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}