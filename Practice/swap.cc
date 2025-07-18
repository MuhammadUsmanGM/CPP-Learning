#include <iostream>
using namespace std;
template <class T>
class SwapTemp
{
    public:
    T a;
    T b;
    void setValues(T val1, T val2) {
        a = val1;
        b = val2;
    }
    void display(){
        cout<<"\nThe 1st value before swap is : "<<a<<endl;
        cout<<"The 2st value before swap is : "<<b<<endl;
    }
    void swap(){
        T temp = a;
        a = b;
        b = temp;
    }
    void display1(){
        cout<<"\nThe 1st value after swap is : "<<a<<endl;
        cout<<"The 2st value after swap is : "<<b<<endl;
    }
};
int main(){
    SwapTemp <int>t1;
    t1.setValues(43,56);
    t1.display();
    t1.swap();
    t1.display1();
    SwapTemp <char>t2;
    t2.setValues('h','k');
    t2.display();
    t2.swap();
    t2.display1();
    SwapTemp <float>t3;
    t3.setValues(34.4,56.4);
    t3.display();
    t3.swap();
    t3.display1();
}
