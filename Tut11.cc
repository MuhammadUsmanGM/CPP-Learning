#include <iostream>
using namespace std;

//structure is defined using struct word
//typedef is used to define the value of structure using the shortcut
typedef struct employ
{
    int eId;
    char favChar;
    double salary;
}ep;

//union is a better memory management method in cpp it allow to use only 1 value from it at a time 
union money
{
    int rice;
    char car;
    float pounds;
};


int main(){
    //Unions and Enums
    //structure is used to merge different data type 
    enum Meal{breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    
    struct employ usman;
    usman.eId = 7542;
    usman.favChar = 'u';
    usman.salary = 70000000;
    cout<<usman.salary<<endl;
    cout<<usman.eId<<endl;
    cout<<usman.favChar<<endl;
    ep ali;
    ali.eId = 5965;
    ali.favChar = 'a';
    ali.salary = 12345;
    cout<<ali.eId<<endl;
    cout<<ali.salary<<endl;
    cout<<ali.favChar<<endl;

    union money m1;
    m1.car = 'c'; 
    m1.pounds = 65;
    cout<<m1.car<<endl;
    cout<<m1.pounds<<endl;
    //union will overwrite the 2nd value and only allow to use 1
}