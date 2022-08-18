#include <iostream>
using namespace std;

int main()
{
    char name[20];
    cout << "Enter your name : ";
    // cin >> name;
    gets(name);
    cout << "Welcome " << name << endl;
    return 0;
}