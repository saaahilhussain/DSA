#include<iostream>
using namespace std;

int main(){

    int row, col, n;
    cout<<"Enter a number: ";
    cin>>n;

    for(row=1; row<=n; row++){
        
        //Inner loop for spaces
        for(col=1; col<=(n-row); col++){
            cout<<"  ";
        }
        
        //inner loop for printing row number
        for(col=1; col<=row; col++){
            cout<<row<<" ";
        }
        cout<<endl;

    }

}