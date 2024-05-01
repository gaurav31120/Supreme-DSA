// Problem 1:
// Reverse the digits - Find the reverse of digits of a number

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter any number: " << endl;
    cin >> num;

    int rev = 0;
    while (num != 0)
    {
        rev = num % 10 + rev * 10;
        num = num / 10;
    }
    cout << "The reversed number is " << rev << endl;
    return 0;
}