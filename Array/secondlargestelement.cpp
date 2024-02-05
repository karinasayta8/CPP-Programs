#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5] = {12, 45, 2, 56, 10};
    int largest = INT_MIN;
    int Secondlar = INT_MIN;

    
   for(int i=0; i<5; i++){
        if(arr[i]>largest){
            Secondlar=largest;
            largest = arr[i];
        }
        else{
            if(arr[i]>Secondlar && arr[i] < largest)
                Secondlar = arr[i];
        }
        
   }
   cout<<Secondlar;

}