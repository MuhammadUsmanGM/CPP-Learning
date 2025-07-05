#include <iostream>
using namespace std;

// Dynamic initialization of objects using constructors
class BankDeposit {
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {} // Default constructor
    BankDeposit(int p, int y, float r); // Constructor with float interest rate
    BankDeposit(int p, int y, int r);   // Constructor with int interest rate
    void show();
};

// Constructor with float interest rate
BankDeposit::BankDeposit(int p, int y, float r) {
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++) {
        returnValue = returnValue * (1 + interestRate);
    }
}

// Constructor with int interest rate (percentage)
BankDeposit::BankDeposit(int p, int y, int r) {
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++) {
        returnValue = returnValue * (1 + interestRate);
    }
}

// Show result
void BankDeposit::show() {
    cout << "The principal amount was " << principal
         << " and the return value after " << years
         << " years is " << returnValue << endl;
}

// Fixed main function name
int main() {
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p, y, and r (float): ";
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p, y, and R (int): ";
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}
