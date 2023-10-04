#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cout<<endl;
    cin>>n;
    int i=1, fact=1;
do{
    fact=fact*i;
    i++;
  
}while(i<=n);
cout<<"Factorial of "<<n<<" is "<<fact;
}