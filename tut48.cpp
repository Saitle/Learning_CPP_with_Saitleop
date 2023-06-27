#include<iostream>
using namespace std;

class shop{
    int id;
    float proce;
    public:
        void setdata(int a, float b){
            id = a;
            proce = b;
        }
        void getdata(void){
            cout<<"item id is "<<id<<endl
                <<"the price of "<<id<<" is"<<proce;
        }
};

//     1, 2, 3
//     ^
//     |
//     |
//    ptr
//    ptrtmp does the same work as ptr as agar dusre loop mai lagaya to error aayga
int main(){
    int size = 2;
    // int *ptr = &size
    // shop *ptr = new int[34]
    //General store item
    //veg item
    //food item
    shop *ptr = new shop [size];
    shop *ptrtmp = ptr;
    int p, q, i;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter id of the item "<<i+1<<endl;
        cin>>p>>q;
       // (*ptr).setdata(3, 4);
       ptr->setdata(45, 46);
       ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter price of the item "<<i+1<<endl;

    }
      for (i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrtmp->getdata();
        ptrtmp++;
    }

    return 0;
}