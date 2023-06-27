#include <iostream>
#include <string>
using namespace std;

class Binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
}; 


void Binary :: read(void){
    cout<<"Enter a binary number" << endl;
    cin >> s;
}

void Binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"incorrect binary...";
            exit(0);
        }
     }
}

void Binary :: ones(void){
    for ( int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i) = '1';
        }

        else
        {
            s.at(i)='0';
        }
    }
}

void Binary :: display(void){
    cout<<"Displaying your number"<<endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
}


int main(){
    // OOPs --> Object Oriented Programming
    // C++ --> Initially called C with classes by Stroustroup
    //class --> extension of class in C
    //structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions
Binary b;
b.read();
b.chk_bin();
b.ones();
b.display();




return 0;
}