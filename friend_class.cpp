#include <iostream>
using namespace std;

class A
{
private:
    int id = 3083;
    string name = "Rafee";

public:
    friend class b;
};

class b
{
public:
    void display(A ob)
    {
        cout << ob.id << endl;
        cout << ob.name << endl;
    }
};

int main()
{
    A ob1;
    b ob2;
    ob2.display(ob1);
    return 0;
}