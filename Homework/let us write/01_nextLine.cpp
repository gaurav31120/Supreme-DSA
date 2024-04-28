// How to go to next line one option is using endl, find another?
// Ans: "\n"

// what is "\n"?
// The newline character (\n) is called an escape sequence,
// and it forces the cursor to change its position to the beginning of the next line on the screen. This results in a new line.

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello \n";
    cout << "world \n";

    cout << "Learn " << endl;
    cout << "cpp " << endl;

    return 0;
}
// Output of the above code.
// Hello
// world
// Learn
// cpp