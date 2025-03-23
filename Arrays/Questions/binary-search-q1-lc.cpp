#include<bits/stdc++.h>
using namespace std;

//Find First and Last Position of Element in Sorted Array
int main(){
    int arr[5] = {3, 5, 5, 5, 7};
    int start = 0, end = 4, mid, first=-1, last = -1, target;
    cout<<"Array: ";
    for(int i=0; i<5; i++) cout<<arr[i]<<" ";
    cout<<"Find: ";
    cin>>target;

    //store first element
    while(start<=end){
        mid = start+(end-start)/2;
        if(arr[mid]==target)
        {first = mid;
        end = mid-1;}
        else if(arr[mid]<target)
        start = mid+1;
        else end = mid-1;
    }
    
    //last position
    start =0; end=4;
    while(start<=end){
        mid = start+(end-start)/2;
        if(arr[mid]==target)
        {last = mid;
        start = mid+1;}
        else if(arr[mid]<target)
        start = mid+1;
        else end = mid-1;
    }
    cout<<"first appearance: "<<first<<endl;
    cout<<"last appearance: "<<last<<endl;
}