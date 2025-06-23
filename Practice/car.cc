#include <iostream>
using namespace std;
class Car{
    private:
        string brand;
        int year;
    public:
        void getData(string b,int y){
            brand = b;
            year = y;
        }
        void input(){
            cout<<"Enter car brand: ";
            getline(cin,brand);
            cout<<"Enter car model: ";
            cin>>year;
        }
        void display(){
            cout<<"-----car INFO-----"<<endl;
            cout<<"Car Brand: "<<brand<<endl;
            cout<<"Car Model: "<<year<<endl;
        }
};

int main(){
    Car m;
    m.input();
    m.display();
}