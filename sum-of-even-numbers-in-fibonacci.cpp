#include <iostream>

int main() {
    int first = 1;
    int second = 2;
    int val = first + second;
    int sumOfEvens = second;
    while(val <= 4000000) {
        first = second;
        second = val;
        val = first + second;
        if (second % 2 == 0) {
            sumOfEvens += second;
        }
    }
    std::cout << sumOfEvens << std::endl;
    return 0;
}
