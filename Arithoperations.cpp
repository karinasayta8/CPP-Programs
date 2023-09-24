#include<iostream>
using namespace std;
int main(){
    int a,b,opr;
    
    cout<<"Enter two numbers : ";
    cin>>a>>b;

    cout<<"Make a Choice : "<<endl;
    cout<<"1. for Addition"<<endl;
    cout<<"2. for Subtraction"<<endl;
    cout<<"3. for Multiplication"<<endl;
    cout<<"4. for Division"<<endl;
    cin>>opr;
    if(opr == 1)
    cout<<"Addition of "<<a<<"and "<<b<<" is "<<a+b;
    else if(opr == 2)
    cout<<"Subtraction of "<<a<<"and "<<b<<" is "<<a-b;
    else if(opr == 3)
    cout<<"Multiplication of "<<a<<"and "<<b<<" is "<<a*b;
    else if(opr == 4)
    cout<<"Division of "<<a<<" and "<<b<<" is "<<a/b;

}