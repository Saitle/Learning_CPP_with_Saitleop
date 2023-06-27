#include<iostream>

/* there are two types of header file
1) system header files - comes with the compiler
eg:- #include<iostream>
2) user defined header files - it is written by the programmer
eg:- #include"this.h" (will produce error if the file is not found in the current directory) */

using namespace std;

int main() {
    int a=6, b=9;
    cout<<"operators in c++"<<endl;
    cout<<"following are the operators in c++"<<endl;

    //arithermatic operators
    cout<<"Arithematic operators"<<endl;
    cout<<"\n";
    cout<<"the value of a + b is "<<a+b<<endl;
    cout<<"the value of a x b is "<<a*b<<endl;
    cout<<"the value of a - b is "<<a-b<<endl;
    cout<<"the value of a / b is "<<a/b<<endl;
    cout<<"the value of a % b is "<<a%b<<endl;
    cout<<"the value of a ++ is "<<a++<<endl;
    cout<<"the value of a -- is "<<a--<<endl;
    cout<<"the value of ++a is "<<++a<<endl;
    cout<<"the value of --a is "<<--a<<endl;
    cout<<"\n";

    //comparison operators
    cout<<"Comparison operators"<<endl;
    cout<<"\n";
    cout<<"the value of a == b is "<<(a==b)<<endl;
    cout<<"the value of a != b is "<<(a!=b)<<endl;
    cout<<"the value of a <= b is "<<(a<=b)<<endl;
    cout<<"the value of a >= b is "<<(a>=b)<<endl;
    cout<<"the value of a < b is "<<(a<b)<<endl;
    cout<<"the value of a > b is "<<(a>b)<<endl;

    //Logical operators
    cout<<"Logical operators"<<endl;
    cout<<"value of the following logical operator <<((a==b) && --> and operator (a<b)) is "<<((a==b) && (a<b))<<"\n";
    cout<<"value of the following logical operator <<((a==b) || --> or operator (a<b)) is "<<((a==b) || (a<b))<<"\n";
    cout<<"value of the following logical operator !(a==b) is "<<!(a==b)<<"\n";


    return 0;
}