#include <iostream>
#include <set>
using namespace std;

int main() {
    // Creating a multiset of integers
    multiset<int> ms;

    // Inserting elements (duplicates allowed)
    ms.insert(10);
    ms.insert(20);
    ms.insert(10);  // Duplicate element
    ms.insert(30);
    ms.insert(20);  // Duplicate element
    ms.insert(10);  // Duplicate element

    // Displaying all elements of the multiset (in ascending order by default)
    cout << "Multiset elements (ascending order): ";
    for (auto it = ms.begin(); it != ms.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Count the occurrences of a specific element
    cout << "Count of 10: " << ms.count(10) << endl;  // Outputs 3
    cout << "Count of 20: " << ms.count(20) << endl;  // Outputs 2

    // Erase one occurrence of an element
    ms.erase(10);  // Erases one occurrence of 10
    cout << "After erasing one occurrence of 10: ";
    for (auto it = ms.begin(); it != ms.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Erase all occurrences of a specific element
    ms.erase(20);  // Erases all occurrences of 20
    cout << "After erasing all occurrences of 20: ";
    for (auto it = ms.begin(); it != ms.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Size of the multiset
    cout << "Size of multiset: " << ms.size() << endl;

    // Check if multiset is empty
    if (ms.empty()) {
        cout << "The multiset is empty." << endl;
    } else {
        cout << "The multiset is not empty." << endl;
    }

    return 0;
}
// Multiset elements (ascending order): 10 10 10 20 20 30 
// Count of 10: 3
// Count of 20: 2
// After erasing one occurrence of 10: 20 20 30
// After erasing all occurrences of 20: 30
// Size of multiset: 1
// The multiset is not empty.