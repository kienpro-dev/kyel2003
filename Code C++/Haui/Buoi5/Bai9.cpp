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
    int a[100], b[100];
    int j = n - 1;
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[j--] = a[i];
    }
    cout << "Mang copy nguoc: ";
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";
    return 0;
}