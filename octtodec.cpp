#include<iostream>
using namespace std;
int main(){
    int rem, ans=0,mul=1;
    int num;
    cout<<"Enter the number:";
    cin>>num;
    while(num>0){
        rem=num%10;
        num=num/10;
        ans=rem*mul+ans;
        mul=mul*8;
    }
    cout<<ans;
}