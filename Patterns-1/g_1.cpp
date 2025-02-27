#include<iostream>
using namespace std;

int main(){
    char rows; int cols;

    for(rows='a'; rows<='e'; rows++){
        for(cols=1; cols<=5; cols++){
            cout<<rows<<" ";
        }
        cout<<endl;
    }
}