// 1: Take 20 elements from user input and find its sum with the help of an array.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[20] ;
    int sum =0;
    for(int i=0; i<20; i++){
        cin>>arr[i];
    }
    for(int i=0; i<20; i++){
        sum = sum + arr[i];
    }
    cout<<sum;
}
// Input: 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0
// Output: 90