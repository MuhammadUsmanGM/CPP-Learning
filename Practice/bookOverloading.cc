#include <iostream>
using namespace std;
class Book
{
    private:
        string name;
        int year;
    public:
        Book(string n,int y){
            name = n;
            year = y;
        }
        Book(int y){
            name = "good";
            year = y;
        }
        Book(string n){
            name = n;
            year = 2025;
        }
        void display() {
            cout << "Book name: " << name << ", Year: " << year << endl;
        }
};
int main(){
    Book b1("Good",2025);
    Book b2(2017);
    Book b4("Usman");
    b1.display();
    b2.display();
    b4.display();
}