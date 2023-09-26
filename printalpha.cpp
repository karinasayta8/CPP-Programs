#include <iostream>

int main() {
    int rows = 5; // Number of rows

    for (int i = 1; i <= rows; i++) {
        char currentChar = 'A'; // Start with 'A'
        for (int j = 1; j <= i; j++) {
            std::cout << currentChar << " ";
            currentChar++; // Increment the character for the next column
        }
        std::cout << std::endl;
    }

    return 0;
}
