#include<bits/stdc++.h>
using namespace std;

int sqrt(int x){

    int ans = 1;
    while(ans*ans<=x){
        ans++;
    }
    return ans-1;
}


int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    cout<<"Square root or nearest square root of "<<num<<" is: "<<sqrt(num);
    
}