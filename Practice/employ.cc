#include <iostream>
#include <string>
using namespace std;
class Employ
{
    private:
        string name;
        int id;
    public:
        void getter(int i,string n){
            name = n;
            id = i;
        }
        void input();
        string data1();
        int data2();
};
void Employ :: input(){
    cout<<"Enter Your Name: ";
    
    getline(cin,name);
    cout<<"Enter your employ id: ";
    cin>>id;
    cin.ignore();
}
string Employ :: data1(){
    return name;
}
int Employ :: data2(){
    return id;
}
class Programmer : private Employ{
    private:
        int salary;
    public:
        Programmer(){
            salary =  100000;
        }
        void display();
};
void Programmer :: display(){
    input();
    cout<<"-----Programer-----"<<endl;
    cout<<"Name : "<<data1()<<endl;
    cout<<"Employ id: "<<data2()<<endl;
    cout<<"Employ Salary: "<<salary<<endl;
}
class Manager : private Employ{
    private:
        int salary;
    public:
        Manager(){
            salary = 100000;
        }
        void display();
};
void Manager :: display(){
    input();
    cout<<"-----Manager-----"<<endl;
    cout<<"Name : "<<data1()<<endl;
    cout<<"Employ id: "<<data2()<<endl;
    cout<<"Employ Salary: "<<salary<<endl;
}

int main(){
    Programmer p1;
    p1.display();
    Manager m1;
    m1.display();
}