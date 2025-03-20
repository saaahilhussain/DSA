#include<bits/stdc++.h>
using namespace std;

int main(){
    int size, arr[1000], ans=INT_MIN, second=INT_MIN;
    cout<<"Size: ";
    cin>>size;
    for(int i=0; i<size; i++)
        cin>>arr[i];
    //greatest number

    for(int i=0; i<size; i++){
        if(arr[i]>ans) {
            ans = arr[i];
        }
    }
    //second greatest
    for(int i=0; i<size; i++){
        if(arr[i]!=ans){
            second = max(arr[i], second);
        }
    }
    cout<<"Second greatest element: "<<second;
    return 0;
}