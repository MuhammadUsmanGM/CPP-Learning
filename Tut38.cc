#include <iostream>
using namespace std;
//Virtual base class
class Student
{
    protected:
        int roll_no;
    public:
        void set_number(int r){
            roll_no = r;
        }
        void printNumber(){
            cout<<"The roll no is "<<roll_no<<endl;
        }
};
class Test : virtual public Student
{
    protected:
        float maths, physics;
    public:
        void setMarks(float m1,float m2){
            maths = m1;
            physics = m2;
        }
        void printMarks(){
            cout<<"Your result is here :"<<endl
                <<"Maths: "<<maths<<endl
                <<"Physics"<<physics<<endl;
        }
};
class Sports : public virtual Student
{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }
        void printScore(){
            cout<<"Your score is "<<score<<endl;
        }
};
class Result : public Test,public Sports
{
    private:
        float total;
    public:
        void display(){
            total = maths + physics + score;
            printNumber();
            printMarks();
            printScore();
            cout<<"Your total score is "<<total<<endl;
        }
};
int main(){
    Result r1;
    r1.setMarks(78,89);
    r1.set_number(5965);
    r1.set_score(99);
    r1.display();
}