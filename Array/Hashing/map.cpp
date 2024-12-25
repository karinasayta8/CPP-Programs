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
    map<int,int> hashes;
    for(int i=0; i<n;i++){
        hashes[arr[i]]++;
    }

    // iterate in the map
    for(auto it : hashes){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int q;
    cout<<"enter number of queries "<<endl;
    cin>>q;
    while(q--){
        int num;
        cout<<"enter element:"<<endl;

        cin>>num;
        cout<<"it appears "<<hashes[num]<<" times"<<endl;
    }
}



