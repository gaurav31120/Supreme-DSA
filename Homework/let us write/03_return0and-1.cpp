//  Difference between return 0 and return -1?

// The Return statement in C++:

// C++ support return statements, which are also called jump statements.
// It is used to return a value from the function or stop the execution of the function.

// return 0 ----- In C++, the return 0 statement is commonly used to indicate successful termination of a program.

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Success";

//     return 0;
// }
// output
// Success

//  return -1 ----- return -1 or return 1 statements are often used to indicate that an error has occurred during the execution of a program.

// I would like to give a small example for the usage of -1 in return statement.

// Declare an array of 5 elements and get those values.
// Say it be a[0]=1,a[1]=2,a[2]=3,a[3]=4,a[4]=5
// Now you have to search for a key element in the array and return its position if its found.
// If the key element is 4, you will have to return the index that is 3.
// if the element is 6, it is not in the array and in this situation you have to return something other than 0 and 1 because if u return 0 or 1, its is understood that the first or second element is 6 which is not correct.
// so here you use return -1 statement.

#include <iostream>
using namespace std;

int findIndex(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int key = 6;

    int ans = findIndex(arr, n, key);

    cout << ans << endl;

    if (ans == -1)
    {
        cout << "Element not found.";
    }
    else
    {
        cout << "Element found at index: " << ans;
    }

    return 0;
}