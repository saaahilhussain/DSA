#include<iostream>
using namespace std;

char convert(char name){
    char ans = name - 'a' + 'A';
    return ans;
}

int main(){
    char name;
    cout<<"Enter a character: ";
    cin>>name;
    cout<<"Before: "<<name<<"\nAfter: "<<convert(name);
} 