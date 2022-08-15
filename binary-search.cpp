#include <iostream>

int binarySearchIterative(int *arr, const int size, const int num) {
    int low = 0;
    int high = size - 1;
    int pivotIndex = (low + high) / 2;
    int pivot = arr[pivotIndex];
    
    while (low <= high) {
        if (num == pivot) {
            return pivotIndex;
        } else if (num < pivot) {
            high = pivotIndex - 1;
            pivotIndex = (low + high) / 2;
            pivot = arr[pivotIndex];
        } else if (num > pivot) {
            low = pivotIndex + 1;
            pivotIndex = (low + high) / 2;
            pivot = arr[pivotIndex];
        }
    }
    return -1;
}

int binarySearchRecursive(int *arr, int low, int high, const int numToFind) {
    int pivotIndex = (low + high) / 2;
    int pivot = arr[pivotIndex];
    while (low <= high) {
        if (pivot == numToFind) {
            return pivotIndex;
        } else if (pivot < numToFind) {
            return binarySearchRecursive(arr, pivotIndex + 1, high, numToFind);
        } else if (pivot > numToFind) {
            return binarySearchRecursive(arr, low, pivotIndex - 1, numToFind);
        }
    }
    return -1;
}


int main() {
    const int size = 9;
    int array[size] = {0, 4, 8, 9, 12, 21, 33, 45, 87};
    int numToFind = 45;
    std::cout << binarySearchIterative(array, size, numToFind) << std::endl;
    std::cout << binarySearchIterative(array, size, numToFind + 1) << std::endl;
    
    std::cout << binarySearchRecursive(array, 0, size - 1, numToFind - 12) << std::endl;
    std::cout << binarySearchRecursive(array, 0, size - 1, numToFind + 3) << std::endl;
    return 0;
    
}

