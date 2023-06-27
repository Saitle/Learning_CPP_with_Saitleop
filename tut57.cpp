#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    fstream out;
    out.open("sample55.txt");
    out<<"this is me OH HELL YESS";
    out.close();

    ifstream in;
    string st;
    in.open("sample60.txt");
    //in>>st;
    while (in.eof()==0)
    {
        getline(in, st);
        cout<<st<<endl;
    }
    

    return 0;
}