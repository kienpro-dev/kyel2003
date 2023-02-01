#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, cnt = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i += 2)
    {
        if (s[i] == 'a' && s[i + 1] == 'a')
        {
            s[i + 1] = 'b';
            cnt++;
        }
        else if (s[i] == 'b' && s[i + 1] == 'b')
        {
            s[i + 1] = 'a';
            cnt++;
        }
    }
    cout << cnt << "\n"<<s;
    return 0;
}