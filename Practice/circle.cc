#include <iostream>
using namespace std;
class Circle
{
    private:
        float radius;
    public:
        void setValue(float r){
            radius = r;
        }
        float area(float r){
            return 3.14*(r*r);
        }
        void input(){
            cout<<"Enter the value of radius(m): ";
            cin>>radius;
        }
        void display(){
            cout<<"Radius of Circle"<<endl;
            cout<<"Radius = "<<radius<<" m"<<endl;
            cout<<"Area of Circle"<<endl;
            cout<<"Area = "<<area(radius)<<" m^2"<<endl;
        }
};
int main(){
    Circle a;
    a.input();
    a.display();
}
