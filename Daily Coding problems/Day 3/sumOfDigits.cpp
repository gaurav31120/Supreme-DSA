// Problem 1:
// Sum of digits - Find sum of digits of a number

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter any number: " << endl;
    cin >> num;
    int sum = 0;
    while (num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    cout << "The sum of digits is: " << sum << endl;
    return 0;
}