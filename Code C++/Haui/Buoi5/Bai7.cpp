#include <iostream>

using namespace std;

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
    float a[100], b[100], c[100];
    int j = 0, k = 0;
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > 0)
            b[j++] = a[i];
        else if (a[i] < 0)
            c[k++] = a[i];
    }
    cout << "Mang b duong: ";
    for (int i = 0; i < j; i++)
        cout << b[i] << " ";
    cout << "\nMang c am: ";
    for (int i = 0; i < k; i++)
        cout << c[i] << " ";
    return 0;
}