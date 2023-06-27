#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;
    public:
        void Setdata(void){
            cin>>id;
            count++;
        }
        void GetData(void){
            cout<<"The id of this employee is "<<id<<"and this is employee number "<<count<<endl;
            
        }
        static void getcount(void){
            cout<<"the value of count is "<<count<<endl;
        }
};
int Employee::count;  //default value 0

int main(){
    Employee harry,saiman,undertaker;
    // harry.id = 1; // --> not possible as both are private objects by default
    // harry.count = 3;
    harry.Setdata();
    harry.GetData();
    Employee::getcount();

    saiman.GetData();
    saiman.Setdata();
    Employee::getcount();

    undertaker.GetData();
    undertaker.Setdata();
    Employee::getcount();
    return 0;
}