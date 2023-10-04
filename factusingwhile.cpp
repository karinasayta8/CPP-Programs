#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cout<<endl;
    cin>>n;
    int i=1, fact=1;
    while(i<=n){
    fact=fact*i;
    i++;
  
}
cout<<"Factorial of "<<n<<" is "<<fact;
}