#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter String "<<endl;
    cin>>s;
    
    // precompute
    int hash[256] = {0}; // Hash array to store frequencies of all ASCII characters
    for(int i = 0; i < s.size(); i++){
        hash[s[i]] += 1; // Increment the frequency for the corresponding character
    }

    int q;
    cout<<"Enter number of queries "<<endl;
    cin>>q;
    while(q--){
        char c;
        cout<<"Enter character:"<<endl;
        cin>>c;
        cout<<"It appears " << hash[c] << " times" << endl; // Use hash[c] directly
    }
}
