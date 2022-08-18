#include <iostream>
using namespace std;

int fact(int n)
{
    // base case
    if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    int n;
    cout << "Enter your number : " << endl;
    cin >> n;
    int factorial = fact(n);
    cout << factorial << endl;
    return 0;
}