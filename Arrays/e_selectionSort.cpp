#include<bits/stdc++.h>
using namespace std;

int main(){
    //Insertion sort
    int size;
    cout<<"Enter array size: ";
    cin>>size;
    
    int arr[size];
    cout<<"Enter "<<size<<" elements: "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Array after sorting: ";
    for(int i=0; i<size-1; i++){
        int index = i;
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[index]){
                index = j;
            }
            swap(arr[i], arr[index]);
        }
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

}