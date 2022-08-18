#include <iostream>
using namespace std;

int main()
{
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the marks of student no. " << i + 1 << endl;
        cin >> marks[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "The marks is " << marks[i] << endl;
    }
    return 0;
}