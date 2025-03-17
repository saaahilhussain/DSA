#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[1000], size;
    cout<<"Size: ";
    cin>>size;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    //swap technique
    int i=0, j=size-1;
    while(i!=j){
        swap(arr[i], arr[j]);  //first element of array gets swapped with the last element
        i++;
        j--;
    }
    cout<<"\nReverse array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}