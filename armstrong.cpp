#include <iostream>

using namespace std;

int main() {
    int n, rem, revno=0, origno;
    cout << "Enter the number: ";
    cin >> n;
    origno=n;
    
    while(n>0){
        rem = n % 10;
        revno = revno + rem * rem * rem;
        n = n / 10;
    }
      
      if(revno == origno){
        cout<<"It is a Armstrong number";

      }
      else
      cout<<"It is not a Armstrong number";
}