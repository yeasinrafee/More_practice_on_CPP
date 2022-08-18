#include <iostream>
using namespace std;

class Mobile
{
public:
    void sentMassege()
    {
        cout << "Hello!" << endl;
    }
    virtual void AbsMassege() = 0;
};

class Yeasin : public Mobile
{
public:
    void AbsMassege()
    {
        cout << "Hey, This is Yeasin!" << endl;
    }
};

class Rafee : public Mobile
{
public:
    void AbsMassege()
    {
        cout << "Hey, This is Rafee!" << endl;
    }
};

int main()
{
    Mobile *m;
    Yeasin y;
    Rafee r;

    m = &y;
    m->sentMassege();
    m->AbsMassege();
    m = &r;
    m->AbsMassege();

    return 0;
}