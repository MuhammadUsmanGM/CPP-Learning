#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int rollno;
        char grade;
    public:
        void setData(string n,int r,char g){
            name = n;
            rollno = r;
            grade = g;
        }
        void input(){
            cout<<"Enter name of student : ";
            getline(cin,name);
            cout<<"Enter roll no of student: ";
            cin>>rollno;
            cout<<"Enter grade of student: ";
            cin>>grade;
        }
        void display(){
            cout<<"----Student INFO----"<<endl;
            cout<<" Name :"<<name<<endl;
            cout<<"RollNo: "<<rollno<<endl;
            cout<<"Grade :"<<grade<<endl;
            cout<<"\n----Final Result----"<<endl;
            result();
        }
        void result(){
            if (grade == 'A' || grade=='a'){
                cout<<"Perfect"<<endl;
                exit(0);
            }
            else if (grade == 'B' || grade == 'b'){
                cout<<"Very Good"<<endl;
                exit(0);
            }
            else if (grade == 'C' || grade == 'c'){
                cout<<"Good"<<endl;
                exit(0);
            }
            else if (grade == 'F' || grade == 'f'){
                cout<<"Fail"<<endl;
                cout<<"Hope you do better next time"<<endl;
                exit(1);
            }
            else{
                cout<<"Try to improve yourself."<<endl;
                exit(1);
            }
        }
};
int main(){
    Student ali;
    ali.input();
    ali.display();
}