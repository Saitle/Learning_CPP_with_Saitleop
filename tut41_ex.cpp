#include<iostream>
#include<math.h>

using namespace std;
class SimpCalc{
    int num1, num2;
  public:
        int sum;
        int sub;
        int prod;
        int div;

        int perform_simp_calc(){
            cout<<"Enter number one "<<endl;
            cin>>num1;
            cout<<"Enter number two "<<endl;;
            cin>>num2;

            sum = num1+num2;
            sub = num1*num2;
            prod = num1-num2;
            div = num1/num2;

            return sum, sub, prod, div;
        }

        void display(){
            cout<<"sum of your following number will be "<<sum<<endl;
            cout<<"difference of your following number will be "<<sub<<endl;
            cout<<"product of your following number will be "<<prod<<endl;
            cout<<"quotient of your following number will be "<<div<<endl;
        }
};

class CompCalc{
    int num1, num2;
    public:
        int do_log;
        int squ;
        int do_sin;
        int power;
        int perform_comp_calc(){
            cout<<"Enter number 1 "<<endl;
            cin>>num1;
            cout<<"Enter number 2 "<<endl;
            cin>>num2;
            squ = sqrt(num1);
            power = pow(num1,num2);
            do_sin = sin(num2);
            do_log = log(num1);

            return squ, power, do_log, do_sin;
        }

        void display2(){
            cout<<"Power "<<power<<endl;
            cout<<"square "<<squ<<endl;
            cout<<"log "<<do_log<<endl;
            cout<<"sin "<<do_sin<<endl;
        }
};

class HybridCalc : public SimpCalc, public CompCalc{
};
int main(){
    HybridCalc calcs;
    calcs.perform_simp_calc();
    calcs.display();
    
    calcs.perform_comp_calc();
    calcs.display2();
    return 0;
}