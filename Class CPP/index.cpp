#include<iostream>
using namespace std;

class Employee {
    private:
    char name[20];
    int age;

    public:
    void getdata()
    {
        cout<<"Enter name: ";
        cin>>name;

        cout<<"Enter age: ";
        cin>>age;
    }
    void display();
};
void Employee::display(){
    cout<<"Name is"<<name;
    cout<<"age"<<age;
}
void main(){
    Employee E;
    E.getdata();
    E.display();
}