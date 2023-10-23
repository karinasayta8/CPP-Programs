#include<iostream>
using namespace std;
bool Prime(int n){
    if(n<2)
    return 0;
    else{
    for(int i=2; i<n; i++){
        if(n%i==0)
        return 0;
        else 
        return 1;
    }
    }
}
int factorial(int m){
         int ans=1;
         for(int i=1; i<=m; i++)
         ans=ans*i;

         return ans;
}
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    //A is prime or not
    cout<<Prime(a);
    cout<<endl;

    //factorial of A
    cout<<factorial(a);
    cout<<endl;

    // B is prime or not
    cout<<Prime(b);
    cout<<endl;

    // factorial of B
    cout<<factorial(b);
    cout<<endl;

    // B- A are prime or not
    cout<<Prime(b-a);
    cout<<endl;

    // Factorial of B - A
    cout<<Prime(b-a);
    cout<<endl;
}