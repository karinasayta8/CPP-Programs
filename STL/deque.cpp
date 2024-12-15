#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq = {10, 20, 30,40,60,70,100};

    // Adding elements at the back and front
    dq.push_back(40);  // Back: 40
    dq.push_front(5);  // Front: 5

    cout << "Deque after adding elements: ";
    for (int val : dq) {
        cout << val << " ";
    }
    cout << endl;

    // Removing elements from back and front
    dq.pop_back();     // Remove 40
    dq.pop_front();    // Remove 5

    cout << "Deque after removal: ";
    for (int val : dq) {
        cout << val << " ";
    }
    cout << endl;

    // Accessing elements using the subscript operator
    cout << "Element at index 1: " << dq[1] << endl;  // Output: 20

    // Inserting element at specific position
    auto it = dq.begin();
    dq.insert(it + 1, 25);  // Insert 25 at index 1

    cout << "Deque after insertion: ";
    for (int val : dq) {
        cout << val << " ";
    }
    cout << endl;

    // Size and clear
    cout << "Size of deque: " << dq.size() << endl;
   

    //resizing
    dq.resize(5, 100); 
    for(auto it : dq){
        cout<<" "<<it;
    }
    cout<<endl;

    deque<int> dq2 = {50, 60, 70};
    dq.swap(dq2); 
    cout<<endl<<" Elements after swapping in dq ";
     for(auto it : dq){
        cout<<" "<<it;
    
     }
     cout<<endl<<" Elements after swapping in dq2 ";
     for(auto it : dq2){
        cout<<" "<<it;
    
     }
     dq.clear();
    cout <<endl<< "Size after clear: " << dq.size() << endl;
    return 0;
}
// output
// Deque after adding elements: 5 10 20 30 40 60 70 100 40 
// Deque after removal: 10 20 30 40 60 70 100
// Element at index 1: 20
// Deque after insertion: 10 25 20 30 40 60 70 100
// Size of deque: 8
//  10 25 20 30 40

//  Elements after swapping in dq  50 60 70
//  Elements after swapping in dq2  10 25 20 30 40
Size after clear: 0
