#include <iostream>

using namespace std;

int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int *a = new int[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum+=a[i];
        }
        if (sum == m)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        delete[] a;
    }
    return 0;
}