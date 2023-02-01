#include <iostream>

using namespace std;

void input(int a[], int &n)
{
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == -1 || n == 100)
        {
            break;
        }
        n++;
    }
    if (n != 100 || n == 100 && a[n - 1] == -1)
        n--;
}

void output(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void sortDesc(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] < a[j])
                swap(a[i], a[j]);
}

int main()
{
    int n = 1, a[100];
    input(a, n);
    cout << "So luong phan tu da nhap thoa man: " << n << endl;
    cout << "Mang da nhap: ";
    output(a, n);
    sortDesc(a, n);
    cout << "Mang sau khi sap xep: ";
    output(a, n);
    return 0;
}