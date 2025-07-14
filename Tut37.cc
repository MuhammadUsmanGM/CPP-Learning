#include <iostream>
using namespace std;
//Ambiguity Resolution in inheritance
class Base1
{
    public:
        void greet(){
            cout<<"HOw are you?"<<endl;
        }
};
class Base2
{
    public:
    void greet(){
        cout<<"what's going on?"<<endl;
    }
};
class Derived : public Base1, public Base2
{
    public:
    void greet(){Base1::greet();}//this how ambiguity is resolved
};
int main(){
    Base1 b1;
    Base2 b2;
    b1.greet();
    b2.greet();
    Derived d1;
    d1.greet();
}