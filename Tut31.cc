#include <iostream>
using namespace std;
//destructor in c++
//destructor never takes argument never return value
int count = 0;
class Num
{
    public:
        Num(){
            count++;
            cout<<"THis is time when constructor is called "<<count<<endl;
        }
        //this is a destructor
        ~Num(){
            cout<<"THis is time when destructor is called "<<count<<endl;
            count--;
        }
    };
int main(){
    cout<<"we are inside main func"<<endl;
    cout<<"Creating 1st obj"<<endl;
    Num n1;
    {
        cout<<"Entering block"<<endl;
        cout<<"creating two more objs"<<endl;
        Num n2,n3;
        cout<<"exiting block"<<endl;
    }
    cout<<"Back to main"<<endl;
    
}
