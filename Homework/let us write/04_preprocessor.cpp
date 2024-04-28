// Preprocessor Directives in C++
// In C++, the preprocessor directives are special commands that are used to instruct the preprocessor.
// It begins with a ‘#’ symbol and tells the preprocessor to the modify source code before compilation.

// #include - Links a header file in the source code.It is mainly used to access pre-existing system header files located in the standard system directories.
// Syntax:#include <header_file>

// While importing a file using angular brackets(<>), the preprocessor uses a predetermined directory path to access the file.

// C++ program showing the header file including
// standard input-output header file

#include <iostream>
using namespace std;

int main()
{

    // "cout<<" belongs to iostream
    cout << "hello world";
    return 0;
}