#include <iostream>
using namespace std;
//virtual func
class BaseClass{
    public:
        int var1 = 8;
        virtual void display(){
            cout<<"Var1: "<<var1<<endl;
        }
};
class DerivedClass : public BaseClass{
    public:
        int var2 = 5;
        virtual void display(){
            cout<<"Var2: "<<var2<<endl;
            cout<<"Var1: "<<var1<<endl;
        }
};
int main(){
    BaseClass * base_ptr;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_ptr = &obj_derived;
    base_ptr->display();
}