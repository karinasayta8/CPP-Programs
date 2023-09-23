#include <iostream>

using namespace std;

int main() {
    int n, rem, revno=0, origno;
    cout << "Enter the number: ";
    cin >> n;
    origno=n;
    
    while(n>0){
        rem = n % 10;
        revno = rem + revno;
        n = n / 10;
    }
      
      cout<<revno;
}