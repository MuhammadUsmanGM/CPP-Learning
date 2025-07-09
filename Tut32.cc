#include <iostream>
using namespace std;
//Inheritance

//Base Class
class Employ
{
    public:
    double salary;
    int id;
    Employ(int inpId){
            id = inpId;
            salary = 1000000;
        }
    Employ(){}
};
//Derived class
//visibility mode
//1.private mode:public member of base class becomes private of derived class
//1.public mode:public member of base class remains public in derived class
//private members of base class never inherited
class Programmer :public Employ //default visibility mode is private
{
    public:
        Programmer(int id){
            id = 12;
        }
        int language = 9;
};
int main(){
    Employ usman(1), ali(2);
    Programmer f(1);
    // The member 'id' is inaccessible due to private inheritance.
    // We will print the 'language' member instead, which is public.
    cout << f.id;
}