#include<iostream>
#include<cstring>
using namespace std;

class cwh{
    protected:
        string title;
        float rating;
    public:
        cwh(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display(){};
};
class cwhvid:public cwh{
    int vidlength;
    public:
        cwhvid(char *s, float r, int vl ):cwh(s, r){
            vidlength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title"<<title<<endl;
            cout<<"The rating out of 5 is "<<rating<<endl;
            cout<<"The lenth of video is "<<vidlength<<" minutes"<<endl;
        }
};
class cwhtext:public cwh{
    int words;
    public:
        cwhtext(string s, float r, int wc ):cwh(s, r){
            words = wc;
        }
        void display(){
            cout<<"This is an amazing video with title"<<title<<endl;
            cout<<"The rating out of 5 is "<<rating<<endl;
            cout<<"The lenth of video is "<<words<<" minutes"<<endl;
        }
};
int main(){
    string title;
    float rating, vlen;
    int words;

    //Next CWH video tutorial JavaScript
    title = "JS vid tutorial";
    vlen = 4.56;
    rating = 4.89;
    cwhvid jsvid(title, rating, vlen);
    jsvid.display();
    return 0;

    //Next CWH text tutorial JavaScript
    title = "JS text tutorial";
    words = 433;
    rating = 4;
    cwhtext jstext(title, rating, words);
    jstext.display();

    cwh *tuts[2];
    tuts[0] = &jsvid;
    tuts[1] = &jstext;

    tuts[0]->display();
    tuts[1]->display();
}
