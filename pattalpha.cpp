#include <iostream>

int main() {
    int rows = 4; // Number of rows

    for (int i = rows; i >= 1; i--) {
        char currentChar = 'A'; // Start with 'A'
        for (int j = 1; j <= i; j++) {
            std::cout << currentChar << " ";
            currentChar++; // Increment the character for the next column
        }
        std::cout << std::endl;
    }

    return 0;
}
