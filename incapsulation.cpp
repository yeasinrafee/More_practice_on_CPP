#include<iostream>
using namespace std;

class Student{

private:
    string name;
    int id;

public:
    void makeName(string a, int b){

        name = a;
        id = b;
    }
    string showName(){

        return name;
    }
    int showId(){

        return id;
    }


};


int main(){

Student s1;
s1.makeName("Rafee", 212030);
cout<<s1.showName()<<"  " << s1.showId()<<endl;

return 0;
}
