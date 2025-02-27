#include<iostream>
using namespace std;

int main(){
    char row; char col;

    for(row='a'; row<='e'; row++){
        for(col='a'; col<=row; col++){
            cout<<row<<" ";
        }
        cout<<endl;
    }
}