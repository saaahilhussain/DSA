#include<iostream>
using namespace std;

int main(){
    int num, rem, ans=0, mul=1;
    cout<<"Enter a decimal number: ";
    cin>>num;

    cout<<"The binary form of "<<num<<" is: ";

    while(num>0){
        rem = num%2;    //storing the remainder
        num = num/2;    //num incrementation
        ans = rem*mul+ans;      //formula to store the remainders in reverse form
        mul = mul*10;   //mul incrementation
    }
    cout<<ans<<".";
}