#include<iostream>
using namespace std;

//Base class
class employee{
    public:
        int id;    
        float salary;
        employee(int inpId){
            id = inpId;
            salary = 34000;
        }

        employee(){}

};
//Derived class syntax
/*class {{Derived class-name}}:{{visibility mode}} {{Base-class-name}}
{
    class members/methods/etc...
}
*/

//Creating a derived class from base class

//Default visibility mode is private
//1) Public visibility mode: Public members of the Base class becomes Public members of the Derived class
//2) Private visibility mode: Public members of the Base class becomes Private members of the Derived class
//3) Private members are never inherited

class programmer : public employee{
    public:
        int langcode;
        programmer(int inpId){
            id = inpId;
            langcode = 9;
        }
        
        void getdata(){
            cout<<id<<endl;
        }
};

int main(){
    employee harry(1), rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer skillep(1);
    cout<<skillep.langcode<<endl;
    skillep.getdata();
    return 0;
}