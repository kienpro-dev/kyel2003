#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int a[300000], n, j = 0;
    cin >> s >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < s.length(); i++)
    {
        if (i == a[j])
        {
            cout << " " << s[i];
            j++;
        }
        else
            cout << s[i];
    }
    return 0;
}