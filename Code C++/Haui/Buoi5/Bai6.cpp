#include <iostream>

using namespace std;

void deleteElements(float a[], int &n, int idx)
{
    for (int i = idx; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
}

void deleteDuplicateElements(float a[], int &n)
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
    int n;
    cout << "Nhap n: ";
    do
    {
        cin >> n;
        if (n < 1 || n > 30)
            cout << "Khong thoa man, nhap lai: ";
    } while (n < 1 || n > 30);
    float a[100], b[100], c[200];
    cout << "Nhap mang a: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Nhap mang b: ";
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int m = 2 * n;
    int j = 0;
    for (int i = 0; i < m; i++)
    {
        c[i] = a[i];
        if (i >= n)
        {
            c[i] = b[j];
            j++;
        }
    }
    deleteDuplicateElements(c, m);
    cout << "Mang c gom: ";
    for (int i = 0; i < m; i++)
        cout << c[i] << " ";
    return 0;
}