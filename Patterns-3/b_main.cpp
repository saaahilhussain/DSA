#include<iostream>
using namespace std;

int main(){

    int row, col;

    for(row=1; row<=4; row++){
        
        //Inner loop for spaces
        for(col=1; col<=(4-row); col++){
            cout<<"  ";
        }
        
        //inner loop for printing row number
        for(col=1; col<=row; col++){
            cout<<row<<" ";
        }
        cout<<endl;

    }

}