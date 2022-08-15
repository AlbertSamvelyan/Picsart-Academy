#include <iostream>

int sumOfDigitsInNumber(int number) {
    int sum = 0;
    while (number != 0) {
        sum += (number % 10);
        number /= 10;
    }
    return sum;
}

int main() {
    std::cout << sumOfDigitsInNumber(534729) << std::endl;
    
    return 0;
}
