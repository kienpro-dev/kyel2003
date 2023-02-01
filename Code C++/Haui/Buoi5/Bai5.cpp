#include <iostream>

using namespace std;

void sortDesc(float a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] < a[j])
                swap(a[i], a[j]);
}

int main()
{
    int n;
    float a[100];
    cout << "nhap n: ";
    do
    {
        cin >> n;
        if (n < 1 || n > 30)
            cout << "Khong thoa man, nhap lai: ";
    } while (n < 1 || n > 30);
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Mang ban dau: ";
    for (int i = n - 1; i >= 0; i--)
        cout << a[i] << " ";
    cout << endl;
    sortDesc(a, n);
    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    int x;
    cout << "Nhap x: ";
    cin >> x;
    a[n] = x;
    n++;
    cout << "Mang sau khi chen: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}