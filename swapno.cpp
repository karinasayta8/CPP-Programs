#include <iostream>

using namespace std;

int main() {
    int a,b;
   cout<<"Enter two numbers: ";
   cin>>a;
   cin>>b;
   cout<<"Before Swapping : a = "<<a<<" and b = "<<b;
   a = a+b;
   b = a-b;
   a=a-b;
   cout<<endl;
   cout<<"After Swapping : a = "<<a<<" and b = "<<b;
}