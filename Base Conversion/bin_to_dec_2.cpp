#include<iostream>
using namespace std;

int main(){
    int rem, num, mul = 1, ans = 0;
    cout<<"Enter a number in binary number: ";
    cin>>num;

    cout<<"The decimal form of "<<num<<" is: ";
    while(num>0){
        rem = num % 10;
        num = num / 10;

        ans = rem*mul+ans;
        mul = mul*2; 
    }
    cout<<ans;
}