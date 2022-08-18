#include <iostream>
using namespace std;

int main()
{ // Initilization :
    // int a[2][3] = {{10, 20, 30}, {40, 50, 60}};

    // Taking input by user :
    int a[2][3];
    cout << "Enter the element of matrix array : " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    // Printing 2d array:
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}