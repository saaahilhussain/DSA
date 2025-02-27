#include<iostream>
using namespace std;

int main(){

    int rows, cols; char name;
    for(rows=1; rows<=5; rows++){
        for(cols=1; cols<=5; cols++){
            name = 'a' + cols-1;
            cout<<name<<" ";
        }
        cout<<endl;
    }
}