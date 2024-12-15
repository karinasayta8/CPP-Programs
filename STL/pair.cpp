#include <iostream>
#include <utility> // For pair

using namespace std;

int main() {
    // Creating a pair
    pair<int, string> p1(1, "Karina");
    
    // Accessing elements
    cout << "First: " << p1.first << ", Second: " << p1.second << endl;

    // Using make_pair
    auto p2 = make_pair(42, 3.14);
    cout << "First: " << p2.first << ", Second: " << p2.second << endl;

    auto p3 = make_pair(3.14, 6.7777777777777777777);
    cout<< "First: " << p3.first << ", Second: " << p3.second << endl;
    return 0;
    
}
// output :
// First: 1, Second: Karina
// First: 42, Second: 3.14
// First: 3.14, Second: 6.77778
