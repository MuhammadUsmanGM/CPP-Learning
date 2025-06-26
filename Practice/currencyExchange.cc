#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;
 class CurrencyExchange
 {
    private:
        string base_currency;
        string converted_currency;
        float bAmount;
        float cAmount;
    public:
        CurrencyExchange(){
            cout<<"-----Currency Exchange-----"<<endl;
            input();
            display();
        }
        void setter(string b,string c,float bA,float cA){
            base_currency = b;
            converted_currency = c;
            bAmount = bA;
            cAmount = cA;
        }
        void input(){
            cout<<"Enter currency you have.e.g.(usd,pkr,euro): ";
            cin>>base_currency;
            transform (base_currency.begin(),base_currency.end(),base_currency.begin(), ::tolower);
            cout<<"Enter amount of currency you have: ";
            cin>>bAmount;
            cout<<"Enter currency you wanna convert to.e.g.(usd,pkr,euro): ";
            cin>>converted_currency;
            transform (converted_currency.begin(),converted_currency.end(),converted_currency.begin(), ::tolower);
            if (base_currency=="usd" && converted_currency=="pkr"){
                cAmount = bAmount * 279.30;
            }
            else if (base_currency=="pkr" && converted_currency=="usd"){
                cAmount = bAmount / 279.30;
            }
            else if (base_currency=="pkr" && converted_currency=="eur"){
                cAmount = bAmount / 315.57;
            }
            else if (base_currency=="eur" && converted_currency=="pkr"){
                cAmount = bAmount * 315.57;
            }
            else if (base_currency=="eur" && converted_currency=="usd"){
                cAmount = bAmount * 1.13;
            }
            else if (base_currency=="usd" && converted_currency=="eur"){
                cAmount = bAmount / 1.13;
            }
            else{cout<<"Enter a valid currency.e.g.(usd,eur,pkr)."<<endl;}
        }
        void display(){
            cout<<"Base Currency :"<<bAmount<<" "<<base_currency<<endl;
            cout<<"Converted Currency :"<<cAmount<<" "<<converted_currency<<endl;
            cout<<"-----Thanks for Visiting-----"<<endl;
        }
 };

 int main(){
    CurrencyExchange c;
 }