#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    //Creating constructor
    /*Constructor is a special member function with the same name as of the class. It
    is used to initialize the objects of its class. It is automatically invoked */
        complex(void);//Constructor declaration
        void printNum(){
            cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

complex :: complex(void){
    a = 10;
    b = 0;
    cout<<"hello world";
}
int main(){
    complex c1, c2, c3;
    c1.printNum();
    c2.printNum();
    c3.printNum();
    return 0;
}

//Characteristics of constructor

/*
1) A constructor should be declared in the public section of the class
2) They are automatically invoked whenever the object is created
3) They cannot return values and do not have return types
4) It can have default arguments
5) We cannot refer to their address
*/