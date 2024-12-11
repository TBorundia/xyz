#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float percent;
    Student(string name, int rno, int percent){
        this->name=name;
        this->rno=rno;
        this->percent=percent;
    }
};

void change(Student * s){
    s->name="Pari";
}
int main()
{
    Student* s= new Student("tina",45,78.98);
    cout << s->name << endl;

    change(s);
    cout << s->name << endl;
    return 0;
}