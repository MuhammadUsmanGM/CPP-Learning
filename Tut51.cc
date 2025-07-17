#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;
//File I/O
int main(){
    ofstream out;
    out.open("Tut51.txt");
    out<<"This is me..."<<endl;
    out<<"This is not me..."<<endl;
    out.close();

    ifstream in;
    stringstream st;
    in.open("Tut51.txt");
    st<<in.rdbuf();
    string content = st.str();
    cout<<content;
    in.close();
}