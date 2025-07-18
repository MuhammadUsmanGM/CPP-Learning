#include <iostream>
using namespace std;
template <class T1=int,class T2=float>
class Usman
{
    public:
        T1 a;
        T2 b;
        Usman(T1 x,T2 y){
            a = x;
            b = y;
        }
        void display(){
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
        }
};
int main(){
    Usman <>u(4,4.46); //<>this can be specified by choice but if not it will use default one
    u.display();
}