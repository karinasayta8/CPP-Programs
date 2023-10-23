//Print “Hello Coder Army” n times using Function.
#include<iostream> 
using namespace std;
void print(int n){
    int i=1;
    while(i<=n){
     cout<<"Hello Coder army ";
     cout<<endl;
     i=i+1;
    }
}
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    print(n);

}