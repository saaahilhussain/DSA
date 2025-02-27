#include<iostream>
using namespace std;

int main(){
    int rows, cols; char name;

    for(rows=1; rows<=5; rows++){
        name = 'a' + rows-1;
        for(cols=1; cols<=5; cols++){
            cout<<name<<" ";
        }
        cout<<endl;
    }
}