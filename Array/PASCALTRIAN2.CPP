// Variation 2: Given the row number n. Print the n-th row of Pascal’s triangle.
#include <iostream>
using namespace std;

// Function to calculate nCr (Combination)
int NCR(int N, int R) {
    int res = 1;
    for (int i = 0; i < R; i++) {
        res = res * (N - i);
        res = res / (i + 1);
    }
    return res;
}

int main() {
    int n;
    cout << "Enter the row number (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid row number. Please enter a positive integer." << endl;
        return 1;
    }

    cout << "The " << n << "-th row of Pascal's Triangle: ";
    for (int k = 0; k < n; k++) {
        cout << NCR(n - 1, k) << " "; // Calculate and print each element
    }
    cout << endl;

    return 0;
}