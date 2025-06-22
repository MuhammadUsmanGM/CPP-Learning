#include <iostream>
using namespace std;
//Arrays of object & Passion Objects as Function Argument
class Employ{
    int id;
    int salary;
    public:
        void setId(void){
            salary = 100000;
            cout<<"Enter Employ ID: ";
            cin>>id;
        }
        void getId(void){
            cout<<"The ID of this employ is "<<id<<" with salary of "<<salary<<" per month."<<endl;
        }
};

class Complex{
    int a;
    int b;
    public:
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }
        void bySum(Complex o1,Complex o2){//objects are passed as argument
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void print(void){
            cout<<"Complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};
int main(){
    Employ usman,ali,hussnain;
    usman.setId();
    usman.getId();

    Employ fb[3];
    for (int i=0;i<3;i++){
        fb[i].setId();
        fb[i].getId();
    }


    Complex c1, c2, c3;
    c1.setData(1,2);
    c1.print();
    c2.setData(3,4);
    c2.print();
    c3.bySum(c1,c2);
    c3.print();
}