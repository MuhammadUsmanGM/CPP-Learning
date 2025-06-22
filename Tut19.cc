#include <iostream>
using namespace std;
//Memory allocation & using array in classes
class Shop{
    int itemId[100];//maximum item
    int itemPrice[100];
    int counter;
    public:
        void initCounter(void){counter = 0;}
        void setPrice(void);
        void displayPrice(void);
};
void Shop :: setPrice(){
    cout<<"Enter id of item no "<<counter+1<<" :";
    cin>>itemId[counter];
    cout<<"Enter price of item: ";
    cin>>itemId[counter];
    counter ++;
}
void Shop :: displayPrice(){
    for (int i=0;i<counter;i++){
        cout<<"The price of item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;

    }
}
int main(){
    Shop mart;
    mart.initCounter();
    mart.setPrice();
    mart.setPrice();
    mart.setPrice();
    mart.displayPrice();
}