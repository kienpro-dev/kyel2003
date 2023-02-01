#include <bits/stdc++.h>

using namespace std;

void sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
                swap(a[i], a[j]);
}

void inputArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

int main()
{
    int n, m, a[100], b[100], cnt = 0;
    cin >> n;
    inputArray(a, n);
    sort(a, n);
    cin >> m;
    inputArray(b, m);
    sort(b, m);
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (abs(a[i] - b[j]) <= 1)
        {
            cnt++;
            i++;
            j++;
        }
        else
        {
            if (a[i] < b[j])
                i++;
            else
                j++;
        }
    }
    cout << cnt;
    return 0;
}