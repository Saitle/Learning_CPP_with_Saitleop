#include<iostream>
using namespace std;

class employee{
    int id;
    int salary;
    public:
        void setid(void){
            salary = 122;
            cout<<"enter id"<<endl;
            cin>>id;
        }

        void getid(void){
            cout<<"the id of this employee is "<<id<<endl;
        }
};
int main(){
    //employee harry,saiman,braun;
    // harry.setid();
    // harry.getid();

    // saiman.getid();
    // saiman.setid();
    employee google[4];
    for (int i = 0; i < 4; i++)
    {
        google[i].setid();
        google[i].getid();
    }
    return 0;
}