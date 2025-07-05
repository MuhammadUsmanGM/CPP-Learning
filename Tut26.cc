#include <iostream>

using namespace std;

//Default constructor & Parameterized constructor
class Complex{
    int a;
    int b;
    public:
        Complex(int, int);
        void printNum(){
            cout<<"Your number is "<<a<<"  + "<<b<<"i"<<endl;
        }
};
//parameterized constructor
Complex :: Complex(int x, int y){
    a = x;
    b = y;
    cout<<"Hello from constructor"<<endl;
}
int main(){
    //implicit call
    Complex c(4, 6);
    //explicit call
    Complex d = Complex(5, 7);
    c.printNum();
    d.printNum();
    return 0;
}

