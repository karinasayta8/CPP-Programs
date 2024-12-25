 #include<bits/stdc++.h>
 #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements in array: "<<endl;
 for (int i = 0; i <n ; i++) {
        
        cin>>arr[i];
    }

    // precompute
    int hash[13]={0};
    for(int i=0; i<n;i++){
        hash[arr[i]] += 1;
    }

    int q;
    cout<<"enter number of queries "<<endl;
    cin>>q;
    while(q--){
        int num;
        cout<<"enter element:"<<endl;

        cin>>num;
        cout<<"it appears "<<hash[num]<<" times"<<endl;
    }
}



