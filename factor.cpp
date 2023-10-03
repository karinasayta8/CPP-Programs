#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int i=1;
    while(i<=n){
        if(n%i==0){
            cout<<i<<" ";
            
        }
        i++;
    }

}

// Output: 
// Enter age : 15
// The person is teenager