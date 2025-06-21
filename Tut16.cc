#include <iostream>
using namespace std;
//function overloading
int add(int a, int b){
    cout<<"Using func with two argument"<<endl;
    return a+b;
}
int add(int a,int b,int c){
    cout<<"Using func with three argument"<<endl;
    return a+b+c;
}

//calculate volume of a cylinder
int volume(double r,int h){
    return (3.14*r*r*h);
}
//cube
int volume(int a){
    return (a*a*a);
}
//rectangular box
int volume(int l,int b,int h){
    return (l*b*h);
}
 int main(){
    cout<<add(3,6)<<endl;
    cout<<add(3,6,7)<<endl;
    cout<<"THe volume of cylinder is "<<volume(3, 6)<<endl;
    cout<<"THe volume of cube is "<<volume(3)<<endl;
    cout<<"THe volume of rectangular box is "<<volume(3, 7, 6)<<endl;
}