#include <iostream>
using namespace std;
//initialization list in constructor
/*syntax 
constructor(argument):initialization-section:
{code}*/
class Test{
    public:
        int a,b;
        Test(int i,int j) : a(i), b(a*j)//this is how initialization occurs in constructor
        {
            cout<<"Constructor Called..."<<endl;
            cout<<"value of a is : "<<a<<endl;
            cout<<"value of b is : "<<b<<endl;
        }
};
int main(){
    Test t(2,9);
}