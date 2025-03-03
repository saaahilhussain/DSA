#include<bits/stdc++.h>
using namespace std;

void print1(int i){ //print 1 to N using backtracking
    if(i<1) return;
    print1(i-1);
    cout<<i<<" ";
}

int main(){
    int n;
    cout<<"Enter no.: ";
    cin>>n;
    // print1(n);
}