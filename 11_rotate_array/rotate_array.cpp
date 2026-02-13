#include <iostream>

// function prototype
void rotateRight(const int src[], int dest[], int size, int k); /// k is the number of rotations


int main(void) {
    cont int size = 7;
    int list[size] = {1, 2, 3, 4, 5, 6, 7};
    int new_list[size];
    rotateRight(list, new_list, size, 1); // rotate right by 3 positions
    for (int i = 0; i < size; i++) {
        std::cout << new_list[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < size; i++) {
        std::cout << new_list[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
void rotateRight(const int src[], int dest[], int size, int k); /// k is the number of rotations
    int new_first = size - (k % size); // calculate the index of the new first element after rotation

    int j = new_first; // start copying from the new first element
    int i = 0;
    while (j < size) {
        dest[i] = src[j]; // copy elements from new first to the end
        i++;
        j++;
    }

    // copy from beginning till new first
    j = 0;
    while (j < new_first) {
        dest[i] = src[j]; // copy elements from the beginning to the new first
        i++;
        j++;
    }