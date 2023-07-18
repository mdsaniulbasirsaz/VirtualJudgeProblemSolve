#include <iostream>

// Function to count the number of 1s in the binary representation of a number
int countOnes(int num) {
    int count = 0;
    while (num > 0) {
        if (num & 1) {
            count++;
        }
        num >>= 1;
    }
    return count;
}

int main() {
    int input;
    std::cin >> input;

    int smallest = 1;
    int inputCount = countOnes(input);
    while (countOnes(smallest) != inputCount) {
        smallest++;
    }

    std::cout <<smallest << std::endl;

    return 0;
}
