#include <iostream>
using namespace std;
//Ambiguity Resolution in inheritance
class B{
    public:
    void say(){
        cout<<"Hello world..."<<endl;
    }
};
class D : public B{
    public:
    void say(){
        cout<<"Hello mars..."<<endl;
    }
};
int main(){
    D d;
    d.say();
}