#include <iostream>

using namespace std;

void DieuKienNhap(int &n)
{
    do
    {
        cin >> n;
        if (n < 3 || n > 50)
        {
            cout << "Khong thoa man, nhap lai: ";
        }
    } while (n < 3 || n > 50);
}

void NhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void SapXepTangDan(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                Swap(a[i], a[j]);
            }
        }
    }
}

void SapXepGiamDan(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                Swap(a[i], a[j]);
            }
        }
    }
}

void SapXep(int a[], int n)
{
    SapXepTangDan(a, n);
    int iAm;
    int i = 0;
    while (a[i] < 0)
    {
        i++;
        iAm = i;
    }
    SapXepGiamDan(a, iAm);
}

int main()
{
    int n;
    cout << "Nhap n: ";
    DieuKienNhap(n);
    int a[99];
    cout << "Nhap cac phan tu: ";
    NhapMang(a, n);
    cout << "Mang ban dau: ";
    XuatMang(a, n);
    SapXep(a, n);
    cout << "\nMang yeu cau: ";
    XuatMang(a, n);
    return 0;
}