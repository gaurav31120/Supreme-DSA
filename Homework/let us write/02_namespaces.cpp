// A namespace is a collection of related names or identifiers (functions, class, variables) which helps to separate these identifiers from similar identifiers in other namespaces or the global namespace.

// The identifiers of the C++ standard library are defined in a namespace called std.

// In order to use any identifier belonging to the standard library, we need to specify that it belongs to the std namespace.

// Ways of declaring std Namespace

// 1. the :: operator
// 2. the using declaration
// 3. the using directive

// 1. std Namespace Using :: Operator
// The first way we access identifiers in the std namespace is by directly qualifying the identifier with the prefix std::. Here,

// std is the C++ standard library namespace
// :: is the scope resolution operator

#include <iostream>

int main()
{
    std::cout << "Hi Gaurav"; // Hi Gaurav

    return 0;
}

// 2. std Namespace With using Declaration
//  We can bring selected identifiers to the current scope with the help of the using declaration.
//  To do this, we utilize the using keyword.

// #include <iostream>
// // using declartion for cout, endl and string
// using std::cout;

// int main()
// {
//     cout << "Hi Gaurav"; // Hi Gaurav

//     return 0;
// }

// 3. std Namespace With using Directive
// We can use the using directive to bring all the identifiers of the namespace std as if they were declared globally. To do this, we utilize the using keyword.

// By doing this, we can:

// avoid using the std:: prefix
// avoid utilizing the using declaration repeatedly

// #include <iostream>
// // using directive
// using namespace std;

// int main()
// {
//     cout << "Hi Gaurav!"; //  Hi Gaurav!
//     return 0;
// }
