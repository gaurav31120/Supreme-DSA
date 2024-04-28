// Problem 3:
// Find whether a number is even or odd

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << number << " is even number" << endl;
    }
    else
    {
        cout << number << " is odd number" << endl;
    }
    return 0;
}