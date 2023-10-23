#include<iostream>
using namespace std;
int sum(int m,int n){
    int ans = m+n;
    return ans;
}
int sub(int m,int n){
    int ans = m-n;
    return ans;
}
int mul(int m,int n){
    int ans = m*n;
    return ans;
}
int division(int m,int n){
    int ans = m/n;
    return ans;
}
void print(){
    cout<<"void function";
}
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<sum(a,b);
    cout<<endl;
    cout<<sub(a,b);
    cout<<endl;
    cout<<mul(a,b);
    cout<<endl;
    cout<<division(a,b);
    cout<<endl;
    print();
}