#include<iostream>
using namespace std;
/*1 + 2i
 7 + 8i  *COMPLEX NUMBERS* 
-------
 8 + 10i*/

class complex{
    int a, b;
    // Below lines allows the non-member functions sumComplex is allowed to do anything with my private members
    friend complex sumcomplex(complex o1, complex o2);
    public:
        void setnum(int n1, int n2){
            a = n1;
            b = n2;
        }

        void printNum(){
            cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
        }

    
};
complex sumcomplex(complex o1, complex o2){
    complex o3;
    o3.setnum((o1.a + o2.a), (o1.b + o2.b ));
    return o3;
}
int main(){
    complex c1, c2, sum;
    c1.setnum(1,2);
    c1.printNum();

    c2.setnum(7,8);
    c2.printNum();

    sum = sumcomplex(c1, c2);
    sum.printNum();
    return 0;
}
/*  Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/