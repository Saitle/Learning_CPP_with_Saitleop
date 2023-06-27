#include<iostream>
using namespace std;

int main(){
    int a = 3;
    int * b = &a; // Pointer --> the data type which stores addr of other datatypes
    // & --> address of operator
    cout<<"the address of a is "<<b<<endl;
    cout<<"the address of a is "<<&a<<endl;

    //* --> dereference operator,
    cout<<"the address of a is "<<*b<<endl;

    int ** c = &b;
    cout<<"the value of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl; 
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl; 
    return 0;
}