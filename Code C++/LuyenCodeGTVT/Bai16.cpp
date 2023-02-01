// son cot
#include <iostream>

using namespace std;

int main()
{
    int n, k, res;
    cin >> n >> k;
    res = k;
    for (int i = 2; i <= n; i++)
        res *= (k - 1);
    cout << res;
    return 0;
}