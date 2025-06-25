#include <iostream>
using namespace std;
//more on friend func 

class Y;
class X{
    int data;
    public:
        void setData(int d){
            data = d;
        }
        friend void add(X,Y);
};

class Y
{
    int num;
    public:
        void setData(int d){
            num = d;
        }
        friend void add(X,Y);
};
void add(X o1,Y o2){
    cout<<"summing datas of x & y object gives me "<<o1.data + o2.num<<endl;
}
int main(){
    X a;
    Y b;
    a.setData(3);
    b.setData(5);
    add(a,b);
}



