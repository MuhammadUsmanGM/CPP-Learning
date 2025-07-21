#include <iostream>
#include <vector>
using namespace std;
//STL(standard template library)
//vector
void display(vector<int> &v){
    for (int i =0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}
int main(){
    int ele;
    vector<int> vec1;
    for (int i=0;i<4;i++){
        cout<<"ENter: ";
        cin>>ele;
        vec1.push_back(ele);
    } 
    vector<int>::iterator iter = vec1.begin();
    vec1.pop_back();
    display(vec1);
    vec1.insert(iter,4,566);
    display(vec1);
    cout<<vec1.size();
}