#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int second = 1;
        while (n--)
        {
            int l, r;
            cin >> l >> r;
            if (second < l)
                second = l;
            if (second <= r)
            {
                cout << second << endl;
                second++;
            }
            else
                cout << 0 << endl;
        }
    }
    return 0;
}