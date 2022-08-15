#include <iostream>

void swap(int& val1, int& val2) {
    int temp = val1;
    val1 = val2;
    val2 = temp;
}

void bubbleSort(int *array, const int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i  - 1; ++j) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

int main()
{
    const int size = 8;
    int array[size] = {9, 0, 8, 4, 1, 6, 23, 19};
    bubbleSort(array, size);
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << '\n';
	return 0;
	
}

