// 3: Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.
#include<iostream>
using namespace std;
int main(){
    int Size, element,index=0;
    cout<<"Enter size of an array : ";
    cin>>Size;
    int arr[Size];
    // get elements of an array
    for(int i=0; i<Size; i++){
        cin>>arr[i];
    }
    // Finding index
    cout<<"Enter element :";
    cin>>element;
    for(int i=0; i<Size; i++){
        if(element>arr[i])
        index=arr[i];
    }
    cout<<index;
     

}

//Output : 
//Enter size of an array : 4
// 1 2 3 4
// Enter element :3
// 2