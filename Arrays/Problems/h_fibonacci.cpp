#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, arr[1000];
    cout<<"Enter fib position: ";
    cin>>n;

    arr[0] = 0; //fixed
    arr[1] = 1; //fixed

    for(int i=2; i<n; i++)
    arr[i] = arr[i-1] + arr[i-2];

    cout<<"Answer: "<<arr[n-1];

    return 0;
}