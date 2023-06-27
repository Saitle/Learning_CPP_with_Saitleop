#include<iostream>
#include<fstream>
using namespace std;


int main(){
    ofstream hout("sample55.txt");
    cout<<"enter your name here.. "<<endl;
    string name;
    cin>>name;
    
    //writing name to our file
    hout<<"my name is " + name;
    hout.close();

    ifstream hin("sample55.txt");
    string content;
    hin>>content;
    cout<<"The content of this file is "<<content;
    return 0;
}