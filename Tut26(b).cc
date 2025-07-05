#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int a, b;
    public:
        Point(int x, int y){
            a = x;
            b = y;
        }
        friend float distance(Point, Point);
        void displayPoint(){
            cout<<"The point is ("<<a<<", "<<b<<")"<<endl;
        }
};
//create a function which takes 2 point objects and computes the distance between them
float distance(Point p1, Point p2){
    return sqrt(pow(p1.a - p2.a, 2) + pow(p1.b - p2.b, 2));
}

int main(){
    Point p(1, 1);
    p.displayPoint();
    Point q(4, 6);
    q.displayPoint();
    float dist = distance(p, q);
    cout<<"The distance between p and q is "<<dist<<endl;
    return 0;
}