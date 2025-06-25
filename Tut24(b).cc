#include <iostream>
using namespace std;

class C2;
class C1
{
    int val1;

public:
    void getData(int v)
    {
        val1 = v;
    }
    void display()
    {
        cout << val1 << endl;
    }
    friend void swap(C1 &x, C2 &y);
};
class C2
{
    int val2;

public:
    void getData(int v)
    {
        val2 = v;
    }
    void display()
    {
        cout << val2 << endl;
    }
    friend void swap(C1 &x, C2 &y);
};

void swap(C1 &x, C2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    C1 oc1;
    C2 oc2;
    oc1.getData(4);
    oc2.getData(6);
    swap(oc1, oc2);
    // a func is called in a cout statement like this
    cout << "The value of oc1 after swap is ";
    oc1.display();
    cout << "The value of oc2 after swap is ";
    oc2.display();
}