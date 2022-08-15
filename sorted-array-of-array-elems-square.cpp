#include <iostream>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void sortedArrayOfArrayElemsSquares(int *arr, int *destArray, const int size) {
    destArray[0] = arr[0] * arr[0];
    for (int i = 1; i < size; ++i) {
        destArray[i] = arr[i] * arr[i];
        for (int j = i; j > 0; --j) {
            if (destArray[j] < destArray[j - 1]) {
                swap(destArray[j], destArray[j - 1]);
            }
        }
    }
}

int main() {
    const int size = 9;
    int array[size] = {8, 3, 12, 9, 24, 13, 6, 1, 10};
    int destArray[size];
    sortedArrayOfArrayElemsSquares(array, destArray, size);
    for (int i = 0; i < size; ++i) {
        std::cout << destArray[i] << " ";
    }
    std::cout << '\n';
    return 0;
    
}

