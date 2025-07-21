#include <iostream>
#include <list>
using namespace std;
//list in STL
//used to store data
void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it!=lst.end();it++){
        cout<<*it<<" ";
    }
    cout << endl;
}
int main(){
    list <int> list1;
    list <int> list2(3);
    list1.push_back(5);
    list1.push_back(3);
    list1.push_back(2);
    list1.push_back(1);
    list1.push_back(6);

    display(list1);

    list<int> :: iterator it;
    it = list2.begin();
    *it = 45;
    it++;
    *it = 46;
    it++;
    *it = 47;
    display(list2);

    list2.pop_back();
    display(list2);

    list1.remove(1);
    display(list1);

    list1.sort();
    display(list1);
    
    list1.swap(list2);
    display(list1);

    list1.merge(list2);
    cout<<"list 1 after merging : "<<endl;
    display(list1);

    list1.reverse();
    display(list1);



}