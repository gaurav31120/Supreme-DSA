// Problem 2:
// LCM - Find LCM of 2 numbers

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

    // Formula for LCM is: LCM = (a*b)/GCD;

    long long lcm = 1;
    lcm = (a * b) / min;

        cout << "The LCM is: " << lcm << endl;

    return 0;
}