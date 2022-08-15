#include <iostream>

bool ifNumberIsPowerOfTwo(int number) {
    while (number != 1) {
        if (number % 2 != 0) {
            return false;
        }
        number /= 2;
    }    
    return true;
}

int main()
{
    std::cout << ifNumberIsPowerOfTwo(32) << std::endl;
    std::cout << ifNumberIsPowerOfTwo(69) << std::endl;
    return 0;
	
}
