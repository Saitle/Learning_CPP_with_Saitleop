#include<iostream>
using namespace std;

class number{
    int a;
    public:
        number(){
            a = 0;
        }
        number(int num){
            a = num;

        }
        //copy constructor (if not given compiler uses its default copy constructor)
        number(number &obj){
            cout<<"copy constructor called"<<endl;
            a = obj.a;

        }

        void display(){
            cout<<"The number of this object is "<<a<<endl;
        }
};
int main(){
    number x, y, z(45);
    x.display();
    y.display();
    z.display();
    number z1(x);// copy constructor invoked
    z1.display();
    return 0;
}

