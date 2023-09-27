#include<iostream>
using namespace std;
int main(){
    int n;
    
    cout<<"Enter a number: ";
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n-row;col++){
            cout<<" ";
        }
        for(char column='A';column<='A'+row-1;column++){
            cout<<column;
           
        }
        cout<<endl;
    }
}