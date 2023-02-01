#include <iostream>

using namespace std;

void DieuKienNhap(int &n)
{
    do
    {
        cin >> n;
        if (n <= 0 || n >= 100)
        {
            cout << "Khong thoa man, nhap lai: ";
        }
    } while (n <= 0 || n >= 100);
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

void XoaPhanTu(int a[], int &n, int index)
{
    for (int i = index; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}

bool KiemTraSoDenDui(int a)
{
    int so;
    for (int j = a; j > 0; j = j / 10)
    {
        so = j % 10;
        if (so == 4 || so == 7)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    if (so == 4 || so == 7)
    {
        return true;
    }
    return false;
}

void XoaSoDenDui(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        if (KiemTraSoDenDui(a[i]))
        {
            XoaPhanTu(a, n, i);
            i--;
        }
    }
}

void SapXepTangDan(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Nhap n: ";
    DieuKienNhap(n);
    int a[99];
    cout << "Nhap phan tu mang: ";
    NhapMang(a, n);
    cout << "Mang ban dau: ";
    XuatMang(a, n);
    XoaSoDenDui(a, n);
    SapXepTangDan(a, n);
    cout << "\nMang yeu cau: ";
    XuatMang(a, n);
    return 0;
}