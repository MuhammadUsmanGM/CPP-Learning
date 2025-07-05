#include <iostream>
using namespace std;
//constructor overloading is a feature that allows a class to have multiple constructors with different parameters
class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x){
        a = x;
        b = 0;
    }
    Complex(){
        a = 0;
        b = 0;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
    friend Complex sumComplex(Complex o1, Complex o2);
};
int main()
{
    Complex c1(1, 4);
    c1.printNumber();
    Complex c2(5, 8);
    c2.printNumber();
    Complex c3(5);
    c3.printNumber();
    Complex c4;
    c4.printNumber();
    return 0;
}