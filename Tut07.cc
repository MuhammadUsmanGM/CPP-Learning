#include <iostream>
using namespace std;
int main(){
    /*Loops in C++
    1.for loop
    2.while loop
    3.do while loop*/

    //***********for loop*******************
//syntax 
/*for (initialization;condition;updation){
        loop body (c++ code)}*/


    for (int i=0;i<=100;i++){
        cout<<i<<" ";
    }

    //example of infinite loop 
    for (int i=0;32<=100;i++){
        cout<<i<<" ";
    }


    //************while loop****************

    // syntax 
    // while (condition){
    // c++ code}

    int i=1;
    while (i<40){
        cout<<i<<" ";
        i++;
    }



    //***********do while loop*********** */

    int i = 1;
    do
    {
        cout<<i<<endl;
        i++;
    } while (i<10);


    int i = 6;
    int j = 1;
    do
    {
        cout<<"6 * "<<j<<" = "<<i<<endl;
        i+=6;
        j++;
    } while (i<=60);

    int j = 1;
    for (int i=6;i<=60;i+=6){
        cout<<"6 * "<<j<<" = "<<i<<endl;
        j++;
    }


    int i = 6;
    int j = 1;
    while (i<=60){
        cout<<"6 * "<<j<<" = "<<i<<endl;
        j++;
        i+=6;
    }
    
    
}