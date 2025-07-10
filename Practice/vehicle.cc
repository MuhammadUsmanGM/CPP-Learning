// using public visibility for inheritance
#include <iostream>
using namespace std;
class Vehicle
{
    int model;
    string type;
    public:
        void setter(int m,string t){
            model = m;
            type = t;
        }
        void input();
        int data1();
        string data2();
        ~Vehicle(){
            cout<<"Destructor of Vehicle class is called..."<<endl;
        }
};
void Vehicle :: input(){
    cout<<"Enter Vehicle model: ";
    cin>>model;
    cout<<"Enter type of vehicle: ";
    cin>>type;
}
int Vehicle :: data1(){
    return model;
}
string Vehicle :: data2(){
    return type;
}

class Car : public Vehicle
{
    private:
        string name;
    public:
        void getter(string n){
            name = n;
        }
        void input1();
        string data3();
        ~Car(){
            cout<<"Destructor of car class is called..."<<endl;
        }
};
void Car :: input1(){
    cout<<"Enter name of vehicle: ";
    cin>>name;
}
string Car :: data3(){
    return name;
}

class ElectricCar : public Car
{
    private:
        int id;
    public:
        void getter(int i){
            id = i;
        }
        void input2();
        void display();
        ~ElectricCar(){
            cout<<"Destructor for class ElectricCar is called..."<<endl;
        }
};
void ElectricCar :: input2(){
    cout<<"Enter purchase id: ";
    cin>>id;
}
void ElectricCar :: display(){
    cout<<"Model of Vehicle: "<<data1()<<endl;
    cout<<"Type of Vehicle: "<<data2()<<endl;
    cout<<"Name of Vehicle: "<<data3()<<endl;
    cout<<"Purchase id of vehicle: "<<id<<endl;
}

int main(){
    ElectricCar ec;
    ec.input();
    ec.input1();
    ec.input2();
    ec.display();
}