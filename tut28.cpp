#include<iostream>
using namespace std;
class Y;
class X{
    int data;
    public:
        void setval(int value){
            data = value;
        }
    friend void add(X, Y);
};

class Y{
    int num;
    public:
        void setval(int value){
            num = value;
        }
     friend void add(X, Y);
};

void add(X o1, Y o2){
    cout<<"summimg data of X and Y gives me "<<o1.data + o2.num<<endl;
}

int main(){
    X a1;
    a1.setval(5);
    Y b1;
    b1.setval(9);
    add(a1,b1);
    return 0;
}