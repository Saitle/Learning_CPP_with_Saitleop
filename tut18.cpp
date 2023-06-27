#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1)
    {
       return 1;
    } 
    return n * factorial(n-1);
}

int fibonacci(int n){
    if (n<2)
    {
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
} 
    
int main(){
    // factorial of a number
    // 4! = 4*3*2*1 = 24
    // n = n * (n-1)
    int a;
    cout<<"Enter a number:"<<endl;
    cin>>a;
    //cout<<"The factorial of " <<a<< " is "<<factorial(a)<<endl; 
    cout<<"The factorial of " <<a<< " is "<<fibonacci(a)<<endl;  
    return 0;
}