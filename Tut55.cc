#include <iostream>
using namespace std;
//func template
template <class T1,class T2>
int funcAverage(T1 a,T2 b){
    float avg = (a+b)/2;
    return avg;
}
int main(){
    float a = funcAverage(5,3.4);
    cout<<a;
}