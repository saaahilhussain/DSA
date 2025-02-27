#include<iostream>
using namespace std;    

//Q. Add sum of digits repeatedly until the answer is of single digit.
int main(){
    int num, rem, ans=0;
    cout<<"Enter a number: ";
    cin>>num;

    while(num>9)
    {
        ans = 0;
        while(num)
        {
            rem = num%10;
            num /= 10;

            ans += rem;
        }
        num = ans;
    }
    cout<<"Output: "<<ans;
}