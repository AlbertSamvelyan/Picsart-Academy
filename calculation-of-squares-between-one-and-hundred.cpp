#include <iostream>

/* Function to calculate difference between the square of the sum of the numbers from 1 to 100
add the sum of squares of the same numbers. 
*/
int func()
{
    int sumOfNumbers = (1 + 100) * 100 / 2;
    int squareOfSum = sumOfNumbers * sumOfNumbers;
    int sumOfSquares = (100 * (100 + 1) * (2 * 100 + 1)) / 6;
    return squareOfSum - sumOfSquares;
}


int main() {
    
    std::cout << func() << std::endl;
    
    return 0;
}
