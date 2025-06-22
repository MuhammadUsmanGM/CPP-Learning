#include <iostream>
#include <string>
using namespace std;
// OOPs - Classes & object
// c++ --> inital called c with classes
// class--> extension of structure
// limitations in structures were members were public and no methods
// classes = structure + more new
// classes can have methods and properties
// class members may be public or private
// class declaration can also be as
// class Name(){  code  }usman,ali;

// Nesting of member functions

class Binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void onceComplement(void);
    void display(void);
};
void Binary ::read(void)
{
    cout << "Enter a binary number: ";
    cin >> s;
}
void Binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary format." << endl;
            exit(1);
        }
    }
    cout << "Binary number format." << endl;
}
void Binary ::onceComplement(void)
{
    chk_bin(); // ths is the nesting of member func
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void Binary ::display(void)
{
    cout << "Displaying your binary number." << endl;
    ;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    // driver program
    Binary b;
    b.read();
    // b.chk_bin(); this func is running by nesting /
    b.display();
    b.onceComplement();
    b.display();
    return 0;
}