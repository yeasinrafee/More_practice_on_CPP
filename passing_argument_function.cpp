#include <iostream>
using namespace std;

// call by value :
//

// call by reference :
void func(int *num)
{
    *num = 20;
}

int main()
{
    int n = 10;
    cout << "Before calling a function : " << n << endl;
    func(&n);
    cout << "After calling a function : " << n << endl;
    return 0;
}