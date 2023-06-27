#include<iostream>
#include<fstream>

using namespace std;
/* Useful classes for working with files:-

1) fstreambase
2) ifstream --> derived from fstreambase
3) ofstream --> derived from fstreambase
*/ 

// in order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

// Using the constructor
// Using the member function open() of the class

int main(){
    string st = "saiman bhaiiii";
    string st2;
    //opening files using constructor and writing it
    ofstream out("sample55.txt");//write operation
    out<<st;

    //opening files using constructor and reading it
    ifstream in("sample55b.txt");//read operation
    //in>>st2;
    getline(in, st2);
    cout<<st2;
    return 0;
}