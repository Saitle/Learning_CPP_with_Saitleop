#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"using function with 2 args"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"using function with 3 args"<<endl;
    return a+b+c;
}

int main(){
    cout<<"Sum is "<<sum(1,2)<<endl;
    cout<<"sum is "<<sum(5,4,3);
    return 0;
}
