#include <iostream>

using namespace std;

void sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
                swap(a[i], a[j]);
}

int main()
{
    int n, m, s = 0;
    cin >> n >> m;
    int a[100];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, n);
    for (int i = 0; i < m; i++)
    {
        if(a[i]>0)
            break;
        s -= a[i];
    }
    cout << s;
    return 0;
}