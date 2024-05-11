// Problem 1:
// Program to print Floyd’s Triangle

#include <iostream>
using namespace std;

int main()
{
    int count; // no of lines
    cout << "Enter the no. of lines you want: " << endl;
    cin >> count;

    int n = 1; // natural nums
    int x = 1;

    while (x <= count)
    {
        int i = x;
        while (i != 0)
        {
            cout << n << " ";
            i--;
            n++;
        }

        cout << endl;
        x++;
    }
    return 0;
}
