#include <iostream>
using namespace std;
class Rectangle{
    private:
        float length;
        float width;
    public:
        void getValue(float a,float b){
            length = a;
            width = b;
        }
        void input(void){
            cout<<"Enter length of rectangle: ";
            cin>>length;
            cout<<"Enter Width of rectangle: ";
            cin>>width;
        }
        void area(){
            cout<<"The area of rectangle having length "<<length<<" \n and width "<<width<<" is: "<<endl;
            float area = length * width;
            cout<<"Area = "<<area<<endl;
        }
        void perimeter(){
            cout<<"The perimeter of rectangle having length "<<length<<" \n and width "<<width<<" is: "<<endl;
            float perimeter = 2 * (length + width);
            cout<<"Perimeter = "<<perimeter<<endl;
        }
};
int main(){
    Rectangle rec;
    rec.input();
    rec.area();
    rec.perimeter();
}