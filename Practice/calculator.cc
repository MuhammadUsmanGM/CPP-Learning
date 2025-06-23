#include <iostream>
#include <cmath>
using namespace std;
class Calculator
{
private:
    float num1;
    float num2;
    char sign;

public:
    void getData(float a, float b, char c)
    {
        num1 = a;
        num2 = b;
        sign = c;
    }
    void input()
    {
        cout << "\nEnter Num1: ";
        cin >> num1;
        cout << "Enter  Operator (+, -, *, /, ^): ";
        cin >> sign;
        cout << "Enter Num2: ";
        cin >> num2;
    }
    // input can also be taken like that
    void input1()
    {
        cout << "\nEnter Question: ";
        cin >> num1;
        cin >> sign;
        cin >> num2;
    }
    float add(float a, float b)
    {
        return (a + b);
    }
    float subtract(float a, float b)
    {
        return (a - b);
    }
    float multiply(float a, float b)
    {
        return (a * b);
    }
    float divide(float a, float b)
    {
        return (a / b);
    }
    float power(float a, float b)
    {
        return pow(a, b);
    }
    void display()
    {
        cout << "\n----Calculation-----" << endl;
        float result;
        if (sign == '+')
        {
            result = add(num1, num2);
            cout << "The sum of " << num1 << " + " << num2 << " = " << result << endl;
        }
        else if (sign == '-')
        {
            result = subtract(num1, num2);
            cout << "The subtraction of " << num1 << " - " << num2 << " = " << result << endl;
        }
        else if (sign == '*')
        {
            result = multiply(num1, num2);
            cout << "The multiplication of " << num1 << " * " << num2 << " = " << result << endl;
        }
        else if (sign == '/')
        {
            if (num2 != 0)
            {
                result = divide(num1, num2);
                cout << "The division of " << num1 << " / " << num2 << " = " << result << endl;
            }
            else
            {
                cout << "Error: Division by zero!" << endl;
            }
        }
        else if (sign == '^')
        {
            result = power(num1, num2);
            cout << "The power of " << num1 << " ^ " << num2 << " = " << result << endl;
        }
        else
        {
            cout << "Invalid Operator.Please enter a valid one..";
            exit(0);
        }
    }
    // display by switch
    void display1()
    {
        cout << "\n----Calculation----" << endl;
        float result;
        switch (sign)
        {
        case '+':
            result = add(num1, num2);
            cout << "The sum of " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = subtract(num1, num2);
            cout << "The subtraction of " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = multiply(num1, num2);
            cout << "The multiplication of " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 > 0)
            {
                result = divide(num1, num2);
                cout << "The division of " << num1 << " / " << num2 << " = " << result << endl;
            }
            else
            {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        case '^':
            result = power(num1, num2);
            cout << "The power of " << num1 << " ^ " << num2 << " = " << result << endl;
            break;
        default:
            cout << "Invalid Operator.Please enter a valid one..";
            break;
        }
    }
};

int main()
{
    Calculator cal;
    while (true)
    {
        cal.input();
        cal.display();
    }
    // this can also be done like that
    while (true)
    {
        cal.input1();
        cal.display1();
    }
}