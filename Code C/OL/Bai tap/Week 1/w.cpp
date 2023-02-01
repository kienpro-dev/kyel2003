#include <iostream>
#include <math.h>

using namespace std;

int convert(int x)
{
    int cnt = 0;
    while (x % 2 == 0)
    {
        cnt++;
        x /= 2;
    }
    for (int i = 3; i <= sqrt(x); i+=2)
    {
        while (x % i == 0)
        {
            cnt++;
            x /= i;
        }
    }
    if (x > 1)
        cnt++;
    return cnt;
}

int main()
{
    int t, a, b, k;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> k;
        if (a < b)
            swap(a, b);
        if (k == 1)
        {
            if (a != b && a % b == 0)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else
        {
            int s = convert(a) + convert(b);
            if (s >= k)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}