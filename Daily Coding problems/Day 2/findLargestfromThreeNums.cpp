// Problem 3:
// Given 3 numbers find the largest number (here we are taking all distinct numbers)

#include <iostream>
using namespace std;

int main()
{
    int first, second, third;
    cout << "Enter first number: " << endl;
    cin >> first;
    cout << "Enter second number: " << endl;
    cin >> second;
    cout << "Enter third number: " << endl;
    cin >> third;

    if (first > second && first > third)
    {
        cout << first << " is the largest number: " << endl;
    }
    else if (second > first && second > third)
    {
        cout << second << " is the largest number: " << endl;
    }
    else
    {
        cout << third << " is the largest number: " << endl;
    }

    return 0;
}