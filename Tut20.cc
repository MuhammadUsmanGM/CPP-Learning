#include <iostream>
using namespace std;
// Static data members & methods
class Employ
{
    static int count;
    int id;

public:
    void setData(void)
    {
        cout << "Enter your employ id: ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employ is " << id << ". This is employ number " << count << endl;
    }
    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};
int Employ ::count; // default value of static variable is always zero

int main()
{
    Employ usman, ali;
    // count is the static data member of Employ class
    usman.setData();
    usman.getData();
    Employ ::getCount(); // a static func can be run directly by scope resolution operator
    ali.setData();
    ali.getData();
    Employ ::getCount();
}