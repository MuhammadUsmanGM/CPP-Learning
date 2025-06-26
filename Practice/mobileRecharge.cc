#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;
class MobileRecharge
{
    private:
        string number;
        float rechargeAmount;
        string network;
    public:
        MobileRecharge(){
            cout<<"----Recharge INFO----"<<endl;
            input();
            greet();
        }
        void setter(string n,float r,string net){
            number = n;
            rechargeAmount = r;
            network = net;
        }
        void input(){
            cout<<"Enter your network type(jazz,zong,telenor): ";
            cin>>network;
            transform (network.begin(),network.end(),network.begin(), ::tolower);
            if (network=="jazz" || network=="zong" || network=="telenor"){
                cout<<"Enter your Mobile Number: ";
                cin>>number;
                if (number.length()==11){
                    cout<<"Enter recharge amount: ";
                    cin>>rechargeAmount;
                    if (rechargeAmount>=100){
                        cout<<"Recharged successfully!"<<endl;
                        cout<<"\n"<<rechargeAmount<<"rs are successfully recharged to "<<number<<" on "<<network<<" network."<<endl;
                    }else{cout<<"Amount less then 100 cannot be recharged.\nPlease try again with valid amount."<<endl;}
                }else{cout<<"Invalid NUmber format!\nPlease enter a valid number."<<endl;}
            }else {cout<<"Enter a valid network type."<<endl;}
        }
        void greet(){
            cout<<"\n---------Thanks for visiting--------"<<endl;
        }
};

int main(){
    MobileRecharge c1;
}