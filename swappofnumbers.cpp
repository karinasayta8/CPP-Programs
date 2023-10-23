// There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.
#include<iostream>
using namespace std;

void swap(int a,int b, int c){
    b=a;
    c=b;
    a=c;
    cout<<"a= "<<a<<" b= "<<b<<" c= "<<c;
}
int main(){
    int a,b,c;
    cout<<"Enter three number: ";
    cin>>a>>b>>c;
    swap(a,b,c);
}