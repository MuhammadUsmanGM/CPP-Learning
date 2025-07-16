#include <iostream>
using namespace std;
class Person
{
    public:
        void greet(){cout<<"Hello from Person..."<<endl;}
        ~Person(){cout<<"Person Object destroyed..."<<endl;}
};
class Employee : virtual public Person
{
    public:
        ~Employee(){cout<<"Employee Object destroyed..."<<endl;}
};
class Student : virtual public Person
{
    public:
        ~Student(){cout<<"Student Object Destroyed..."<<endl;}
};
class Intern : public Employee,public Student
{
    public:
        ~Intern(){cout<<"Intern Object Destroyed..."<<endl;}
};
int main(){
    Intern n;
    n.greet();
}