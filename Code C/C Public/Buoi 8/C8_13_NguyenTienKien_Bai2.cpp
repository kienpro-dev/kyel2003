#include <iostream>
#include <math.h>

using namespace std;

void DieuKienNhap(int &n)
{
    do
    {
        cin >> n;
    } while (n < 1 || n > 100);
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

void ThemPhanTu(int a[], int &n, int index, int val)
{
    for (int i = n; i > index; i--)
    {
        a[i] = a[i - 1];
    }
    a[index] = val;
    n++;
}

bool CheckPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        return true;
    }
    return false;
}

void ThemPhanTuTheoDieuKien(int a[], int &n, int val)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (CheckPerfect(a[i]))
        {
            ThemPhanTu(a, n, i, val);
            i++;
        }
        else
        {
            sum++;
        }
    }
    if (sum == n)
    {
        ThemPhanTu(a, n, n, val);
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

void XoaPhanTuTheoDieuKien(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0 && a[i] < 0)
        {
            XoaPhanTu(a, n, i);
            i--;
        }
    }
}

int Find(int a[], int n, int s)
{
    SapXepTangDan(a, n);
    int sum = 0;
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum > s)
        {
            break;
        }
        result++;
    }
    return result;
}

int main()
{
    int n, a[99];
    DieuKienNhap(n);
    NhapMang(a, n);
    int x, s;
    cin >> x >> s;
    SapXepGiamDan(a, n);
    XuatMang(a, n);
    cout << endl;
    ThemPhanTuTheoDieuKien(a, n, x);
    XuatMang(a, n);
    cout << endl;
    XoaPhanTuTheoDieuKien(a, n);
    XuatMang(a, n);
    cout << endl;
    cout << Find(a, n, s);
    return 0;
}