#include <iostream>
using namespace std;
float weight;
float height;
void input(){
    cout<<"Enter your weight(kg): ";
    cin>>weight;
    cout<<"Enter your height(m): ";
    cin>>height;
}
float bmi(){
    return (weight/(height*height));
}
int main(){
    input();
    if (bmi()>0 && bmi()<=18.5){
        cout<<bmi()<<endl;
        cout<<"Under Weight..."<<endl;
    }
    else if (bmi()>18.5 && bmi()<=24.9){
        cout<<bmi()<<endl;
        cout<<"Normal Weight..."<<endl;
    }
    else if (bmi()>24.9 && bmi()<=29.9){
        cout<<bmi()<<endl;
        cout<<"Over Weight..."<<endl;
    }
    else if (bmi()>29.9){
        cout<<bmi()<<endl;
        cout<<"Obese..."<<endl;
    }
    else{cout<<"Enter a valid number..."<<endl;}
}