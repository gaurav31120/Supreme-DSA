// cin.igonore()

// cin.igonore() - The cin.ignore() function is used in C++ to ignore characters in the input buffer.
//  It's commonly used after reading input with cin to clear any additional characters, such as newline
//  characters, left in the buffer.

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     char name[20];
//     int number;
//     cout << "Enter a number: " << endl;
//     cin >> number;
//     cout << "Enter name: " << endl;
//     // cin>>name;
//     cin.getline(name, 20);
//     cout << name << " ";
//     cout << number;
//     return 0;
// }

// output - this is wrong after giving number 65 it is exiting
//  Enter a number:
//  65
//  Enter name:
//   65

// so to resolve this issue we will use cin.ignore()

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char name[20];
    int number;
    cout << "Enter a number: " << endl;
    cin >> number;
    cin.ignore();
    cout << "Enter name: " << endl;
    // cin>>name;
    cin.getline(name, 20);
    cout << name << " ";
    cout << number;
    return 0;
}

// output
// Enter a number:
// 65
// Enter name:
// gaurav
// gaurav 65
