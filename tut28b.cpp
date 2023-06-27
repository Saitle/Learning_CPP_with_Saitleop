#include<iostream>
using namespace std;
class c2;
class c1{
    int val;
    friend void exchange(c1&, c2&);
    public:
        void intdata(int a){
            val = a;
        }

        void display(void){
            cout<<val<<endl;
        }
};

class c2{
    int val2;
    friend void exchange(c1&, c2&);
    public:
        void intdata(int a){
            val2 = a;
        }

        void display(void){
            cout<<val2<<endl;
        }
};

/*Trick to swap two numbers a and b
int temp = a;
a = b;
b = temp;
*/

void exchange(c1 &x, c2 &y){
    int temp = x.val;
    x.val = y.val2;
    y.val2 = temp;
}

int main(){
    c1 og1;
    c2 og2;

    og1.intdata(5);
    og2.intdata(10);

    exchange(og1, og2);
    cout<<"The value after swapping og1 occurs like: ";
    og1.display();
    cout<<"The value after swapping og2 occurs like:  ";
    og2.display();
    return 0;
}
