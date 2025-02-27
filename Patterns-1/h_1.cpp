#include<iostream>
using namespace std;

int main(){
    int rows; char cols;

    for(rows=1; rows<=5; rows++){
        for(cols='a'; cols<='e'; cols++){
            cout<<cols<<" ";
        }
        cout<<endl;
    }
}