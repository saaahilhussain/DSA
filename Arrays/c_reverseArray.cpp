#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int start = 0; int end = 4;

    cout<<"Original Array: ";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout<<"Reverse: ";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}