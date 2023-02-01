#include <iostream>

using namespace std;

long long findGCD(long long a, long long b)
{
    if (a < b)
        swap(a, b);
    long long r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int main()
{
    long long m, n;
    cin >> m >> n;
    if (m > n)
        swap(m, n);
    long long res = findGCD(m, n);
    if (m == n)
        cout << m;
    else if (m % 2 == 0 && n % 2 == 0 && (n / res) % 2 != 0 && (m / res) % 2 != 0|| m % 2 != 0 && n % 2 != 0)
        cout << res;
    else
        cout << 0;
    return 0;
}