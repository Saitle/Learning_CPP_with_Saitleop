#include <iostream>
using namespace std;

//Function Prototypes
//func-name(args)

int sum(int a, int b); //acceptable
// int sum(int, int); //acceptable
// int sum(int a, b); //unacceptable

void g( void );





int main(){
    int num1, num2;
    cout<<"enter number 1: "<<endl;
    cin>>num1;

    cout<<"enter number 2: "<<endl;
    cin>>num2;

    cout<<"the sum of number 1 and number 2 is:"<<sum(num1, num2)<<endl;

    return 0;
}

int sum(int a, int b){
    // formal params a and b will be taking values from actual params num1 & num2
    int c = a + b;
}

void g(){
    cout<<"hello, good night"<<endl;
}