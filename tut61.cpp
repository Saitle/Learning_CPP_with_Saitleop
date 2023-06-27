#include<iostream>
using namespace std;

// int funcavg(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

// int funcavg1(int a, float b){
//     float avg = (a+b)/2.0;
//     return avg;
//}
template<class T1, class T2>
float funcavg(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}
int main(){
    float a;
    a = funcavg(70, 69);
    cout<<a<<endl;
    return 0;
}