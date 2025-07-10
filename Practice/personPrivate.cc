
//using visibility as private
#include <iostream>
using namespace std;
class Person
{
    string name;
    float age;
    public:
        void getter(string n,float a){
            name = n;
            age = a;
        }
        void input();
        string getdata1();
        float getdata2();
        ~Person(){
            cout<<"Destructor of person class is called..."<<endl;
        }
};
void Person :: input(){
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your age: ";
    cin>>age;
};
string Person :: getdata1(){
    return name;
}
float Person :: getdata2(){
    return age;
}
class Employ : private Person
{
    private:
        int employ_id;
    public:
        void getter(int e){
            employ_id = e;
        }
        void input1();
        void display();
        ~Employ(){
            cout<<"Destructor of employ class is called..."<<endl;
        }
};
void Employ :: input1(){
    input();
    cout<<"Enter your id: ";
    cin>>employ_id;
}
void Employ :: display(){
    cout<<"Name : "<<getdata1()<<endl;
    cout<<" Age : "<<getdata2()<<endl;
    cout<<"Employ_ID: "<<employ_id<<endl;
}

int main(){
    Employ pro;
    pro.input1();
    pro.display();
}