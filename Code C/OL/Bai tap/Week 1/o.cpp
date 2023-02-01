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
    int a[5], n = 4, i = 0;
    while (n--)
        cin >> a[i++];
    sort(a, i);
    for (int j = 0; j < i - 1; j++)
        cout << a[i - 1] - a[j] << " ";
    return 0;
}