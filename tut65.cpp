#include<iostream>
#include<map>
#include<string>
using namespace std;

//Map is an associative array
int main(){
    map <string, int> markmap;
    markmap["saiman"] = 69;
    markmap["krsna"] = 80;
    markmap["chuck"] = 90;

    markmap.insert({{"undertaker", 169}, {"kane", 169}});
    map <string, int> :: iterator iter;
    for ( iter = markmap.begin(); iter != markmap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }

    cout<<"the size is "<<markmap.size()<<endl; 
    cout<<"the count is "<<markmap.size()<<endl; 
    return 0;
}