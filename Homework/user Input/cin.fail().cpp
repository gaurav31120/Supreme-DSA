// cin.fail()

// cin.fail() returns a boolean value indicating whether the  input operation using cin is failed --- (true) or succeeded ---- (false).

#include <iostream>
using namespace std;

int main()
{
    int i;
    cin >> i;
    if (cin.fail())
    {
        cout << "Process failed" << endl;
    }
    else
    {
        cout << "Processed successfully" << endl;
    }
    return 0;
}