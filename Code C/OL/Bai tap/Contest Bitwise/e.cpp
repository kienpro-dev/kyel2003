#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, sum;
    cin >> t;
    while (t--)
    {
        sum = 0;
        cin >> n;
        char a[100001], b[100001], c[100001];
        cin >> a >> b;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '0' && b[i] == '0')
                c[i] = 'a';
            else if (a[i] == '1' && b[i] == '1')
                c[i] = 'b';
            else
                c[i] = 'c';
        }
        for (int i = 0; i < n; i++)
        {
            if (((c[i] == 'a' && c[i + 1] == 'b') || (c[i] == 'b' && c[i + 1] == 'a')) && i < n - 1)
            {
                sum += 2;
                i++;
            }
            else if (c[i] == 'a')
                sum ++;
            else if (c[i] == 'c')
                sum += 2;
        }
        cout << sum << endl;
    }
    return 0;
}