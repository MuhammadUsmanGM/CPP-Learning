#include <iostream>
using namespace std;
class Academic
{
    protected:
        float physics;
        float maths;
        float english;
        float total_marks;
    public:
        void set_marks(float p,float m,float e,float t){
            maths = m;
            physics = p;
            english = e;
            total_marks = t;
        }
        void input(){
            cout<<"Enter the marks of Maths: ";
            cin>>maths;
            cout<<"Enter the marks of Physics: ";
            cin>>physics;
            cout<<"Enter the marks of English: ";
            cin>>english;
        }
        void total(){
            total_marks = english+maths+physics;
        }
        ~Academic(){cout<<"Academic Obj destroyed!"<<endl;}
};
class Sports
{
    protected:
        float sport;
    public:
        void set_marks1(float s){
            sport = s;
        }
        void input1(){
            cout<<"Enter marks in Sports: ";
            cin>>sport;
        }
        ~Sports(){cout<<"Sports Obj destroyed!"<<endl;}
};
class Result : public Academic,public Sports
{
    public:
        void display(){
            cout<<"-----Academics-----"<<endl;
            cout<<"Marks in Physics: "<<physics<<endl;
            cout<<"Marks in English: "<<english<<endl;
            cout<<"Marks in Maths: "<<maths<<endl;
            cout<<"Total in Academic: "<<total_marks<<endl;
            cout<<"\n-----Sports-----"<<endl;
            cout<<"Marks in Sports: "<<sport<<endl;
            cout<<"\n-----Total-----"<<endl;
            cout<<"Total score: "<<total_marks + sport<<endl;
        }
        ~Result(){cout<<"Result obj Destroyed!"<<endl;}
};
int main(){
    Result r1;
    r1.input();
    r1.total();
    r1.input1();
    r1.display();
}
