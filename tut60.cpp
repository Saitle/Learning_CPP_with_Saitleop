#include<iostream>
using namespace std;

template<class T1=int, class T2=float, class T3=char>
class saitleop{
    public:
    T1 a;
    T2 b;
    T3 c;
    saitleop(T1 x, T2 y, T3 z){
        a = x;
        b = y;
        c = z;
    }

    void display(void){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
    } 
 
};
int main(){
    saitleop<> h(4, 6.4, "oh yeah");
    h.display();
    cout<<endl;

    saitleop<float, char, char> g(7.1, "c", "d");
    g.display();
    return 0;
}