#include <iostream>

int oddNumbersQuantityInRange(int low, int high) {
   int elemsInRange = high - low + 1;
   if (low % 2 != 0 && high % 2 != 0) {
       return elemsInRange / 2 + 1;
   }
   return elemsInRange / 2;
}

int main() {
    std::cout << oddNumbersQuantityInRange(14, 32) << std::endl;
    
    return 0;
}
