#include <iostream>
using namespace std;

double addition(double a, double b);

int main()
{
    cout << "Sum = " << addition(45.34, 56.47);
    return 0;
}

double addition(double a, double b)
{
    double sum = a + b;
    return sum;
}