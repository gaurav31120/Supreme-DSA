// Problem 1:
// Fibonacci Number ----- Find nth Fibonacci Number of a given number

#include <iostream>
using namespace std;

int main()
{
    int num;
    int a = 0, b = 1, c;
    cout << "Enter a number: " << endl;
    cin >> num;

    if (num == 0 || num == 1)
    {
        cout << "The fib number for " << num << " is: " << num << endl;
    }
    else
    {
        for (int i = 2; i <= num; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        cout << "The fib number for " << num << " is: " << c << endl;
    }
    return 0;
}