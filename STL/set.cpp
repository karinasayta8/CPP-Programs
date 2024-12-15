#include <iostream>
#include <set>
using namespace std;

int main() {
    // Create a set of integers
    set<int> s;

    // Insert elements
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(10); // Duplicate, won't be added

    cout << "Set elements (ascending order): ";
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Check if an element exists
    if (s.find(20) != s.end()) {
        cout << "20 is found in the set." << endl;
    } else {
        cout << "20 is not found in the set." << endl;
    }

    // Remove an element
    s.erase(20); // Remove element 20 from the set

    cout << "After removing 20: ";
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Size of the set
    cout << "Size of the set: " << s.size() << endl;

    // Check if the set is empty
    if (s.empty()) {
        cout << "The set is empty." << endl;
    } else {
        cout << "The set is not empty." << endl;
    }

    return 0;
}
// OUTPUT 
// Set elements (ascending order): 10 20 30 
// 20 is found in the set.
// After removing 20: 10 30 
// Size of the set: 2
// The set is not empty.