#include <iostream>

using namespace std;

void deleteElements(int a[], int &n, int idx)
{
    for (int i = idx; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
}

void deleteDuplicateElements(int a[], int &n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] == a[j])
            {
                deleteElements(a, n, j);
                j--;
            }
}

int main()
{
    int n, m, cnt;
    cin >> n;
    m = n;
    int a[100], b[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    deleteDuplicateElements(b, m);
    for (int i = 0; i < m; i++)
    {
        cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                cnt++;
            }
        }
        b[i] = cnt;
    }
    deleteDuplicateElements(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " " << b[i] << endl;
    return 0;
}