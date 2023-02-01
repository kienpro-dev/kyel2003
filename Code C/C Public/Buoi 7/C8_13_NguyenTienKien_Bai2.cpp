#include <iostream>

using namespace std;

void DieuKienNhap(int &n)
{
    do
    {
        cin >> n;
    } while (n < 1 || n >= 100);
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

bool ChechPrime_Lite(int x)
{
    // chi kiem tra snt < 10
    if (x == 2 || x == 3 || x == 5 || x == 7)
    {
        return true;
    }
    return false;
}

void ThemPhanTu(int a[], int &n, int index, int val)
{
    for (int i = n; i > index; i--)
    {
        a[i] = a[i - 1];
    }
    a[index] = val;
    n++;
}

void XoaPhanTu(int a[], int &n, int index)
{
    for (int i = index; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}

void ThemPhanTuTheoDieuKien(int a[], int &n, int val)
{
    // Dieu kien: them vao sau cac so nguyen to < 10
    for (int i = 0; i < n; i++)
    {
        if (ChechPrime_Lite(a[i]))
        {
            ThemPhanTu(a, n, i + 1, val);
            if (ChechPrime_Lite(val))
            {
                i++;
            }
        }
    }
}

void XoaPhanTuTheoDieuKien(int a[], int &n)
{
    // Dieu kien: xoa so chia het cho 3 va khong chia het cho 5
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0 && a[i] % 5 != 0)
        {
            XoaPhanTu(a, n, i);
            i--;
        }
    }
}

void XoaPhanTuTrung(int a[], int &n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                XoaPhanTu(a, n, j);
                j--;
            }
        }
    }
}

int main()
{
    int n, x;
    DieuKienNhap(n);
    int a[99];
    NhapMang(a, n);
    cin >> x;
    ThemPhanTuTheoDieuKien(a, n, x);
    XuatMang(a, n);
    cout << endl;
    XoaPhanTuTheoDieuKien(a, n);
    XuatMang(a, n);
    cout << endl;
    XoaPhanTuTrung(a, n);
    XuatMang(a, n);
    return 0;
}