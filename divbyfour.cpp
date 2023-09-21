#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    // Using a for loop to print numbers from 1 to 20
    for (int i = 1; i <= n; i++) {
      if(i%4==0)
      cout<<i<<endl;
    }
}