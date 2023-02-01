#include <iostream>

using namespace std;

void sortDesc(int a[], int iStart, int iEnd)
{
    for (int i = iStart; i < iEnd - 1; i++)
        for (int j = i + 1; j < iEnd; j++)
            if (a[i] < a[j])
                swap(a[i], a[j]);
}

int main()
{
    int n, a[100];
    cout << "Nhap n: ";
    do
    {
        cin >> n;
        if(n < 1 || n > 30)
            cout <<"Khong thoa man, nhap lai: ";
    } while (n < 1 || n > 30);
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Cac so chia het cho 3 va vi tri: "<<endl;
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0 && a[i] % 3 == 0)
            cout << a[i] << " vi tri " << i + 1 << endl;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] % 2 == 0)
            {
                swap(a[i], a[j]);
                break;
            }
        }
    }
    int iEven, i = 0;
    while (a[i] % 2 == 0)
    {
        i++;
        iEven = i;
    }
    sortDesc(a, 0, iEven);
    sortDesc(a, iEven , n);
    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}