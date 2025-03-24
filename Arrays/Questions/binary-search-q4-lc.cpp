#include<bits/stdc++.h>
using namespace std;

//find peak element in a mountain array
int main(){
    int arr[4] = {0,10,5,2};
    int start=0, end=3, mid, peak=-1;

    for(int i=0; i<4; i++) cout<<arr[i]<<" ";
    cout<<endl;
    
    while(start<=end){
        mid = end+(start-end)/2;
        //Peak elemnent
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            peak=mid;
            break;
        }
        //find right side
        else if (arr[mid]>arr[mid-1])
        start = mid+1;
        //find left side
        else 
        end = mid-1;
    }
    
    cout<<"Peak element index: "<<peak;
    return 0;
}