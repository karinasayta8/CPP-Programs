//Reverse a number n using Function, Constraints: -5000<=n<=5000
#include<iostream>
using namespace std;

int reverse(int n){
   if(n<= -5000)
   return 0;
   else if(n>5000)
   return 0;
   else{
    int rem, ans=0;
    while(n !=0){
        rem = n%10;
        n = n/ 10;
        ans = ans *10 + rem;
    }
    return ans;
   }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<reverse(n);
}