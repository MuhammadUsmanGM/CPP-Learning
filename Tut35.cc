#include <iostream>
using namespace std;
class Student{
    protected:
        int roll_num;
    public:
        void set_roll_num(int);
        void get_roll_num();
};
void Student :: set_roll_num(int r){
    roll_num = r;
}
void Student :: get_roll_num(){
    cout<<"Roll no is "<<roll_num<<endl;
}
class Exam : public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float, float);
        void get_marks();
};
void Exam :: set_marks(float m1,float m2){
    maths = m1;
    physics = m2;
}
void Exam :: get_marks(){
    cout<<"THe marks in maths are "<<maths<<" and in physics is "<<physics<<endl;
}

class Result : public Exam
{
    float percentage;
    public:
        void display(){
            get_roll_num();
            get_marks();
            cout<<"Your percentage is "<<(maths+physics)/2<<"%"<<endl;
        };
};

int main(){
    Result r1;
    r1.set_roll_num(420);
    r1.set_marks(90,99);
    r1.display();
}