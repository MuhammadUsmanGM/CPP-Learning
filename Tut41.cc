#include <iostream>
using namespace std;
//Pointer and its use in classes
//new and delete keyword
int main(){
    //new operator
    int* p = new int(6);
    cout<<*p<<endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    
    //delete operator
    delete[] arr;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
}