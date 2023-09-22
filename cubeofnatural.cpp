#include <iostream>
using namespace std;

int main() {
    int n,sum=0;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    
    // Using a for loop to print numbers from 1 to 20
    for (int i = 1; i <= n; i++) {
        sum = sum+i*i*i;
      
    }
    cout<<sum<<" ";
}