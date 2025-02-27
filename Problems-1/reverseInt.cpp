#include<iostream>
using namespace std;

int main(){
    int x, rem, ans=0;
    cout<<"Enter a number: ";
    cin>>x;
    while(x){
        rem = x%10;
        x /= 10;
        
        if(ans>INT_MAX/10 || ans<INT_MIN/10)
            return 0;
        ans = ans*10+rem;
    }
    cout<<"The desired output is: "<<ans;
}