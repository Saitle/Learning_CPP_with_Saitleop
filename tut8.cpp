#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"tell me your age: ";
    cin>>age;
    //Selection control structure ---> If-else ladder
    // if((age<18) && (age>0)){
    //     cout<<"You cannot come to my party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You can come if you are a hutiya"<<endl;
    // }
    // else if (age<1){
    //     cout<<"You are not born yet";
    // }
    // else{
    //     cout<<"You can come to the party";
    // }

    //Selection control structure ---> Switch-case
    switch (age)
    {
    case 18:
        cout<<"You are 18";
        break;

    case 22:
        cout<<"You are 18";
        break;
    
    case 1:
        cout<<"You are 18";
        break;
    
    default:
        cout<<"No special cases found";
        break;
    }


    return 0;
}