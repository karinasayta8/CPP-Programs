#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5] = {12, 45, 2, 56, 10};
    int ans = INT_MIN;
    
   for(int i=0; i<5; i++){
        if(arr[i]>ans)
        ans=arr[i];
   }
   cout<<ans;

}