#include<bits/stdc++.h>
using namespace std;

//Q. Search insert position. (leetcode q.35)
int main(){
    int arr[8] = {1, 4, 6, 8, 10, 14, 16, 18};
    int start=0, end=7; //array size-1
    int mid, target, index=8;   //index stores ans.. stored array size as default answer for test case if search overflows array
    for(int i=0; i<8; i++) cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"Enter target: ";
    cin>>target;
    while(start<=end){
        mid = start+(end-start)/2;
        if(arr[mid]==target)
            {index = mid;
            break;}
        else if(arr[mid]<target)
            start = mid+1;
        else {index = mid; //if arr[mid]>target; it becomes a probable answer obviously
             end = mid-1;}
    }
    cout<<"Insert position: "<<index;
    return 0;
}