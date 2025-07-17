#include <iostream>
#include <fstream>
#include <string>
//File I/O
using namespace std;
int main(){
    ofstream usman("Tut50.txt");
    cout<<"Enter Your name: ";
    string name;
    getline(cin,name);
    usman<<"The name is "<<name;
    usman.close();

    ifstream ali("Tut50.txt");
    string content;
    getline(ali,content);
    cout<<content;
    ali.close();
}