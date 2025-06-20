#include <iostream>
using namespace std;
//call by value & call by reference

int sum(int a,int b){
    int c = a+b;
    return c; 
}
//this will not swap the value because the value passed in swap function are copies from main not actual 
// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

//this is swap by reference using pointer
void swapRef(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//this is said to be call by reference using reference variable
void swapVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a=5, b = 7;
    cout<<"the value of a is "<<a<<" and of b is "<<b<<endl;
    // swap(a,b); this will not work
    swapRef(&a,&b);
    cout<<"the value of a is "<<a<<" and of b is "<<b<<endl;
    swapVar(a,b);
    cout<<"the value of a is "<<a<<" and of b is "<<b<<endl;

}