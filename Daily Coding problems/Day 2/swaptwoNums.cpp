// Problem 1:
// Swap two numbers

#include <iostream>
using namespace std;

int main()
{
    int firstNum, secondNum;
    cout << "Enter first number: " << endl;
    cin >> firstNum;
    cout << "Enter second number: " << endl;
    cin >> secondNum;

    int temp;
    temp = firstNum;
    firstNum = secondNum;
    secondNum = temp;

    cout << "After swapping: " << endl;

    cout << "First Num is: " << firstNum << endl;
    cout << "Second Num is: " << secondNum << " ";
    return 0;
}
