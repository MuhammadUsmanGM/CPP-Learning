#include <iostream>
using namespace std;
//Recursion & Recursive func

int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n*factorial(n-1);
    //In recursion a func calls itself
}

int fib(int n){
    if (n<2){return 1;}
    return fib(n-2) + fib(n-1);
}
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"The term in fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;
}