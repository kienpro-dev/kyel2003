// luffy tham ban
#include <iostream>
#include <math.h>

using namespace std;

void sortAsc(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
                swap(a[i], a[j]);
        }
    }
}

void output(int *a, int &n)
{
    sortAsc(a, n);
    long sum = 0;
    int i_home = (n - 1) / 2;
    for (int i = 0; i < n; i++)
    {
        sum += abs(a[i_home] - a[i]);
    }
    cout << sum;
}

int main()
{
    int n; cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    output(a, n);
    delete[] a;
    return 0;
}
