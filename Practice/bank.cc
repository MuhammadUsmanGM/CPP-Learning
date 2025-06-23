#include <iostream>
using namespace std;

class BankAccount
{
    private:
        string name;
        string accountNumber;
        int balance = 10000;
    public:
        float deposit;
        float withdraw;
        void getData(string n,string a,int b){
            name = n;
            accountNumber = a;
            balance = b;
        }
        void input(){
            cout<<"Enter account number: ";
            cin>>accountNumber;
            if (accountNumber.length()==11){
                cout<<"Account logged in successfully..."<<endl;
                cout<<"Enter your full name for verification: ";
                cin.ignore();
                getline(cin,name);
            }
            else {cout<<"Invalid account number. Must be 11 digits."<<endl;}
        }
        void deposit1(){
            cout<<"Enter amount you wanna deposit: ";
            cin>>deposit;
            balance += deposit;
            cout<<"Your current balance after deposit is: "<<balance<<endl;
        }
        void withdraw1(){
            cout<<"Enter the amount you wanna withdraw: ";
            cin>>withdraw;
            if (withdraw>balance){
                cout<<"Insufficient balance"<<endl;
                cout<<"Please enter a valid amount."<<endl;
                exit(0);
            }
            else if (withdraw<=balance){
                balance -= withdraw;
                cout<<"Your current balance after withdrawal is "<<balance<<endl;
            }

        }
        void display(){
            cout<<"-----Account INFO-----"<<endl;
            cout<<"AccountHolder Name:"<<name<<endl;
            cout<<"  Account Number  :"<<accountNumber<<endl;
            cout<<"  Total Balance   :"<<balance<<endl;
            cout<<"\n----Transaction History----\n"<<endl;
            cout<<" Deposited Amount :"<<deposit<<endl;
            cout<<"Balance after Deposit: "<<balance<<endl;
            cout<<"\nWithdrawal Amount:"<<withdraw<<endl;
            cout<<"Balance after Withdraw: "<<balance<<endl;
            cout<<"\n\nCurrent Balance: "<<balance<<endl;
            cout<<"\n\nHope you enjoyed the service!";
        }
};

int main(){
    BankAccount hbl;
    hbl.input();
    hbl.deposit1();
    hbl.withdraw1();
    hbl.display();
}