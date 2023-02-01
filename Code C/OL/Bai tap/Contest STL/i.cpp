#include <bits/stdc++.h>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    map<string, int> mp;
    int n;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        if (mp.count(str) != 0)
        {
            cout << str << mp[str] << endl;
            mp[str]++;
        }
        else
        {
            cout << "OK" << endl;
            mp[str]++;
        }
    }
    return 0;
}