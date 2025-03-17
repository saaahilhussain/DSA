#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[1000];
    int size, target, index=-1;
    cout<<"Enter array size: ";
    cin>>size;

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<"\nFind element: ";
    cin>>target;
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            index = i;
            break;
        }
    }
    cout<<target<<" is located at index "<<index;
    return 0;
}