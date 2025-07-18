#include <iostream>
using namespace std;
//template with multi parameter
template <class T1,class T2>
class MyClass
{
    public:
        T1 data1;
        T2 data2;
        MyClass(T1 a,T2 b){
            data1 = a;
            data2 = b;
        }
        void display(){
           cout<<this->data1<<"  "<<this->data2; 
        }
};
int main(){
    MyClass<string,char> obj("THis is a string",'g');
    obj.display();
}