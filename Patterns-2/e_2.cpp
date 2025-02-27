#include<iostream>
using namespace std;

int main(){
    int row, col; char name;

    for(row=1; row<=5; row++){
        name = 'a' + row-1;
        for(col=1; col<=row; col++){
            cout<<name<<" ";
        }
        cout<<endl;
        name++;

    }
}