#include <iostream>

using namespace std;

int fib(int n)
{
    if (n <= 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    cout << fib(5) << endl;
    for(int i = 1; i <= 10;i++) {
        cout << fib(i) << " ";
    }
    return 0;
}