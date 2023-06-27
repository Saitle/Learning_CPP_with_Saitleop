#include<iostream>
using namespace std;

int count = 0;
class num{
    public:
    num(){
        count++;
        cout<<"This is the time when the constructor count is called"<<count<<endl;

    }
    ~num(){
        cout<<"This is the time when destructor count is called"<<endl;
        count--;
    }
};
//Destructor never takes a value or returns it #sigma
int main(){
    cout<<"We are entering our main function now"<<endl;
    cout<<"Creating object n1"<<endl;
    num n1;
    {
        cout<<"Entering block"<<endl;
        cout<<"Entering two more objects"<<endl;
        num n2, n3;
        cout<<"exiting block....."<<endl;

    }
    cout<<"Back to main"<<endl;
    return 0;
}
