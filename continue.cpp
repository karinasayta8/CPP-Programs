#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cout<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        if(i%3==0 || i%5==0)
        continue;
    cout<<i;
}


}