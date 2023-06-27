#include<iostream>
using namespace std;

inline int product(int a ,int b){
    // static int c=0; //eexecutes once
    // c = c + 1; // c keeps changing
    return a*b;
}
float moneyRec(int curr_money, float factor=1.04){
    return curr_money * factor;
}

int main(){
    // int a,b;
    // cout<<"enter numbers: "<<endl;
    // cin>>a>>b;
    // cout<<"the product of the numbers is "<<product(a,b);
    int money = 100000;
    cout<<"If u have "<<money<<"Rs in your bank account, you will receive "<<moneyRec(money)<<" in your account"<<endl;
    cout<<"VIPs: If u have "<<money<<"Rs in your bank account, you will receive "<<moneyRec(money, 1.1)<<" in your account";

    return 0;
}