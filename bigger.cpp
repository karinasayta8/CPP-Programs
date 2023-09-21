#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if(a==b)
    cout<<"Two numbers can't be same "<<endl;
    else if(a>b)
    cout<<a<<" is bigger than "<<b;
    else
    cout<<b<<" is bigger than "<<a;


}