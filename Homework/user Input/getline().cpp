//getline(sin,str)

//   getline(cin, 10) - This is not valid because the second argument of getline() should be a string variable where the input will be stored, not an integer. The getline() function reads a line from an input stream (in this case, cin) and stores it into a string variable provided as its first argument.

// #include <iostream>
// using namespace std;

// int main()
// {
//     string data;
//     cin >> data;      // My name is Gaurav I am from India
//     cout << data;     // My
//     // Here the cout<<data will only print the string till it finds any space. Here after my it finds a space so it prints till my only. To resolve this issue we use getline(cin,data);

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string data;
    getline(cin, data); // My name is Gaurav I am from India
    cout << data;       // My name is Gaurav I am from India
    // Here the cout<<data will print total string while taking input.
    return 0;
}