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
    // function Using parameters :
    // void setValue(int x, double y)
    // {
    //     id = x;
    //     gpa = y;
    // }

    // Constructor :
    Student(int x, double y)
    {
        id = x;
        gpa = y;
    }
    // Default Constructor :
    Student()
    {
        cout << "This is a default constructor." << endl;
    }
};

int main()
{
    Student od;

    Student Yeasin(101, 4.72);
    // Yeasin.id = 101;
    // Yeasin.gpa = 4.72;
    // cout << Yeasin.id << "  " << Yeasin.gpa << endl;
    // Yeasin.setValue(101, 4.72);
    Yeasin.display();

    Student Rafee(102, 4.83);
    // Rafee.id = 102;
    // Rafee.gpa = 4.83;
    // cout << Rafee.id << "  " << Rafee.gpa << endl;
    // Rafee.setValue(102, 4.83);
    Rafee.display();
    return 0;
}