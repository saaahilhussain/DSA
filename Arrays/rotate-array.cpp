#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[1000], size;
    cout<<"Size: ";
    cin>>size;
    for(int i=0; i<size; i++)
    cin>>arr[i];

    int last = arr[size-1];

    for(int i=size-2; i>=0; i--)
    arr[i+1] = arr[i];

    arr[0] = last;
    for(int i=0 ;i<size; i++)
    cout<<arr[i]<<" ";
    return 0;
}