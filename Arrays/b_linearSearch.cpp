#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    cout<< linearSearch(arr, 5, 4);
}