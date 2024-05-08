// Problem 1:
// AP - Program to find sum of arithmetic series

#include <iostream>
using namespace std;

int main()
{
    float a, d;
    int n;

    cout << "Enter first number of the series: " << endl;
    cin >> a;
    cout << "Enter common difference: " << endl;
    cin >> d;
    cout << "Enter the total numbers will present in the series: " << endl;
    cin >> n;

    float sum = 0;
    sum = n / 2 * (2 * a + (n - 1) * d);
    cout << "The sum of the AP is: " << sum << endl;
    return 0;
}

// Approach 2 - Here, we are adding the current element by previous element and storing in a variable using loop.

// int main()
// {
//     float a, d;
//     int n;

//     cout << "Enter first number of the series: " << endl;
//     cin >> a;
//     cout << "Enter common difference: " << endl;
//     cin >> d;
//     cout << "Enter the total numbers will present in the series: " << endl;
//     cin >> n;

//     float sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + a;
//         a = a + d;
//     }
//     cout << "The sum of the AP is: " << sum << endl;
//     return 0;
// }
