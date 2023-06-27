#include<iostream>
#include<list>

using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for ( it = lst.begin(); it!=lst.end(); it++)
    {
        cout<< *it<<" ";
    }
    cout<<endl;
    
}
int main(){
    // 6, 8, 9
    list<int> list1; //list of 0 length
    //list<int> list2(7); //empty list of length 7 elements
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    display(list1);

    // Removing items from a list
    // list1.pop_front();
    // list1.pop_back();
    // list1.remove(9);
    // display(list1);

    // sorting a list
    list1.sort();
    display(list1);
    list <int> list2(3);
    list <int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    display(list2);
    list1.merge(list2);
    cout<<"list 1 after merging with list2";

    //Reversing the list
    list1.reverse();
    display(list1);
    return 0;
}