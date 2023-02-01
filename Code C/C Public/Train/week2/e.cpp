#include <iostream>

using namespace std;

int main()
{
    long long x, res;
    cin >> x;
    if (x % 5 == 0)
        res = x / 5;
    else
        res = (x / 5) + 1;
    cout << res;
    return 0;
}