#include<iostream>
using namespace std;

int main(){
    int rows, cols;

    for(rows=1; rows<=5; rows++){
        for(cols=5; cols>=1; cols--){
            cout<<cols<<" ";
        }
        cout<<endl;
    }
}