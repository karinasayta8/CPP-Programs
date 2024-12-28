// Variation 1: Given row number r and column number c. Print the element at position (r, c) in Pascal’s triangle.
// pascal triangle
//            1
//        1        1
//   1       2        1
//1       3         3      1
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
    int r, c;
    cout << "Enter row number (r): ";
    cin >> r;
    cout << "Enter column number (c): ";
    cin >> c;

    if (c > r || c <= 0 || r <= 0) {
        cout << "Invalid position in Pascal's Triangle." << endl;
        return 1;
    }

    // Calculate the element at (r, c)
    int result = NCR(r - 1, c - 1); // Convert to 0-indexed for the calculation
    cout << "Element at position (" << r << ", " << c << ") in Pascal's Triangle: " << result << endl;

    return 0;
}

