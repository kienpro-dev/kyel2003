#include <iostream>
#include <math.h>

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

int findSmallestPossitiveNumOfArray(int *a, int n)
{
    int min = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > 0)
        {
            min = a[i];
            for (int j = i + 1; j < n; j++)
                if (a[j] < min && a[j] > 0)
                    min = a[j];
            break;
        }
    }
    return min;
}

void searchArray(int *a, int n)
{
    int x = findSmallestPossitiveNumOfArray(a, n);
    if (x == -1)
    {
        cout << "Mang khong so so duong";
        return;
    }
    cout << "Cac so co GTTD nho lon so duong nho nhat: ";
    for (int i = 0; i < n; i++)
        if (abs(a[i]) > x)
            cout << a[i] << " ";
}

void deleteElements(int *a, int &n, int idx)
{
    a = (int *)realloc(a, (n - 1) * (sizeof(int)));
    for (int i = idx; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
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
    cout << "Nhap mang: ";
    arrayIn(a, n);
    cout << "Mang vua nhap: ";
    arrayOut(a, n);
    searchArray(a, n);
    int k;
    cout << "\nNhap chi so cua phan tu muon xoa: ";
    cin >> k;
    deleteElements(a, n, k);
    cout << "Mang sau khi xoa: ";
    arrayOut(a, n);
    sortDesc(a, n);
    cout << "Day sau khi sap giam: ";
    arrayOut(a, n);
    delete[] a;
    return 0;
}