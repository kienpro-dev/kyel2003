#include <iostream>

using namespace std;

long long power(int a, int n)
{
    if (n == 1)
        return a;
    else
    {
        if (n % 2 == 0)
            return power(a, n / 2) * power(a, n / 2);
        else
            return power(a, n / 2) * power(a, n / 2) * a;
    }
}

int main()
{
    cout << power(5,15);
    return 0;
}