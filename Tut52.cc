#include <iostream>
using namespace std;
//Templates
//syntax
/*template <class T>
class vector{
    T* arr    T can be int float etc...
    }*/

template <class T>
class Vector
{
    public:
        T * arr;
        int size;
        Vector(int m){
            size = m;
            arr = new T[size];
        }
        T dotProduct(Vector &v){
            T d = 0;
            for (int i=0;i<size;i++){
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }
};
int main(){
    // Vector <int>v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 1;
    // Vector <int>v2(3);
    // v1.arr[0] = 1;
    // v1.arr[1] = 0;
    // v1.arr[2] = 1;

    // int a = v1.dotProduct(v2);
    // cout<<a<<endl;


    Vector <float>v1(3);
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;
    Vector <float>v2(3);
    v1.arr[0] = 0.1;
    v1.arr[1] = 1.90;
    v1.arr[2] = 4.1;

    float a = v1.dotProduct(v2);
    cout<<a<<endl;

}