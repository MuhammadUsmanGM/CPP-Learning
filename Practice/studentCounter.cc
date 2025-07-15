#include <iostream>
using namespace std;
static int counter=0;
class Student
{
    public:
        Student(){
            counter++;
        }
        ~Student(){cout<<"Destructor for Counter class is called..."<<endl;}
};
int main(){
    Student s1;
    Student s2;
    Student s3;
    Student s4;
    cout<<"Student number: "<<counter<<endl;
}