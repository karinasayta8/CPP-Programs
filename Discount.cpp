#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter age of a person: ";
    cin>>a;
    if(a<12)
    cout<<"the person is eligible for Discount";
    else if(a>65)
    cout<<"the person is eligible for Discount";
    else
    cout<<"The Person is not eligible for Discount";
}