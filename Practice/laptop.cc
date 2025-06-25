#include <iostream>
using namespace std;
class Laptop
{
    private:
        string brand;
        string generation;
        double price;
    public:
        void setter(string b,string g,double p){
            brand = b;
            generation = g;
            price = p;
        }
        void getter(){
            cout<<"-----Laptop INFO-----"<<endl;
            cout<<"   Brand   :"<<brand<<endl;
            cout<<"Generation :"<<generation<<endl;
            cout<<"   Price   :"<<price<<" $"<<endl;
        }
        void input(){
            cout<<"Enter the brand of laptop: ";
            cin>>brand;
            cout<<"Enter the generation of laptop: ";
            cin>>generation;
            cout<<"Enter price of laptop($): ";
            cin>>price;
            cout<<"\n\n";
            getter();
        }
};

int main(){
    Laptop hp;
    hp.input();
}