#include<iostream>
using namespace std;

class Employ
{
    private:
        int a, b, c;
    public:
        int fo, e;
        void setdata(int a1, int b1, int c1); //declaration
        void getdata(){
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of e is "<<e<<endl;
        }


};

void Employ :: setdata(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}
main(){
    Employ saiman;
    //saiman.a = 00 --> will throw error as defined private
    saiman.e = 10;
    saiman.fo = 80;
    saiman.setdata(2, 3, 6);
    saiman.getdata(); 
    return 0;
}
