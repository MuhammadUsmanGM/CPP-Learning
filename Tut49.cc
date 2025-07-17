#include <iostream>
#include <fstream>
#include <string>
//Files in cpp
using namespace std;
int main(){
    string st = "Hello from Tut49";
    string st2;
    ofstream ok("Tut49.txt"); //ofstream helps to write
    ok<<st;

    ifstream in("Tut49.txt");
    getline(in,st2);
    cout<<st2;
}