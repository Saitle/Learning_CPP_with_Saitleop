#include<iostream>
using namespace std;

/* 
Initialization list in constructor syntax:
    constructor (argument list) : initialization section
    {
        assignement + other code;
    }
*/

class Test
{
    int a;
    int b;
public:
    //Test(int i, int j) : a(i), b(j)
    //Test(int i, int j) : a(i), b(i+j)
    //Test(int i, int j) : a(i), b(2 * j)
    //Test(int i, int j) : a(i), b(a+j)
    //Test(int i, int j) : b(j), a(i+b) ---> throws error as a is initialized before b
    Test(int i, int j) : a(i)
    {
        b = j;
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}
