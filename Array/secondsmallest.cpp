#include<climits>
#include<iostream>
using namespace std;
int main(){
            int ans = INT_MAX;
            int secsmallest= INT_MAX;
            int arr[5]={8,4,9,7,6};

            for(int i=0; i<7; i++){
                if(arr[i]<ans){
                ans=arr[i];
                }
            }

            for(int i=0; i<7; i++)
            {
                if(ans != arr[i])
                ans=min(secsmallest,arr[i]);
            }
            cout<<ans;

}