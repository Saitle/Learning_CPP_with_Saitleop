#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a = 34;
    // char c = 'c';
    // cout<<"the value of a is "<<a<<endl;
    // a = 69;
    // c = '4';
    // cout<<"the value of a is "<<a<<endl; 
    // cout<<"the value of c is "<<c;
    //Constants in c++
    // const int a = 9;
    // cout<<"the value of a is "<<a;
    // // a = 9 --> throws an error
    int a = 69, b = 13;
    //without setw
    // cout<<"the value of a is "<<a<<endl;
    // cout<<"the value of b is "<<b<<endl;
    // cout<<"the value of c is "<<c<<endl;
    // cout<<endl;

    // //with setw
    // cout<<"the value of a with setw is "<<setw(4)<<a<<endl;
    // cout<<"the value of b with setw is "<<setw(4)<<b<<endl;
    // cout<<"the value of c with setw is "<<setw(4)<<c<<endl;

    //Operator precedence
    
    int c = ((((a*b)+b)-45)+87);
    cout<<c;


    return 0;
}