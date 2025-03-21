#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[1000];
    int n;
    cout<<"Array size: ";
    cin>>n;

    for(int i=0; i<n; i++)
    cin>>arr[i];

    //insertion sort
    for(int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if(arr[j]<arr[j-1])
            swap(arr[j], arr[j-1]);
            else
            break;
        }
    }
    cout<<"Sorted array: "<<endl;
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}