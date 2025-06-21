#include <iostream>
using namespace std;
//classes and objects
/*syntax
class Name{
    private: 
        code
    public: 
        code
}
*/

class Employ
{
    private://info that cannot be accessed directly
        int a,b,c;
    public://info that can be accessed directly
        int d,e;
        void setData(int a1,int b1,int c1);//declared a function to tell the compiler that it will be initalized ahead
        void getData(){//getData to print value
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
            
        }
};
void Employ :: setData(int a1, int b1, int c1){//initialized the func that was declared in the class
    a= a1;
    b = b1;
    c = c1;
}
int main(){
    Employ usman;
    usman.d = 12;
    usman.e = 32;
    usman.setData(1,2,3);
    usman.getData();
}