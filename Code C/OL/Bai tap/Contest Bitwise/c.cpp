#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[100];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        long long x = a[0];
        for (int i = 1; i < n; i++)
            x &= a[i];
        cout << x << endl;
    }
    return 0;
}