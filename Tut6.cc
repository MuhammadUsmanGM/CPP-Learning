#include <iostream>
using namespace std;
int main(){
    /*
    control structure types
    1.squence structure
    2.selection structure
    3.loop structure*/ 

    //*****if-else statement********

    int age ;
    cout<<"Enter your age: ";
    cin>>age;
    if ((age<18) && age>1){
        cout<<"You cannot come to my party.";
    }
    else if(age==18){
        cout<<"You a kid and get a kid pass to party";
    }
    else if (age<1){
        cout<<"not yet born";
    }
    else{
        cout<<"You can come to party";
    }


    //************Switch statement*****************

    int age;
    cout<<"Enter your age :";
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"You are 18.";
        break;
    case 22:
        cout<<"You are 22";
        break;
    default:
        cout<<"No special cases";
        break;
    }
}