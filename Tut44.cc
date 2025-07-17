#include <iostream>
using namespace std;
//THis pointer
class A
{
    int a;
    public:
        A & setData(int a){
            this->a = a;
            return *this;
        }
        void getData(){
            cout<<"THe value of a is "<<a<<endl;
        }
};
int main(){
    A a;
    a.setData(32).getData();
}