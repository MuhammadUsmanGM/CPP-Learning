#include <iostream>
using namespace std;
//Array of objects using pointers
class Shop
{
    int id;
    float price;
    public:
        void setData(int a,float b){
            id = a;
            price = b;
        }
        void getData(){
            cout<<"id is "<<id<<" price is "<<price<<endl;
        }
};
int main(){
    int p,q;
    int size = 2;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    for (int i=0;i<size;i++){
        cout<<"id and price of item "<<i+1<<": ";
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }
    for (int i=0;i<size;i++){
        cout<<"Item no"<<i+1<<" : ";
        ptrTemp->getData();
        ptrTemp++;
    }
}