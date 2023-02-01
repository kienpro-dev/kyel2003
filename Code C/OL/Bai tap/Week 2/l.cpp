#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    if (n == 1)
        cout << "NO";
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                cout << "YES\n" << s[i] << s[i + 1];
                return 0;
            }
        }
        cout << "NO";
    }
    return 0;
}