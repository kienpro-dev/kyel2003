#include <iostream>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        unsigned long long a[101];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        unsigned long long sum = (a[0] | a[1]);
        for (int i = 2; i < n; i++)
            sum |= a[i];
        cout << sum << endl;
    }
    return 0;
}