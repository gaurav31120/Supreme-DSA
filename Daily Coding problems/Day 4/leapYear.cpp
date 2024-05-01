// Problem 2:
// Leap year - Program to find the year is leap year or not

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter the year: " << endl;
    cin >> year;
    if (year % 400 == 0)
    {
        cout << year << " is a leap year." << endl;
    }
    else if (year % 100 == 0)
    {
        cout << year << " is not a leap year." << endl;
    }
    else if (year % 4 == 0)
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap year." << endl;
    }
    return 0;
}