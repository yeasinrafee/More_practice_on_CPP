#include <iostream>
using namespace std;

int x = 20;

int main()
{
    int x = 10;
    // ::x = 30;
    cout << ::x;
    return 0;
}