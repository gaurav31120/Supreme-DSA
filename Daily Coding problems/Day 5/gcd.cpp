// Problem 1:
// GCD - Find GCD of 2 numbers

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter first num: " << endl;
    cin >> a;
    cout << "Enter second num: " << endl;
    cin >> b;

    int min = a;

    if (a < b)
    {
        min = a;
    }
    else
    {
        min = b;
    }

    while (min > 0)
    {
        if (a % min == 0 && b % min == 0)
        {
            break;
        }
        min--;
    }
    cout << "The GCD is: " << min << endl;
    return 0;
}