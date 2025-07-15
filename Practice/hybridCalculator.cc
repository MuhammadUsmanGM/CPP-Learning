#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator {
protected:
    float num1;
    float num2;
public:
    void getter(float n1, float n2) {
        num1 = n1;
        num2 = n2;
    }
    void input() {
        cout << "Enter 1st number: ";
        cin >> num1;
        cout << "Enter 2nd number: ";
        cin >> num2;
    }
    float sum() {
        return num1 + num2;
    }
    float subtract() {
        return num1 - num2;
    }
    float multiply() {
        return num1 * num2;
    }
    float divide() {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

class ScientificCalculator {
public:
    float power(float a, float b) {
        return pow(a, b);
    }
    float remainder(float a, float b) {
        if (b != 0)
            return fmod(a, b);
        else {
            cout << "Error: Modulo by zero!" << endl;
            return 0;
        }
    }
    float calcCos(float a, float b) {
        return cos(a + b);
    }
    float calcSin(float a, float b) {
        return sin(a + b);
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator {
public:
    void display() {
        cout << "Sum: " << sum() << endl;
        cout << "Subtraction: " << subtract() << endl;
        cout << "Multiplication: " << multiply() << endl;
        cout << "Division: " << divide() << endl;
        cout << "Power: " << power(num1, num2) << endl;
        cout << "Remainder: " << remainder(num1, num2) << endl;
        cout << "Cos(num1 + num2): " << calcCos(num1, num2) << endl;
        cout << "Sin(num1 + num2): " << calcSin(num1, num2) << endl;
    }
};

int main() {
    HybridCalculator h1;
    h1.input();
    h1.display();
    return 0;
}
