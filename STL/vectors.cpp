#include <vector>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    vector<string> name;
    vector<int> roll_no;

    name.push_back("Karina");
    name.push_back("Sayta");
    name.push_back("Mtech");
    name.push_back("CSE");
    roll_no.push_back(111);
    roll_no.push_back(112);
    roll_no.push_back(113);
    string n=name[0];
    int rn=roll_no[0];

    cout<<n;
    cout<<endl;
    cout<<rn<<endl;
    cout<<"size of vector name is : "<<sizeof(name)<<endl;
    cout<<"After Removing last elements : ";
    name.pop_back();
    for(int i =0; i<name.size(); i++){
        cout<<" "<<name[i];
    }

    roll_no.erase(roll_no.begin() + 1);
    for(int i =0; i<roll_no.size(); i++){
        cout<<" "<<roll_no[i];
    }
    cout<<endl;
    cout << "Capacity: " << name.capacity() << endl;  // Total memory allocated

    name.reserve(100);  // Reserve space for 100 elements to avoid reallocations
    roll_no.insert(roll_no.begin() + 1, 115);
    roll_no.clear();
    roll_no.resize(10);
    for(int num : roll_no){
        cout<<num<<" ";
    }
    return 0;
}
// Karina
// 111
// size of vector name is : 12
// After Removing last elements :  Karina Sayta Mtech 111 113
// Capacity: 4
// 0 0 0 0 0 0 0 0 0 0