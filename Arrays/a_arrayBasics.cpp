#include <bits/stdc++.h>
using namespace std;

void Question1() {
    // Function to take 20 elements input, display them, and compute their sum
    int arr[20];
    cout << "Enter 20 elements: " << endl;

    for (int i = 0; i < 20; i++) {
        cin >> arr[i];
    }

    cout << "Your array: ";
    for (int i = 0; i < 20; i++) {
        cout << arr[i] << " ";
    }

    int sum = 0;
    for (int i = 0; i < 20; i++) {
        sum += arr[i];
    }

    cout << "\nThe sum of your array is: " << sum << endl;
}
void Question2() {
    cout<<"Inside Question2() function...";
    //Calculate the average of elements in an array of size 18.
    int arr[18];
    cout<<"Enter 18 elements: "<<endl;
    for(int i=0; i<18; i++){
        cin>>arr[i];
    }

    //loop to find their average
    float sum = 0;
    for(int i=0; i<18; i++){
        sum += arr[i];
    }
    float average = sum/18;
    cout<<"The average will be: "<<average<<endl;
}
void Question3(){}
void Question4(){
    int size;
    int arr[50];

    cout<<"Enter size: ";
    cin>>size;

    cout<<"Enter "<<size<<" elements: \n";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    int target; 
    cout<<"\nEnter target element: ";
    cin>>target;

    int index = -1;
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            index = i;
            break;
        }
    }
    if(index != -1){
        cout<<"Position of "<<target<<" in the array is: "<<index<<endl;
    }else{cout<<"-1"<<endl;}
}
void Question5(){
    char arr[27];

    for(char i='a'; i<='z'; i++){
        cout<<arr[i];
    }
}

int main() {
    // Question1();
    // Question2();
    //Question3();
    // Question4();
    // Question5();
    return 0;
}
