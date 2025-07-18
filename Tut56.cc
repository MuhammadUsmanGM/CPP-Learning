#include <iostream>
using namespace std;
//member func template & overloading template func
template <class T>
class Usman{
    public:
        T data;
        Usman(T a){
            data = a;
        }
        void display();
};
template <class T>
void Usman<T> :: display(){
    cout<<data;
}

void func(int a){
    cout<<"1st one"<<a<<endl;
}
template <class T>
void func(T a){
    cout<<"template one"<<a<<endl;
}
int main(){
    Usman<float> h(5.65);
    h.display();

    func(4);
    return 0;
}