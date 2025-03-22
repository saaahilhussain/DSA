#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {3, 5, 5, 5, 7};
    int start = 0; end = 4; mid, first=-1, last = -1;

    //Find First and Last Position of Element in Sorted Array
    while(start<=end){
        mid = start+(end-start)/2;
        if(nums[mid]==target)
        {first = mid;
        end = mid-1;}
        else if(nums[mid]<target)
        start = mid+1;
        else end = mid-1;
    }
    //last position
    start =0; end=nums.size()-1;
    while(start<=end){
        mid = start+(end-start)/2;
        if(nums[mid]==target)
        {last = mid;
        start = mid+1;}
        else if(nums[mid]<target)
        start = mid+1;
        else end = mid-1;
    }
}