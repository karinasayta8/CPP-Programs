#include <iostream>

int main() {
    int rows = 6; // Number of rows

    for (int i = 1; i <= rows; i++) {
        int currentNumber = 10; // Start with 10
        for (int j = 1; j <= i; j++) {
            std::cout << currentNumber << " ";
            currentNumber++; // Increment the number for the next column
        }
        std::cout << std::endl;
    }

    return 0;
}
