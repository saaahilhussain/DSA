#include<bits/stdc++.h>
using namespace std;

void print(int i, int n){
    if(i>n) return;
    cout<<i<<" ";
    print(i+1, n);
}

int main(){
    
    int n;
    cout<<"Enter no.: ";
    cin>>n;
    
    print(1, n);
    return 0;
}