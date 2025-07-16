#include <iostream>
using namespace std;
//constructor in derived class
class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Constructor of base1 is called..."<<endl;
        }
        void printData(){
            cout<<"THe value of data is "<<data1<<endl;
        }
};
class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Constructor of base2 is called..."<<endl;
        }
        void printData1(){
            cout<<"THe value of data2 is "<<data2<<endl;
        }
};
class Derived : public Base1,public Base2{
    int derived1,derived2;
    public:
        Derived(int a,int b,int c,int d) : Base1(a), Base2(b) {
            derived1 = c;
            derived2 = d;
            cout<<"Constructor of derived class is called.."<<endl;
        }
        void printDataDerived(){
            printData();
            printData1();
            cout<<"The value of derived1 is "<<derived1<<endl;
            cout<<"The value of derived1 is "<<derived2<<endl;
        }
};
int main(){
    Derived d1(1,2,3,4);
    d1.printDataDerived();
}