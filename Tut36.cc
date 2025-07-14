#include <iostream>
using namespace std;
//multiple inheritance
class Base1
{
    protected:
        int base1int;
    public:
        void set_base1int(int a){
            base1int = a;
        }
};
class Base2
{
    protected:
        int base2int;
    public:
        void set_base2int(int a){
            base2int = a;
        }
};
class Derived : public Base1, public Base2
{
    public:
        void show(){
            cout<<"The value of Base1 is "<<base1int<<endl;
            cout<<"The value of Base2 is "<<base2int<<endl;
            cout<<"The sum of Base1 and Base2 int is "<<base1int+base2int<<endl;
        }
};
int main(){
    Derived d;
    d.set_base1int(23);
    d.set_base2int(27);
    d.show();
}