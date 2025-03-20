#include<bits/stdc++.h>
using namespace std;

int arrMax(){
    int arr[5] = {1 , 4, 9, 16, 25};
    int ans = INT_MIN;

    for(int i=0; i<5; i++){
        if(arr[i]>ans){
            ans = arr[i];
        }
    }
    return ans;
}
int arrMin(){
    int arr[5] = {7, 14, 21, 28, 35};
    int ans = INT_MAX;
    for(int i = 0; i<5; i++){
        if(arr[i]<ans){
            ans = arr[i];
        }
    }
    return ans;
}

int main(){
    
    // cout<<arrMax();
    cout<<arrMin();
    return 0;
}