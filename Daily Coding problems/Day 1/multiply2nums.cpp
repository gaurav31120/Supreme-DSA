// Problem2:
// Two numbers are given, print their product by taking input from user

#include <iostream>
using namespace std;

int main()
{
    int firstNum, secondNum;
    cout << "Enter two numbers: " << endl;

    cin >> firstNum;
    cin >> secondNum;
    int product = firstNum * secondNum;
    cout << "The product of two numbers is: " << product << endl;
    return 0;
}
