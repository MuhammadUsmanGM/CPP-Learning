#include <iostream>
using namespace std;
int c = 45;
int main(){
    int a,b,c;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    c = a+b;
    cout<<"c is "<<c<<endl;
    cout<<"global c is "<<::c<<endl;

    float d = 3.54;
    long double f = 3.54;
    cout<<"value of d "<<d<<endl;
    cout<<"value of f "<<f<<endl;

    float d = 3.54f;
    long double f = 3.54l;
    cout<<"size of 3.54 "<<sizeof(3.54)<<endl;
    cout<<"size of 3.54 "<<sizeof(3.54l)<<endl;
    cout<<"size of 3.54 "<<sizeof(3.54f)<<endl;
    cout<<"size of 3.54 "<<sizeof(3.54F)<<endl;
    cout<<"size of 3.54 "<<sizeof(3.54L)<<endl;



    //**********Reference variable */
    float vari = 455;
    float & y = vari;
    cout<<vari<<endl;
    cout<<y;


    int ty = 45;
    cout << (float)ty << endl;
    float t = 45.87;
    cout << (int)t << endl;

}