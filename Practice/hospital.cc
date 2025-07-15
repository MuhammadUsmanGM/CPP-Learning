#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;
class Person
{
    protected:
        string name;
        int age;
    public:
        void getter(string n,int a){
            name = n;
            age = a;
        }
        void input(){
            cout<<"Enter your name : ";
            getline(cin,name);
            transform (name.begin(),name.end(),name.begin(), ::toupper);
            cout<<"Enter you age : ";
            cin>>age;
        }
        void display(){
            cout<<"Person: "<<name<<", "<<age<<" years old"<<endl;
        }
};
class Doctor : public Person
{
    protected:
        string specialization;
        int yearOfExperience;
    public:
        void getter(string s,int y){
            specialization = s;
            yearOfExperience = y;
        }
        void input1(){
            input();
            cout<<"Enter your specialization : ";
            cin>>specialization;
            cin.ignore();
            cout<<"Enter the year of experience you have : ";
            cin>>yearOfExperience;
        }
        void display1(){
            display();
            cout<<"Doctor: "<<specialization<<", "<<yearOfExperience<<" years of experience"<<endl;
        }
};
class Surgeon : public Doctor
{
    protected:
        string surgeryType;
    public:
        void getter(string st){
            surgeryType = st;
        }
        void input2(){
            input1();
            cout<<"Enter the surgery type: ";
            cin>>surgeryType;
            cin.ignore();
        }
        void display2(){
            display1();
            cout<<"Surgeon: "<<surgeryType<<endl;
        }
};

class MedicalRecord
{
    protected:
        string disease;
        int date;
    public:
        void getter(string ds,int da){
            disease = ds;
            date = da;
        }
};
class Patient : public Person,public MedicalRecord
{
    public:
        void input3(){
            cout<<"Enter patients name: "<<name;
            cin>>name;
            cout<<"Enter disease: "<<disease;
            cin>>disease;
            cout<<"Enter date: ";
            cin>>date;
        }
        void display3(){
            cout<<"Patient: Name: "<<name<<", Disease: "<<disease<<", Admitted: "<<date<<"-Jul-2025"<<endl;
        }
};

int main(){
    Surgeon s1;
    s1.input2();
    s1.display2();

    Patient p1;
    p1.input3();
    p1.display3();
}