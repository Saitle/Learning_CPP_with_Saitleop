#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    //Function Objects:Function wrapped in a class so that it is available an object
    int arr[] = {1, 2, 3, 4, 5 ,6};     
    sort(arr, arr+6);
    sort(arr, arr+6, greater <int>());
    
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}