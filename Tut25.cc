#include <iostream>
using namespace std;
//constructor
/*Constructor is a special number func with same name as of class.
used to initialize obj of class
it is automatically invoked(called) as obj is created because it has the same name as class
the constructor which doesn't accept any parameter is called default constructor
it should be declared in public section of class*/
class Complex
{
    int a;
    int b;
    public:
        Complex(void);//declaration of constructor
        void printNum(){
            cout<<"Your number is "<<a<<"  + "<<b<<"i"<<endl;
        }
};

Complex :: Complex(void){
    a = 0;
    b = 0;
    cout<<"Hello from constructor"<<endl;
}
int main(){
    Complex c;
    c.printNum();
}