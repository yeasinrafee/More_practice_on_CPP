#include <iostream>
using namespace std;

template <class myTemp1, class myTemp2>
myTemp1 add(myTemp1 a, myTemp2 b)
{
    return a + b;
}

int main()
{
    cout << add(45.24, 56) << endl;
    return 0;
}