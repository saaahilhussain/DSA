#include<bits/stdc++.h>
using namespace std;

void selectSortInc(){
    int size;
    cout<<"Enter array size: ";
    cin>>size;
    
    int arr[size];
    cout<<"Enter "<<size<<" elements: "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Sorted array: ";
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
void selectSortDec(){
    int arr[1000];
    int size;
    cout<<"Enter array size: ";
    cin>>size;

    cout<<"Enter "<<size<<" elements: "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Sorted Array: ";
    for(int i=0; i<size-1; i++){
        int index = i;
        for(int j=i+1; j<size; j++){
            if(arr[j]>arr[index]){
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    //Selection sort Increasing order
    // selectSortInc();
    
    //Selection sort Decreasing order
    // selectSortDec();

}