#include<iostream>
using namespace std;
class Student{ // user defined data type
public:
    string name;
    int rno;
    float marks;
    Student(string name, int rno, float marks){
        this->name = name;
        this->rno = rno;
        this->marks = marks;
    }
};
void change(Student* s){
    s->name = "Harsh";
}
int main(){
    Student* s = new Student("Raghav",76,92.6);
    cout<<s->name<<endl;
    change(s);
    cout<<s->name<<endl;
}