#include <iostream>
using namespace std;
class Scanner
{
    public:
        void connect(){
            cout<<"About to connect..."<<endl;
        }
};
class Printer
{
    public:
        void connect(){
            cout<<"Connecting..."<<endl;
        }
};
class Copier : public Printer,public Scanner
{
    public:
        void connect(){Printer :: connect();}
    };
int main(){
    Copier c;
    c.connect();
}