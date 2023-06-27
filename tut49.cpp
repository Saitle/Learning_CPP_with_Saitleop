#include<iostream>
using namespace std;

class a{
    int a;
    public:
        //a & setdata(int a)
        void setdata(int a){
            this->a = a;
            //return *this
        }
        void getdata(void){
            cout<<"the value of data is "<<a;
        }
};
int main(){
    a a;
    a.setdata(69);
    a.getdata();
    return 0;
}