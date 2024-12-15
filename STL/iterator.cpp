#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40};

    // Declaring an iterator
    
    vector<int>::iterator it;

    // Iterating through the vector
    for (it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " "; // Dereferencing the iterator to get the value
    }


    cout<<endl<<"Reversing the iterator: ";
    vector<int>::reverse_iterator rit;
    for (rit = numbers.rbegin(); rit != numbers.rend(); ++rit) {
        cout << *rit << " ";
    }



    cout<<endl<<"constant iterators: ";
   
    vector<int>::const_iterator cit;
    for (cit = numbers.cbegin(); cit != numbers.cend(); ++cit) {
        cout << *cit << " ";
        // *it = 50; // Error: Can't modify elements with const_iterator
    }



    cout<<endl<<" Sorting numbers using algorithm : ";
    vector<int> array = {40, 10, 30, 20};

    // Sorting the vector
    sort(array.begin(), array.end());
    array.insert(array.begin() + 3, 800);
    // Using iterator to print sorted vector
    for (auto it = array.begin(); it != array.end(); ++it) {
        cout << *it << " ";
    }
    return 0;
}

// 10 20 30 40 
// Reversing the iterator: 40 30 20 10
// constant iterators: 10 20 30 40
//  Sorting numbers using algorithm : 10 20 30 800 40