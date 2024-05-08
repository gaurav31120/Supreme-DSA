// Problem 2:
// Program for Binary To Decimal Conversion

#include <iostream>
using namespace std;

int main()
{
    long long binary;
    cout << "Enter any binary number: " << endl;
    cin >> binary;
    long long decimal = 0;
    long long base = 1; // 2^0 initially
    int modValue;       // will store modulus every time
    long long binaryNum = binary;

    while (binary != 0)
    {
        modValue = binary % 10;
        decimal = decimal + base * modValue;

        binary = binary / 10;
        base = base * 2;
    }

    cout << "The decimal value of " << binaryNum << " is: " << decimal << endl;
    return 0;
}