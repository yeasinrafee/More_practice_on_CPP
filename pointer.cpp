#include <iostream>
using namespace std;

int main()
{
    // int x = 4;
    // int *p;
    // p = &x;

    // cout << x << endl;
    // cout << &x << endl;
    // cout << p << endl;
    // cout << *p << endl;
    int num1 = 45;
    int num2 = 69;

    int *p1, *p2;
    p1 = &num1;
    p2 = &num2;

    int sum = *p1 + *p2;
    cout << sum << endl;
    return 0;
}