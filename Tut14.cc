#include <iostream>
using namespace std;
//inline ,default & constant argument

//make inline func to those func only which has less line of codes or have less memory
inline int product(int a, int b){
    return a*b;
}
//never use inline in func which has static variable
int product(int a, int b){
    static int c = 1;
    c = c+1;
    return a*b+c;
}
//default parameter
int moneyReceived(int currentmoney, float factor = 1.04){
    return currentmoney * factor;
}
//constant parameter are those which cannot be changed at any cost 
int strlen(const int a=45){
    return a;
}

int main(){
    int a,b;
    cout<<"enter the value of a & b: ";
    cin>>a>>b;
    cout<<"The sum of a & b is :"<<product(a,b)<<endl;
    cout<<"The sum of a & b is :"<<product(a,b)<<endl;
    cout<<"The sum of a & b is :"<<product(a,b)<<endl;

//here moneyReceived func takes default value of parameter factor
    int money = 10000;
    cout<<"if you have "<<money<<"Rs in your account, you will receive "<<moneyReceived(money)<<"Rs after 1 year."<<endl;
    cout<<"For VIP,if you have "<<money<<"Rs in your account, you will receive "<<moneyReceived(money,1.08)<<"Rs after 1 year.";

}