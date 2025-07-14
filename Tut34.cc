#include <iostream>
using namespace std;
//Protected access of member of parent class
class Base{
    protected://protected is like the private but it can be inherited in derived class
        int a;
    private:
        int b;
};
class Derived : protected Base //by deriving a class in protected mode can access 
{
    public:
        void go(){
            cout<<a;//access of protected member from parent class
        }
};
int main(){
    Base b;
    Derived d;
}