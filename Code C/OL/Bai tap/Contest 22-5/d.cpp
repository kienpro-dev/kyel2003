#include <iostream>

using namespace std;

int main()
{
    long long n, b, c;
    cin >> n;
    b = n + 1;
    c = 2 * n + 1;
    if (n % 2 == 0)
        n /= 2;
    else if (b % 2 == 0)
        b /= 2;
    if (n % 3 == 0)
        n /= 3;
    else if (b % 3 == 0)
        b /= 3;
    else if (c % 3 == 0)
        c /= 3;
    cout << ((n % 1000000007) * ((b * c) % 1000000007)) % 1000000007;
    return 0;
}