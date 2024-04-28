// Double datatype uses default precision
// In C++ when we print a double value it appears rounded off due to default formatting settings. This
// rounding behaviour is typically controlled by the default precision set for floating point output.
// To control this we can use the precision explicitly.
// use  std:setprecision manipulator from <iomanip> header file.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double num = 34.33424242323;
    cout << "Without set precision " << num << endl;
    cout << "Using set precision " << setprecision(9) << num << endl;

    return 0;
}