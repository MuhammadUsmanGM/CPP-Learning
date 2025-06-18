#include <iostream>
using namespace std;
int main(){
    //break
    for (int i=0;i<=4;i++){
        if (i==2){
            break;
        }
        cout<<i<<endl;
    } 


//continue
    for (int i=0;i<=4;i++){
        if (i==2){
            continue;
        }
        cout<<i<<endl;
    } 
}