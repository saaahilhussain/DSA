#include<iostream>
using namespace std;

int main(){
    int rows, cols;

    for(rows=1; rows<=5; rows++){
        for(cols=1; cols<=5-rows; cols++){
            cout<<"  ";
        }
         
        for(char name = 'A'; name<='A'+ rows-1; name++){
            cout<<name<<" ";
        }
        cout<<endl;
    }
}