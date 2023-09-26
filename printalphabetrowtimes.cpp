#include<iostream>
using namespace std;
int main(){
    for(int row = 1; row <= 10; row++){
       char name = 'a'+ (row-1);
        for(int col = 1; col <= row; col++){
            cout<<name<<" ";
        }
        cout<<endl;
    }

}