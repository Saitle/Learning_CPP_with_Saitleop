#include<iostream>
using namespace std;

class base{
    protected:
        int a;
    private:
        int b;
};
/* For a protected member
                            Public Derivation      	Private Derivation    	Protected Derivation
Private members           	Not Inherited           Not Inherited           Not Inherited              
Protected members           Protected               Private                 Protected                    
Public members           	Public	                Private                 Protected      
*/

class derived : base{

};
int main(){
    base b;
    derived d;
    //cout<<d.a; ---> wont run as a is protected in both base derived class
    return 0;
}