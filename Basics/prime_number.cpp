#include<iostream>
using namespace std;

int main(){
    int i, n;
    cout<<"Enter a no.: ";
    cin>>n;

    if(n<2){
        cout<<"Not prime";
        return 0;
    }
    for(i=2; i<n; i++){
        if(n%i==0){
            cout<<"Not prime";
            return 0;
        }
    }
    cout<<"Prime";
    return 0;
}