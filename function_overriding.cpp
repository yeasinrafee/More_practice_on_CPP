#include<iostream>
using namespace std;

class Person{
public:
    void display(){
        cout<<"This is a Person."<<endl;
    }
};

class Student : public Person{
public:
    void display(){
        cout<<"This is a Student."<<endl;
    }
};
class Teacher : public Person{
public:
    void display(){
        cout<<"This is a Teacher."<<endl;
    }
};

int main(){

    Teacher t;
    t.display();
    Student s;
    s.display();
    Person p;
    p.display();

return 0;
}
