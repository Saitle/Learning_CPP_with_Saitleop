#include<iostream>
using namespace std;
/*
Case 1
class A:public B{
order of execution --> class B --> class A
};

Case 2
class A:public B, public C
order of execution --> class B --> class C

Case 3
class A:public B, virtual public C
order of execution --> class C --> class B
*/
class base1{
    int data1;
    public:
        base1(int i){
            data1 = i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printData(void){
            cout<<"Number data1 ki hai "<<data1<<endl;
        }
};

class base2{
    int data2;
    public:
        base2(int i){
            data2 = i;
            cout<<"Base2 class constructor called"<<endl;
        }
        void printData(void){
            cout<<"Number data1 ki hai "<<data2<<endl;
        }
};

class derived : public base1, public base2{
    int deriv1, deriv2;
    public:
        derived(int a, int b, int c, int d):base1(a), base2(b){
            deriv1 = c;
            deriv2 = d;
        }

        void printData(void){
            cout<<"The value of derived 1 is "<<deriv1<<endl
                <<"The value of derived 2 is "<<deriv2;
        }
};
int main(){
    derived harry(1, 2, 3, 4);
    harry.printData();
    return 0;
}