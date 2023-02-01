#include <iostream>

using namespace std;

int main()
{
    long int n, k, res = 0;
    cin >> n;
    while (n > 0)
    {
        res += n % 10;
        n /= 10;
    }
    while (res > 0)
    {
        k += res % 10;
        res /= 10;
    }
    cout << k;
    return 0;
}