#include <iostream>
using namespace std;
int main(){
    //Pointer-->data type which hold the address of the other variables
    int a=3;
    int * b = &a;
    int **c = &b;
    //&-->address of a
    //* --> dereference operator
    cout<<"value of a "<<a<<endl;
    cout<<"value of address of a "<<&a<<endl;
    cout<<"value of address of a "<<b<<endl;
    cout<<"value of a "<<*b<<endl;
    cout<<"value of address of b "<<c<<endl;
    cout<<"address of a "<<*c<<endl;
    cout<<"value of a "<<**c<<endl;


    cout<<"address of b"<<&b<<endl;
    cout<<"address of b"<<c<<endl;
    cout<<"value at address c "<<*c<<endl;
    cout<<"value at address value at ((c)) "<<**c<<endl;

}
