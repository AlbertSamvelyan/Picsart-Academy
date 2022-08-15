#include <iostream>

int diffOfDigitsMulAndSumInNumber(int number) {
    int sum = 0;
    int mul = 1;
    while (number != 0) {
        sum += (number % 10);
        mul *= (number % 10);
        number /= 10;
    }
    return mul - sum;
}

int main() {
    std::cout << diffOfDigitsMulAndSumInNumber(534729) << std::endl;
    
    return 0;
}
