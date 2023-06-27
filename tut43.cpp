#include<iostream>
using namespace std;

//student --> test, sports [DONE]
//test, sports --> result

class student{
    protected:
        int roll;
    public:
        void setNum(int a){
           a = roll;
        }

        void print_num(void){
            cout<<"Your roll number is "<<roll<<endl;
        }
};

class test : virtual public student{
    protected:
        float math, physics;
    public:
        int setmarks(float m1, float m2){
            math = m1;
            physics = m2;
        }

        void print_marks(void){
            cout<<"Your result is here: "<<endl
                << "Maths "<<math<<endl
                << "Physics "<<physics<<endl;
        }
};

class sports : virtual public student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }

        void print_score(void){
            cout<<"Your PT score is "<<score<<endl;
        }
};

class result : public test, public sports{
    private:
        float total;
    public:
        void display(void){
            total = math + physics + score;
            print_num();
            print_marks();
            print_score();
            cout<<"Your total score is "<<total<<endl;
        }
};
int main(){
    result saiman;
    saiman.setNum(31);
    saiman.setmarks(74.5, 70.5);
    saiman.set_score(4.5);
    saiman.display();
    return 0;
}