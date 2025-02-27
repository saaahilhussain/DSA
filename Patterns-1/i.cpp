#include<iostream>
using namespace std;

int main(){

    int rows, cols, count=1;

    for(rows=1; rows<=5; rows++){
        for(cols=1; cols<=5; cols++){
            cout<<count<<" ";
            count += 1;
        }
        cout<<endl;
    }
}