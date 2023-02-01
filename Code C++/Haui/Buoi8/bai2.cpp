#include <iostream>

using namespace std;

void input(int &n)
{
    cout << "Nhap so phan tu: ";
    do
    {
        cin >> n;
        if (n <= 0)
            cout << "Khong thoa man nhap lai: ";
    } while (n <= 0);
}

void arrayIn(int *a, int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void arrayOut(int *a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int greatestEvenNumberOfArray(int *a, int n)
{
    int x = a[0];
    for (int i = 0; i < n; i++)
        if (a[i] > x && a[i] % 2 == 0)
            x = a[i];
    if (x == a[0] && a[0] % 2 != 0)
        return -1;
    return x;
}

void sortDesc(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] < a[j])
                swap(a[i], a[j]);
}

int main()
{
    int n;
    input(n);
    int *a = new int[n];
    cout << "Nhap cac phan tu: ";
    arrayIn(a, n);
    cout << "Mang sau khi nhap: ";
    arrayOut(a, n);
    int x = greatestEvenNumberOfArray(a, n);
    if (x == -1)
        cout << "Mang khong co so chan";
    else
        cout << "So chan lon nhat mang: " << x;
    sortDesc(a, n);
    cout << "\nMang sau khi sap xep giam dan: ";
    arrayOut(a, n);
    delete[] a;
    return 0;
}