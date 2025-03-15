#include<bits/stdc++.h>
using namespace std;

void print1(int i, int n){ // simple print name 'n' times fn
    if (i>n) return;
    cout<<"Hello world!"<<endl;
    print1 (i+1, n);
}
void print2(int i, int n){
    if(i>n) return;

    cout<<i<<" ";
    print2(i+1, n);
}

int main(){
    int n;
    cout<<"Enter no.: ";
    cin>>n;

    // print1(1,n);
    print2(1, n);
    return 0;
}