#include <iostream>
using namespace std;

/* Syntax for multiple inheritance
class derived : visibility-mode base1, visibility-mode base2{
   class body
};
*/
class bas1
{
protected:
    int bas1int;

public:
    void set_bas1int(int a)
    {
        bas1int = a;
    }
};

class bas2
{
protected:
    int bas2int;

public:
    void set_bas2int(int a)
    {
        bas2int = a;
    }
};
class derived : public bas1, public bas2
{
public:
    void show()
    {
        cout << "The value of base 1 integer is " << bas1int << endl;
        cout << "The value of base 2 integer is " << bas2int << endl;
        cout << "Sum is " << bas1int + bas2int << endl;
    }
};

/*The inherited derived class will look something like this:
Data members:
    bas1int --> protected
    bas2int --> protected
*/

int main()
{
    derived saiman;
    saiman.set_bas1int(74);
    saiman.set_bas2int(76);
    saiman.show();
    return 0;
}