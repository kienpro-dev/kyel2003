#include <iostream>
#include <string>

using namespace std;

int convert(int x)
{
    int cnt = 0;
    while (x > 0)
    {
        x /= 10;
        cnt++;
    }
    return cnt;
}

int main()
{
    int t;
    cin >> t;
    long long n;
    int a[20];
    while (t--)
    {
        cin >> n;
        if (n % 2 == 0)
            cout << 0 << endl;
        else
        {
            int x = convert(n);
            for (int i = x - 1; i >= 0; i--)
            {
                a[i] = (n % 10);
                n /= 10;
            }
            if (a[0] % 2 == 0)
                cout << 1 << endl;
            else
            {
                bool check = false;
                for (int i = 1; i < x - 1; i++)
                {
                    if (a[i] % 2 == 0)
                    {
                        check = true;
                        break;
                    }
                }
                if (check)
                    cout << 2 << endl;
                else
                    cout << -1 << endl;
            }
        }
    }
    return 0;
}