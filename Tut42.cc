#include <iostream>
using namespace std;
//pointers to objects and arrow operator
class Complex{
    int real,imaginary;
    public:
        void getdata(){
            cout<<"THe real part is "<<real<<endl;
            cout<<"THe imaginary part is "<<imaginary<<endl;
        }
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};
int main(){
    Complex c1;
    Complex *ptr0 = &c1;
    (*ptr0).setData(12,32);
    (*ptr0).getdata();

    Complex *ptr = new Complex;
    (*ptr).setData(1,3);
    (*ptr).getdata();

    //use of arrow operator
    //->(arrow operator)
    Complex *ptr1 = new Complex;
    ptr1->setData(1,32);
    ptr1->getdata();

    //array of objects
    Complex *ptr2 = new Complex[3];
    ptr2->setData(1,4);
    ptr2->getdata();
}