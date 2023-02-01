#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int n, cnt = 0;
    map<int, int> mp;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (auto &i : mp)
        if (i.second > cnt)
            cnt = i.second;
    cout << cnt;
    delete[] a;
    return 0;
}