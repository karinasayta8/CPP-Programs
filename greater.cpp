#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    if(a>b || a>c)
    cout<<"Yes";
    else
    cout<<"No";
}

// Output: 
// Enter three numbers : 15 13 14
// Yes