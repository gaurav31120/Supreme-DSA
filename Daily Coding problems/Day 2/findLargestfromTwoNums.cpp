// Problem 2:
// Given 2 numbers find the largest number

#include <iostream>
using namespace std;

int main()
{
    int first, second;
    cout << "Enter first number: " << endl;
    cin >> first;
    cout << "Enter second number: " << endl;
    cin >> second;

    if (first > second)
    {
        cout << first << " is the largest number: " << endl;
    }
    else if (second > first)
    {
        cout << second << " is the largest number: " << endl;
    }
    else
    {
        cout << "Both are same" << endl;
    }

    return 0;
}