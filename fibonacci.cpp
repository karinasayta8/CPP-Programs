#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of Fibonacci terms to print: ";
    cin >> n;
    int first=0, second=1,next=0;

    if(n >= 1){
        cout<<first;
    }
    if(n >= 2){
        cout<<","<<second;
    }
    for(int i = 3; i <= n; i++){
        next=first+second;
        cout<<","<<next;
        first=second;
        second=next;
    }
}