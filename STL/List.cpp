#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList = {30, 10, 20, 40};

    // Adding elements
    myList.push_back(50);
    myList.push_front(5);

    // Display the list
    cout << "List elements: ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Remove elements
    myList.pop_back();
    myList.pop_front();

    // Sort and reverse
    myList.sort();
    myList.reverse();

    // Display again
    cout << "After sorting and reversing: ";
    for (auto val : myList) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
// List elements: 5 30 10 20 40 50 
// After sorting and reversing: 40 30 20 10