#include<iostream>
using namespace std;

int countDigit(int n){
    int count =0;
    while(n){
        count++;
        n /= 10;
    }
    return count;
}

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

bool armstrong(int num, int digit){
    int n=num, ans=0, rem;

    while(n){
        rem = n % 10;
        n /= 10;

        ans = ans + power(rem, digit);
    }
    if(num==ans)
        return 1;
    else
        return 0;
}

int main(){
    int num;

    cout<<"Enter a number: ";
    cin>>num;

    int digit = countDigit(num);
    cout<<"Number of digits: "<<digit;
    cout<<"\nChecking whether armstrong or not...\n";

    cout<<armstrong(num, digit);
}