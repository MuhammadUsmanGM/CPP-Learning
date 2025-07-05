#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

static float total;
class StudentMarks
{
private:
    string name;
    string grade;
    int rollno;
    float marks;
    float percentage;
    int number;

public:
    StudentMarks()
    {
        input();
    }
    void getter(string g, string n, int r, float m, float p, int num)
    {
        grade = g;
        name = n;
        rollno = r;
        marks = m;
        percentage = p;
        number = num;
    }
    void input()
    {
        cout << "Enter Number of Total students: ";
        cin >> number;
        int i = 1;
        while (i <= number)
        {
            total = 0;
            cout << "Enter name of Student: ";
            cin >> name;
            cout << "Enter roll no of Student: ";
            cin >> rollno;
            for (int i = 0; i < 5; i++)
            {
                cout << "Enter marks of subject " << i + 1 << " out of 100: ";
                cin >> marks;
                if (marks > 100)
                {
                    cout << "Marks must not be greater than total marks." << endl;
                    exit(1);
                }
                total += marks;
            }
            percentage = (total / 500) * 100;
            if (percentage >= 95)
            {
                grade = "A+";
            }
            else if (percentage >= 90 && percentage <= 94)
            {
                grade = "A";
            }
            else if (percentage >= 80 && percentage <= 89)
            {
                grade = "B+";
            }
            else if (percentage >= 70 && percentage <= 79)
            {
                grade = "B";
            }
            else if (percentage >= 60 && percentage <= 69)
            {
                grade = "C+";
            }
            else if (percentage >= 50 && percentage <= 59)
            {
                grade = "C";
            }
            else
            {
                grade = "F";
            }
            i++;
            display();
            summary();
        }
    }
    void summary()
    {
        if (grade == "A+")
        {
            cout << "Excellent!" << endl;
        }
        else if (grade == "A")
        {
            cout << "Very Good!" << endl;
        }
        else if (grade == "B+")
        {
            cout << "Good!" << endl;
        }
        else if (grade == "B")
        {
            cout << "Not Bad!" << endl;
        }
        else if (grade == "C+")
        {
            cout << "Need Improvement!" << endl;
        }
        else if (grade == "C")
        {
            cout << "Need a lot improvement!" << endl;
        }
        else if (grade == "F")
        {
            cout << "Try better next time!" << endl;
        }
    }
    void display()
    {
        cout << "-----Marksheet-----" << endl;
        transform(name.begin(), name.end(), name.begin(), ::toupper);
        cout << "Name        : " << name << endl;
        cout << "Roll no     : " << rollno << endl;
        cout << "Total Marks : " << total <<" out of 500"<< endl;
        cout << "Percentage  : " << percentage << " %" << endl;
        cout << "Grade       : " << grade << endl;
    }
};

int main()
{
    StudentMarks c1;
}