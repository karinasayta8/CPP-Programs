#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the n th term in Fibonacci series you want to  print: ";
    cin >> n;
    int first=0, second=1,next=0;
    for(int i = 3; i <= n; i++){
        next=first+second;
        first=second;
        second=next;
    }
     cout<<next;
}