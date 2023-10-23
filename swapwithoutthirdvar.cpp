//Swap 2 numbers a, b without using extra variables. Range of -10000<=a,b<=100000. 
#include<iostream>
using namespace std;

int  swap(int a,int b){
    if(a>=-10000 || b<=100000){
   a=a+b;
   b=a-b;
   a=a-b;
    cout<<"a= "<<a<<" b= "<<b;
}
else 
return 0;
}
int main(){
    int a,b;
    cout<<"Enter three number: ";
    cin>>a>>b;
    swap(a,b);
}
