// tong 3 so nguyen
#include <iostream>

using namespace std;

int main()
{
    long long n, s;
    cin >> n >> s;
    if (s > 3 * n)
    {
        cout << 0;
        return 0;
    }
    long long cnt = 0;
    for (long i = 0; i <= n; i++)
    {
        for (long j = 0; j <= n; j++)
        {
            for (long k = 0; k <= n; k++)
            {
                if (i + j + k == s)
                    cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}