#include <iostream>
using namespace std;
//constructor with default arguments
class Simple
{
    int data1;
    int data2;
    int data3;
public:
    Simple(int a, int b = 0, int c = 0){//default arguments are used to initialize the data members of the class
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void display(){
        cout<<"The value of data1, data2 and data3 is "<<data1<<", "<<data2<<" and "<<data3<<endl;
    }
};

int main()
{
    Simple s1(1);
    s1.display();
    return 0;
}