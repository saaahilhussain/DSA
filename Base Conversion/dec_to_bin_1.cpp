#include<iostream>
using namespace std;

int main(){
    int num = 13, rem, mul = 1, ans = 0;


    cout<<"The Binary of "<<num<<" is: ";

    while(num>0) {
        rem = num % 2;
        num = num / 2;
        ans = rem*mul+ans;
        mul = mul*10;
    }
    cout<<ans;
}