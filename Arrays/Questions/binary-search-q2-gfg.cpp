#include<bits/stdc++.h>
using namespace std;

//Find number of occurences of an elemented in an array.

int main(){
    int arr[10] = {9, 8, 6, 4, 8, 8, 8, 8, 4, 9};
    
    //first sort the array
    for(int i=8; i>=0; i--){
        bool swapped = 0;
        for(int j=0; j<=i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = 1;}
        }
        if (swapped == 0) break;
    }
    for(int i=0; i<10; i++) cout<<arr[i]<<" ";
    cout<<endl;
    //array sorted
    
    //apply binary search and store the first occurence
    int start=0, end=9, mid, target;
    int first=-1, last=-1, counter=0;
    cout<<"target element: ";
    cin>>target;

    while(start<=end){
        mid = start+(end-start)/2;
        if(arr[mid]==target){
            first = mid;
            end = mid-1;
        }
        else if(arr[mid]<target)
             start = mid+1;
        else end=mid-1;
    }

    //last occurence
    start=0; end=9;
    while(start<=end){
        mid = start+(end-start)/2;
        if(arr[mid]==target){
            last = mid;
            start = mid+1;
        }
        else if (arr[mid]<target){
            start = mid+1;
        }
        else end = mid-1;
    }

    if(first != -1 && last!=-1){
        counter = (last - first) + 1;
    }
    cout<<"Occurence: "<<counter<<" times";
    return 0;
}