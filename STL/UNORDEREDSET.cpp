#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    // Creating an unordered set of integers
    unordered_set<int> us;

    // Inserting elements
    us.insert(10);
    us.insert(20);
    us.insert(30);
    us.insert(20);  // Duplicate element (won't be inserted)
    us.insert(40);

    // Displaying the unordered set elements
    cout << "Unordered set elements: ";
    for (auto it = us.begin(); it != us.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Checking if an element exists in the set
    if (us.find(30) != us.end()) {
        cout << "Element 30 found in the unordered set." << endl;
    } else {
        cout << "Element 30 not found in the unordered set." << endl;
    }

    // Erasing an element
    us.erase(20);  // Removes element 20
    cout << "After erasing 20: ";
    for (auto it = us.begin(); it != us.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Size of the unordered set
    cout << "Size of unordered set: " << us.size() << endl;

    // Checking if the unordered set is empty
    if (us.empty()) {
        cout << "The unordered set is empty." << endl;
    } else {
        cout << "The unordered set is not empty." << endl;
    }

    return 0;
}
// Unordered set elements: 40 30 20 10 
// Element 30 found in the unordered set.
// After erasing 20: 40 30 10
// Size of unordered set: 3
// The unordered set is not empty.