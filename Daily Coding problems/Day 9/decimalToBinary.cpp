// Problem 2:
// Program for Decimal To Binary Conversion.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a decimal number: " << endl;
    cin >> num;
    int binary[32];
    int i = 0;
    int decimalNum = num;

    while (num != 0)
    {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    cout << "The binary value of " << decimalNum << " is: ";

    for (int j = i - 1; j >= 0; j--)
    {
        cout << binary[j];
    }
    return 0;
}