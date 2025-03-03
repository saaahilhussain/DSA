#include<bits/stdc++.h>
using namespace std;

int counter = 1;
void print(int n){  //Print 1 to N
    cout<<counter<<endl;
    if(counter==n) return;

    counter++;
    print(n);
}

int main(){
    int n;
    cout<<"Enter a no.: ";
    cin>>n;
    print(n);
    return 0;
}