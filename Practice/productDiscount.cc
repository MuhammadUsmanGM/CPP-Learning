#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;
static int total;
class Discount
{
private:
    int number;
    float price;
    float discountedAmount;
    float totalAfterDiscount;
public:
    void setter(float p,int n,float d,float ta)
    {
        price = p;
        number = n;
        discountedAmount = d;
        totalAfterDiscount = ta;
    }
    Discount() {
        input();
        display();
    };
    void input()
    {
        cout<<"Enter number of products you purchased: ";
        cin>>number;
        for (int i=0;i<number;i++){
            cout<<"Enter the price of Item no."<<i+1<<" : ";
            cin>>price;
            total+=price;
        }

    }
    void display(){
        cout<<"-----Product Details-----"<<endl;
        cout<<"Total Price : "<<total<<" rs"<<endl;
        if (total>2000){
            discountedAmount = total/10;
            cout<<"Congrats!You got "<<discountedAmount<<" rs off on the total of "<<total<<" rs"<<endl;
            totalAfterDiscount = total - discountedAmount;
            cout<<"Your total after discount is : "<<totalAfterDiscount<<" rs."<<endl;
        }
        else{cout<<"You just missed a discount of 10%."<<endl;}
        cout<<"\n-----Thanks for visiting-----"<<endl;
    }
};

int main(){
    Discount d;
}