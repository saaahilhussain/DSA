#include<bits/stdc++.h>
using namespace std;

void bubbleSortInc(){
    int arr[1000];
    int size;

    cout<<"Enter size of the array: ";
    cin>>size;

    cout<<"Enter "<<size<<" elements: "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    for(int i=size-2; i>=0; i--){
        bool swapped = 0;
        for(int j=0; j<=i; j++){
            if(arr[j]>arr[j+1]){
                swapped = 1;
                swap(arr[j], arr[j+1]);
            }
        }
        if(swapped==0)
            break;
    }
    cout<<"Sorted array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
void bubbleSortDec(){
    int arr[1000];
    int size;

    cout<<"Enter size of the array: ";
    cin>>size;

    cout<<"Enter "<<size<<" elements: "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    for(int i=size-2; i>=0; i--){
        bool swapped = 0;
        for(int j=0; j<=i; j++){
            if(arr[j]<arr[j+1]){
                swapped = 1;
                swap(arr[j], arr[j+1]);
            }
        }
        if(swapped==0)
            break;
    }
    cout<<"Sorted array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    // bubbleSortInc();
    // bubbleSortDec();
}