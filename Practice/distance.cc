#include <iostream>
using namespace std;
class Distance
{
    float feet;
    float inches;
    float feet_in_inch;
    public:
        void getter(float f,float i){
            feet = f;
            inches = i;
        }
        void input(){
            cout<<"Enter distance in feet: ";
            cin>>feet;
            cout<<"Enter distance in inches: ";
            cin>>inches;
        }
        void conversion(){
            feet_in_inch = (feet*12);
        }
        void display(){
            conversion();
            cout<<"Distance in feet is "<<feet<<endl;
            cout<<"Distance in inches is "<<inches<<endl;
            cout<<"Distance from feet to inches is "<<feet_in_inch<<endl;
            cout<<"The sum of both the distances is "<<feet_in_inch+inches<<" inches."<<endl;
        }
        ~Distance(){cout<<"Destructor for class Distance is called..."<<endl;}
};
int main(){
    Distance d;
    d.input();
    d.display();
};