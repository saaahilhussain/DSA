#include<bits/stdc++.h>
using namespace std;

void print(int i, int n){ //simple N to 1 printing
    if(i<1) return;
    cout<<i<<" ";
    print(--i, n);
}

int main(){
    int n;
    cout<<"Enter a no.: ";
    cin>>n;

    print(n, n);
    return 0;
}