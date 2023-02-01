#include <iostream>

using namespace std;

int main()
{
    long int n, res = 0;
    cin >> n;
    while (n > 0)
    {
        res = res + n % 10;
        n = n / 10;
    }
    if (res % 10 == 9)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}