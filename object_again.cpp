#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    double gpa;
    void display()
    {
        cout << id << "  " << gpa << endl;
    }
    // void setValue(int a, double b)
    // {
    //     id = a;
    //     gpa = b;
    // }

    Student(int a, double b)
    {
        id = a;
        gpa = b;
    }

    Student()
    {
        cout << "This is a defoult constractor." << endl;
    }
};

int main()
{
    Student ob;
    Student rafee(3083, 3.88);
    // rafee.setValue(21203083, 3.80);
    rafee.display();
    // cout << rafee.id << endl;
    // cout << rafee.gpa << endl;
    return 0;
}