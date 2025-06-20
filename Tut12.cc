#include <iostream>
using namespace std;
//Functions and functions prototype


int sum(int a, int b );
//a nd b are formal parameter
//its function prototyping in which we can define function after the function

void greet(void);
void greet(); //->also acceptable

int main(){
    int num1,num2;
    cout<<"Enter num1: ";
    cin>>num1;
    cout<<"Enter num2: ";
    cin>>num2;
    cout<<"the sum is "<<sum(num1, num2)<<endl;
    //num1 & num2 are actual parameter

    greet();
    
}

int sum(int a,int b){
    int c = a+b;
    return c; 
}

void greet(){
    cout<<"Hello";
}