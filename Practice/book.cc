#include <iostream>
using namespace std;

class Book
{
    private:
        string title;
        string author;
        int price;
    public:
        string arr[5];
        void getData(string t, string a, int p){
            title = t;
            author = a;
            price = p;
        }
        void input() {
            cout<<"Enter Title: ";
            cin>>title;
            cout<<"Enter author: ";
            cin>>author;
            cout<<"Enter price: ";
            cin>>price;
            }
        void display(){
            cout<<" Title :"<<title<<endl;
            cout<<"Author :"<<author<<endl;
            cout<<" Price :"<<price<<endl;
            cout<<"\n\n";
        }

};

int main(){
    Book books[5];
    cout << "Enter details for " << 5 << " books:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nBook " << i + 1 << ":" << endl;
        books[i].input();
    }

    cout << "\n\nDisplaying all books:\n";
    for (int i = 0; i < 5; i++) {
        books[i].display();
    }
}