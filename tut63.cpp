#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    cout<<"displaying this vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl; 
}
int main(){
    // ****** WAYS TO CREATE A VECTOR ******
    vector<int> vec1; // ZERO LENGTH VECTOR
    vector<int> vec2(4); //INTEGER VECTOR OF 4 ELEMENT
    vector<char> vec3(3); // CHARACTER VECTOR OF 4 ELEMENT
    vector<int> vec4(2, 6); // 2 ELEMENT OF VECTOR 6
    display(vec1);
    display(vec3);
    vec3.push_back('69');
    display(vec4);
    cout<<vec4.size()<<endl;
    int element, size=5;
    // cout<<"enter size of your vector: ";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"enter the element to add to this vector:  ";
    //     cin>>element;
    //     vec1.push_back(element);
        
    // }
    //vec1.pop_back();
    // display(vec1);
    //     vector<int> :: iterator iter = vec1.begin();
    //     vec1.insert(iter+1, 566);
    //     display(vec1);
        
    return 0;
} 
