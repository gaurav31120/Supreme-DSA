// Table of 7

#include <iostream>
using namespace std;

int main()
{
    int i, num;
    num = 7;
    cout << "Table of 7: " << endl;
    for (i = 1; i <= 10; i++)
    {
        cout << num << " * " << i << " = " << num * i << endl;
    }
    return 0;
}

// output
// Table of 7: 
// 7 * 1 = 7
// 7 * 2 = 14
// 7 * 3 = 21
// 7 * 4 = 28
// 7 * 5 = 35
// 7 * 6 = 42
// 7 * 7 = 49
// 7 * 8 = 56
// 7 * 9 = 63
// 7 * 10 = 70