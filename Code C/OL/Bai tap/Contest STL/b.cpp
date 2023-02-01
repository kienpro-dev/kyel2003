#include <bits/stdc++.h>

using namespace std;

void toLower(string &a, string &b)
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 32;
        if (b[i] >= 'A' && b[i] <= 'Z')
            b[i] += 32;
    }
}

int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    toLower(s1, s2);
    if (s1 < s2)
        cout << -1;
    else if (s1 > s2)
        cout << 1;
    else if (s1 == s2)
        cout << 0;
    return 0;
}
