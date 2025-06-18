#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a = 43;
    cout<<"value of a is "<<a<<endl;
    a = 56;
    cout<<"value of a is "<<a<<endl;

    const int b = 43;
    cout<<"Value of b "<<b<<endl;
    // //we cannot change the value of variable declared with const in start

//manipulator

    int a = 3,b = 4,c = 6;
    cout<<setw(4)<<a<<endl;
    cout<<b<<setw(5)<<endl;
    cout<<c<<endl;



    //operator  precedence

    int a = 5,b = 3;
    int c = a*5+b;
    int c = a*5+7+8-8+6;
    cout<<c;

}