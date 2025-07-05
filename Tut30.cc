#include <iostream>
using namespace std;
//copy constructor
class Number{
    int a;
    public:
    Number(){
        a = 0;
    }
    Number(int num){
        a = num;
    }
    //when no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj){
        cout << "Copy constructor called!!!" << endl;
        a = obj.a;
    }
    void display(){
        cout << "The number for this object is " << a << endl;
    }
};
int main(){
    Number x, y, z(45);
    x.display();
    y.display();
    z.display();
    Number z1(z);
    z1.display();
    Number z2(z);
    z2.display();
    Number z3(y);
    z3.display();
    Number z4(z);
    z4.display();
    return 0;
}