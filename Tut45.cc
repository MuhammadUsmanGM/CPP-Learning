#include <iostream>
using namespace std;
//Polymorphism in c++
class BaseClass{
    public:
        int var1;
        void display(){
            cout<<"Var1: "<<var1<<endl;
        }
};
class DerivedClass : public BaseClass{
    public:
        int var2;
        void display(){
            cout<<"Var2: "<<var2<<endl;
            cout<<"Var1: "<<var1<<endl;
        }
};
int main(){
    BaseClass * base_ptr;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_ptr = &obj_derived;
    base_ptr->display();//this will only call base call funcs
    base_ptr->var1 = 65;
    DerivedClass * derived_ptr;
    derived_ptr = &obj_derived;
}