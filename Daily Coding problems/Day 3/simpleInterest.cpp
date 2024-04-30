// Problem 2:
// Simple Interest - Take all values as input from user and calculate Simple Interest

#include <iostream>
using namespace std;

int main()
{
    float p, r, t;
    float si = 0;
    cout << "Enter principal: " << endl;
    cin >> p;
    cout << "Enter rate of interest: " << endl;
    cin >> r;
    cout << "Enter time in years: " << endl;
    cin >> t;

    si = (p * r * t) / 100;

    cout << "Your calculated simple interest is: " << si << endl;

    return 0;
}