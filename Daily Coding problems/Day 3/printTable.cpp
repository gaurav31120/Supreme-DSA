// Problem 3:
// Print table of a number

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: " << endl;
    cin >> number;
    cout << "The table of " << number << " is: " << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << number << " * " << i << " = " << number * i << endl;
    }

    return 0;
}
