#include<iostream>
using namespace std;
int main(){
    int marks[] = {29, 13, 41, 27, 30};
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;

    int Mamarks[4];
    Mamarks[0]=839;
    Mamarks[1]=8900;
    Mamarks[2]=2389;

    cout<<"Marks are"<<endl;
    cout<<Mamarks[0]<<endl;
    cout<<Mamarks[1]<<endl;
    cout<<Mamarks[2]<<endl;
    // for ( int i = 0; i < 4; i++)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    // }

    //Doing the same using while-loop
    // int i = 0;
    // while ( i < 4)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }

    //Pointers and arrays
    int *p = marks;
    cout<<"the value of marks[1] is "<< *p<<endl;
    cout<<"the value of marks[2] is "<< *(p+1)<<endl;
    cout<<"the value of marks[3] is "<< *(p+2)<<endl;
    cout<<"the value of marks[4] is "<< *(p+3)<<endl;
    cout<<"the value of marks[100] is "<< *(p+10)<<endl;
    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    cout<<*(++p)<<endl;
    cout<<*p<<endl;
    
    
    return 0;
}