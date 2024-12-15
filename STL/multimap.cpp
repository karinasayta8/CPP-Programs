#include <iostream>
#include <map>
using namespace std;

int main() {
    // Creating a multimap
    multimap<int, string> mm;

    // Inserting elements into the multimap
    mm.insert({1, "One"});
    mm.insert({2, "Two"});
    mm.insert({1, "Uno"});  // Duplicate key
    mm.insert({2, "Deux"}); // Duplicate key
    mm.insert({3, "Three"});

    // Displaying the elements
    cout << "Multimap contents:" << endl;
    for (auto it = mm.begin(); it != mm.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    // Counting elements with a specific key
    int key = 1;
    cout << "\nNumber of elements with key " << key << ": " << mm.count(key) << endl;

    // Finding elements by key
    cout << "\nElements with key 2:" << endl;
    auto range = mm.equal_range(2); // Get the range of elements with key 2
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    // Erasing elements by key
    mm.erase(1); // Removes all elements with key 1
    cout << "\nAfter erasing key 1:" << endl;
    for (auto it = mm.begin(); it != mm.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    return 0;
}



// Multimap contents:
// 1 -> One
// 1 -> Uno
// 2 -> Two
// 2 -> Deux
// 3 -> Three

// Number of elements with key 1: 2

// Elements with key 2:
// 2 -> Two
// 2 -> Deux

// After erasing key 1:
// 2 -> Two
// 2 -> Deux
// 3 -> Three