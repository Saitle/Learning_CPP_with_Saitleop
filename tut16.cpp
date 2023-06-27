#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}
//swaping using reference variables
void swapointer(int* num1, int* num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

// call by reference using c++ reference variables
void swaPointerVar(int &num1, int &num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main(){
    int n1 = 10, n2 = 6;
    //cout<<"the sum is "<<sum(9, 6)<<endl;
    cout<<"the value of num1 is " <<n1<<"the value of num2 is " <<n2<<endl;
    swapointer(&n1, &n2);
    cout<<"the value of num1 is "<<n1<<"the value of num2 is "<<n2<<endl;
    return 0;
}