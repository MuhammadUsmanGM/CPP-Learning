#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

class Student
{
    protected:
        string name;
        int rollNo;
    public:
        void set(string n,int r){
            name = n;
            rollNo = r;
        }
};
class Marks 
{
    protected:
        int subject;
        float marks[];
};
class InputDisplay : public Student , public Marks
{
    public:
        void input(){
            cout<<"Enter Student name: ";
            getline(cin,name);
            cout<<"Enter roll number : ";
            cin>>rollNo;
            cout<<"Enter the number of subjects: ";
            cin>>subject;
            for (int i=0;i<subject;i++){
                cout<<"Enter marks for subject "<<i+1<<" : ";
                cin>>marks[i];
            }
        }
        void display(){
            ofstream out;
            out.open("detail.txt");
            out<<"Student Name: "<<name<<endl;
            out<<"Roll Number: "<<rollNo<<endl;
            out<<"Number of Subjects: "<<subject<<endl;
            for (int j=0;j<subject;j++){
                out<<"Marks for subject "<<j+1<<" : "<<marks[j]<<endl;
            }
            out.close();
        }
};

int main(){
    InputDisplay id;
    id.input();
    id.display();
    ifstream in;
    in.open("detail.txt");
    stringstream st;
    st<<in.rdbuf();
    string content = st.str();
    cout<<content;
    in.close();
}