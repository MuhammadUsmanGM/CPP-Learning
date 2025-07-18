#include<iostream>
using namespace std;
template <class T>
void doSwap(T& a,T& b){
    T temp = a;
    a = b;
    b = temp;
}
int main(){

    // int a = 32;
    // int b = 54;
    // doSwap<int>(a,b);
    // cout<<a<<" "<<b;

    string a = "Hello from a";
    string b = "Hello from b";
    doSwap<string>(a,b);
    cout<<a<<" "<<b<<endl;
}