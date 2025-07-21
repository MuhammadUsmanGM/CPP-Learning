#include <iostream>
#include <map>
#include <string>

using namespace std;
//map in STL
//its an associative array
int main(){
    map<string, int> marks;
    marks["Usman"] = 43;
    marks["Ali"] = 65;

    marks.insert({{"hamza",76},{"Ahmad",87}});
    map<string , int> :: iterator itr;
    for (itr = marks.begin();itr!=marks.end();itr++){
        cout<<(*itr).first<<"  "<<(*itr).second<<"\n";
    }
}