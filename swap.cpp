#include<iostream>
using namespace std;
//Call by value 
void swap(int a, int b){
    int c;
    c=a;
    a=b; 
    b=c;
    cout<<"a= "<<a<<" b= "<<b;
}

// Call by reference
//Call by value 
void swap(float &a, float &b)  //function overloading
{
    float c;
    c=a;
    a=b; 
    b=c;
   
}

int main(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    swap(a,b);

    float m,n;
    cout<<endl;
    cout<<"Enter two numbers : ";
    cin>>m>>n;
    swap(m,n);
     cout<<"m= "<<m<<" n= "<<n;
   
}