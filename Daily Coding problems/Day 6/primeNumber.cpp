// Problem 2:
// Prime number - Find whether a given number is prime or not

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;

    if (num == 0 || num == 1)
    {
        cout << num << " is not a prime number." << endl;
        return 0;
    }
    int i;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << num << " is not a prime number." << endl;
            return 0;
        }
    }
    cout << num << " is a prime number." << endl;

    return 0;
}