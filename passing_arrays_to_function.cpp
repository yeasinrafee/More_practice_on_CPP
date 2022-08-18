#include <iostream>
using namespace std;

void passing(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int array[5] = {34, 56, 67, 45, 67};
    passing(array);
    return 0;
}