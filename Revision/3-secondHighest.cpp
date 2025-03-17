#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[1000], size, ans, second_max; 
    cout<<"Array size: ";
    cin>>size;

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    //first find the largest element
    ans = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>ans) {
            ans = arr[i];
        }
    }

    //second largest
    for(int i=0; i<size; i++){
        if(arr[i] != ans){
            second_max = max(arr[i], second_max);
        }
    }
    cout<<"largest element: "<<ans<<endl;
    cout<<"second largest: "<<second_max;

    return 0;
}