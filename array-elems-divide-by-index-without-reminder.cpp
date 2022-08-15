#include <iostream>

int arrayElemsDivideByIndexWithoutReminder(int array[], const int size) {
    int count = 1;
    for (int i = 2; i < size; ++i) {
        if (array[i] % i == 0) {
            count += 1;
        }
    }
    return count;
}

int main() {
    const int size = 15;
    int array[size] = {2, 0, 5, 12, 8, 9, 34, 28, 64, 40, 22, 45, 33, 94, 14};
    std::cout << arrayElemsDivideByIndexWithoutReminder(array, size) << std::endl;
    
    return 0;
}
