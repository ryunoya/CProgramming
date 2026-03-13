#include <iostream>

void printArr(int* arr, int size);
int* doubleArr(int* arr, int size);
int* doubleNewArr(const int* arr, int size);

int main(void) {
    const int SIZE = 5;
    int arr[SIZE] = {1, 2, 3, 4, 5};
    printArr(arr, SIZE);
    doubleArr(arr, SIZE);
    printArr(arr, SIZE);


    int* new_arr = doubleNewArr(arr, SIZE);
    printArr(new_arr, SIZE);
    for (int i = 0; i < 999999; i++) {
        double* p = new double [9999999]; // memory leak
        delete [] p; // free allocated memory
    }
    return 0;
}

void printArr(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

int* doubleArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
    return arr;
}

int* doubleNewArr(const int* arr, int size) {
//    int new_arr[size]; // local array (doesn't work)
   
    int* new_arr = new int[size]; // dynamic array
    for (int i = 0; i < size; i++) {
        new_arr[i] = arr[i] * 2;
    }
    return new_arr;
}
