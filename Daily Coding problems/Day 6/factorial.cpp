// Problem 1:
// Find factorial of a number

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a numbetr: "<<endl;
    cin>>num;

    if(num == 0 || num == 1) {
        cout<<"The factorial of "<<num<<" is :"<<1<<endl;
        return 0;
    }
    int n = num;
    int fib = 1;

    while(n>1) {
        fib = fib * n;
        n--;
    }

    cout<<"The factorial of "<<num<<" is :"<<fib<<endl;
    return 0;
}