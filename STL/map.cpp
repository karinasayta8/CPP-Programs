#include <iostream>
#include <map>
using namespace std;

int main() {
    // Creating a map that maps integers to strings
    map<int, string> m;

    // Inserting elements into the map
    m.insert({1, "One"});
    m.insert({2, "Two"});
    m[3] = "Three"; // Another way to insert
    m[4] = "Four";

    // Display the map contents
    cout << "Map elements: " << endl;
    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    // Accessing elements by key
    cout << "\nAccessing key 2: " << m[2] << endl;  // Using []
    cout << "Accessing key 3: " << m.at(3) << endl; // Using at()

    // Checking if a key exists
    if (m.find(5) != m.end()) {
        cout << "\nKey 5 found in map: " << m[5] << endl;
    } else {
        cout << "\nKey 5 not found in map." << endl;
    }

    // Erasing an element
    m.erase(2);  // Removes the key-value pair with key 2
    cout << "\nAfter erasing key 2:" << endl;
    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    // Size of the map
    cout << "\nSize of map: " << m.size() << endl;

    // Checking if the map is empty
    if (m.empty()) {
        cout << "Map is empty." << endl;
    } else {
        cout << "Map is not empty." << endl;
    }

    return 0;
}
// Map elements: 
// 1 -> One
// 2 -> Two
// 3 -> Three
// 4 -> Four

// Accessing key 2: Two
// Accessing key 3: Three

// Key 5 not found in map.

// After erasing key 2:
// 1 -> One
// 3 -> Three
// 4 -> Four

// Size of map: 3
// Map is not empty.