#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>
#include <cctype>
#include <fstream>

using namespace std;

static float total;
class Bank
{
    protected:
        long long accountNum;
        string accountNumStr;
        string name;
        float depositAmount;
        float withdrawalAmount;
    public:
        Bank(){
            total = 10000;
            depositAmount = 0.0f;
            withdrawalAmount = 0.0f;
            cout<<"....Welcome To C++ Bank....\n\n"<<endl;
            input1();
            input2();
            output();
            
        }
        void deposit(){
            total+=depositAmount;
            cout<<"Deposit Amount: "<<depositAmount<<" $"<<endl;
            cout<<"Total Balance after deposit is : "<<total<<" $"<<endl;
        }
        void withdraw(){
            total-=withdrawalAmount;
            cout<<"Deposit Amount: "<<withdrawalAmount<<" $"<<endl;
            cout<<"Total Balance after withdrawal is : "<<total<<" $"<<endl;
        }
        void input1(){
            while (true) {
                cout<<"Enter your 11 digits account number: ";
                cin>>accountNumStr;
                if (accountNumStr.length() == 11 && all_of(accountNumStr.begin(), accountNumStr.end(), ::isdigit)) {
                    accountNum = stod(accountNumStr); 
                    cout<<"Acount Successfully Logged in..."<<endl; 
                    cin.ignore();
                    cout << "Enter your full name for confirmation: ";
                    getline(cin, name);
                    cout << "Account Balance : " << total <<" $"<< endl;
                    break;
                } else {
                    cout << "❌ Invalid account number. Please enter exactly 11 digits.\n";
                }
            }

        }
        void input2(){
            string respond;
            cout<<"Do you want to withdraw or deposit : ";
            cin>>respond;
            transform (respond.begin(),respond.end(),respond.begin(), ::tolower);
            if (respond=="deposit"){
                cout<<"Enter the amount you wanna deposit: ";
                cin>>depositAmount;
                if (depositAmount>0){
                    deposit();
                }else{cout<<"Please enter a valid positive amount."<<endl;}
            }
            else if (respond=="withdraw")
            {
                cout<<"Enter the amount you wanna withdraw: ";
                cin>>withdrawalAmount;
                if (withdrawalAmount>0 && withdrawalAmount<total){
                    withdraw();
                }else if(withdrawalAmount>total){cout<<"Insufficient Balance.\nMake sure you enter the right amount."<<endl;}
                else{cout<<"Please enter a valid positive amount."<<endl;}
            }
            
        }
        void output(){
            ofstream out;
            out.open("bankReceipt.txt");
            out<<"Name of Account Holder :"<<name<<endl;
            out<<"Account id : "<<accountNum<<endl;
            out<<"Total Balance : "<<total<<" $"<<endl;
            out<<"Total Withdrawal : "<<withdrawalAmount<<" $"<<endl;
            out<<"Total Deposit : "<<depositAmount<<" $"<<endl;
            out.close();
        }
        ~Bank(){};
};

int main(){
    Bank b;
    ifstream in;
    in.open("bankReceipt.txt");
    stringstream st;
    st<<in.rdbuf();
    string content = st.str();
    cout<<"-------Account INFO-------"<<endl;
    cout<<content;
    in.close();
}

