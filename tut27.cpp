#include<iostream>
using namespace std;
//Forward declaration
class complex;
class calc{
    public:
        int add(int a, int b){
            return (a+b);
        }
        int sumrealcomplex(complex, complex);  
        int sumcompComplex(complex, complex);
};

class complex{
    int a, b;
     
     //individual declaration funcs as friend
        friend int calc::sumrealcomplex(complex, complex);
        friend int calc::sumcompComplex(complex, complex);
    //declaring entire calc as friend
    friend class calc;
     public:
        void setnum(int n1, int n2){
            a = n1;
            b = n2;
        }

        void printNum(){
            cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

 int calc :: sumrealcomplex(complex o1, complex o2){
            return (o1.a+o2.a); 
        }

 int calc :: sumcompComplex(complex o1, complex o2){
            return (o1.b+o2.b);
 }

int main(){
    complex o1,o2;
    o1.setnum(1, 4);
    o2.setnum(5, 6);

    calc jodo;
    int res = jodo.sumrealcomplex(o1,o2);
    cout<<"the sum of real part of o1 and o2 is "<< res<<endl;

    int resc = jodo.sumcompComplex(o1,o2);
    cout<<"the sum of complex part of o1 and o2 is "<<resc<<endl;
    return 0;
}