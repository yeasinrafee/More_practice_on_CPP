#include <iostream>
using namespace std;

int main()
{
    try
    {
        int num1, num2;
        cout << "Enter your first num: " << endl;
        cin >> num1;
        cout << "Enter your second num: " << endl;
        cin >> num2;

        if (num2 == 0)
            throw 1;

        double result = (double)num1 / num2;
        cout << "Division is : " << result << endl;
    }
    catch (...)
    {
        cout << "You can't input 0, Please try again later." << endl;
    }

    return 0;
}