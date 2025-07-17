#include <iostream>
using namespace std;
//Abstract Base class and pure virtual function
class Usman{
    protected:
        string title;
        float rating;
    public:
        Usman(string s,float r){
            title = s;
            rating = r;
        }
        virtual void display()=0;//this is how a pure virtual func is derived
}; //the class with pure virtual func is called abstract base class
class Video : public Usman
{
    protected:
        float videolength;
        public:
            Video(float v,string s,float r): Usman(s,r){
                videolength = v;
            }
            void display(){
                cout<<"Amazing with title "<<title<<endl;
                cout<<"Rating : "<<rating<<endl;
                cout<<"VideoLength : "<<videolength<<endl;
            }
};
class Text : public Usman
{
    protected:
        int words;
        public:
            Text(int w,string s,float r): Usman(s,r){
                words = w;
            }
            void display(){
                cout<<"Amazing with title & text "<<title<<endl;
                cout<<"Rating of text: "<<rating<<endl;
                cout<<"Words : "<<words<<endl;
            }
};
int main(){
    string title;
    float rating,vlen;
    int words;

    //Video
    title = "Tutorial";
    vlen = 4.56;
    rating = 9.8;
    words = 189;

    Video dj(vlen, title, rating);
    Text tx(words, title, rating);
    dj.display();
    tx.display();

    Usman* tut[2];
    tut[0] = &dj;
    tut[1] = &tx;

    tut[0]->display();
    tut[1]->display();
}