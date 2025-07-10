// using private visibility for inheritance
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

class Car : private Vehicle
{
    private:
        string name;
    public:
        void getter(string n){
            name = n;
        }
        void input1();
        string data3();
        int data4();
        string data5();
        ~Car(){
            cout<<"Destructor of car class is called..."<<endl;
        }
};
void Car :: input1(){
    input();
    cout<<"Enter name of vehicle: ";
    cin>>name;
}
string Car :: data3(){
    return name;
}
int Car :: data4(){
    return data1();
}
string Car :: data5(){
    return data2();
}

class ElectricCar : private Car
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
    input1();
    cout<<"Enter purchase id: ";
    cin>>id;
}
void ElectricCar :: display(){
    cout<<"Model of Vehicle: "<<data4()<<endl;
    cout<<"Type of Vehicle: "<<data5()<<endl;
    cout<<"Name of Vehicle: "<<data3()<<endl;
    cout<<"Purchase id of vehicle: "<<id<<endl;
}

int main(){
    ElectricCar ec;
    ec.input2();
    ec.display();
}