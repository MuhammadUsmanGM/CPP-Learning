#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
//Func obj(Functor)
int main(){
    int arr[] ={1,2,3,4,5,64,32,12};
    sort(arr,arr+7,greater<int>());
    for (int i=0;i<8;i++){
        cout<<arr[i]<<"   ";
    }
}

