#include<iostream>
using namespace std;

class Person{
public:
    string name;
    int age;

void display(){
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
}

};
class Student : public Person{
public:
    int id;

void display2(){
    cout<<endl<<"Student class start from here."<<endl;
    cout<<"Id : "<<id<<endl;
    display();
}


};

int main(){

Person p1;
p1.name = "Yeasin";
p1.age = 20;
p1.display();

Student s1;
s1.name = "Rafee";
s1.age = 21;
s1.id = 212030783;
s1.display2();

return 0;
}
