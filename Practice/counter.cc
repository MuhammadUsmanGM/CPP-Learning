#include <iostream>
using namespace std;
class Counter
{
    private:
        static int count;
    public:
        Counter(){
            count++;
        }
        static int display(){
            return count;
        }
};
int Counter :: count = 0;
int main(){
    Counter obj1;
    Counter obj2;
    Counter obj3;
    cout<<"The static counter value for object creation is : "<<Counter::display()<<endl;
    Counter obj4;
    cout<<"The updated value of counter for obj 4 is : "<<Counter :: display()<<endl;
}