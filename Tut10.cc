#include <iostream>
using namespace std;
int main(){
    //Arrays & pointer arithmetic 
    int marks[4] = {23,43,65,32};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    //updation 
    marks[2] = 435;
    cout<<marks[2];

// using for loop
    for (int i=0;i<4;i++){
        cout<<"the marks are "<<marks[i]<<endl;
    }

//using while loop
    int i=0;
    while(i<4){
        cout<<"the value of marks is "<<marks[i]<<endl;
        i++;
    }

// using do while loop
    int i = 0;
    do
    {
        cout<<"the value of marks is "<<marks[i]<<endl;
        i++;
    } while (i<4);
    

//pointer and arrays
   int * p =marks;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<p<<endl; //this is addres of array
    cout<<&p;//this is address of p

//printing array using pointer
    int i=0;
    while (i<4){
        cout<<*p<<endl;;
        p++;
        i++;
    }
}
