#include <iostream>

using namespace std;

int main()
{
    int n, x, cnt = 0;
    cin >> n >> x;
    int *a = new int[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    while (a[x] != 0)
    {
        cnt++;
        int t = a[x];
        a[x] = 0;
        x = t;
    }
    cout << cnt;
    delete[] a;
    return 0;
}