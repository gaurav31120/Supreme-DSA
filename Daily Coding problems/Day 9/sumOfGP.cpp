// Problem 1:
// GP - Program to find sum of geometric series.

#include <iostream>
using namespace std;

int main()
{
    double a; // first num
    cout << "Enter first number: " << endl;
    cin >> a;
    double r; // common ratio
    cout << "Enter common ratio: " << endl;
    cin >> r;
    int n;
    cout << "Enter the total numbers will present in the series: " << endl;
    cin >> n;

    double sum = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        sum = sum + a;
        a = a * r;
    }

    cout << "The sum of GP series is: " << sum << endl;
    return 0;
}