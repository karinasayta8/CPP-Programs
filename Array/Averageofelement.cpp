// 2: Calculate the average of elements in an array of size 18.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[18] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18} ;
    int sum =0;
    float avg;
    
    for(int i=0; i<18; i++){
        sum = sum + arr[i];
    }
    avg = sum/18;
    cout<<avg; 
}

// Output: 9