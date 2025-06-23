#include <iostream>
using namespace std;
// Friend func & member func
class Complex;
class Calculator
{
public:
    int sum(int a, int b)
    {
        return (a + b);
    }
    int add(Complex, Complex);
    int add1(Complex, Complex);
};

class Complex
{
    int a, b;
    //individually declaring func as friend
    friend int Calculator ::add(Complex, Complex);
    friend int Calculator ::add1(Complex, Complex);

    //declaring a whole class as friend
    friend class Calculator;

    //can be used as both

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int Calculator ::add(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::add1(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator cal;
    int res = cal.add(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int res2 = cal.add1(o1,o2);
    cout << "The sum of imaginary part of o1 and o2 is " << res2 << endl;
}