#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[1000], size;
    cout<<"Enter array size: ";
    cin>>size;
    
    cout<<"Enter "<<size<<" elements: "<<endl;
    cout<<"(Note: Array must be sorted)";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    int start=0; int end=size-1; int mid = (start+end)/2; int key;
    cout<<"Element to find: ";
    cin>>key;

    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid]==key) break;
        else if(key>arr[mid]) start=mid+1;
        else end = mid-1;
    }
    cout<<"The position of "<<key<<" is "<<mid;
    
    return 0;
}