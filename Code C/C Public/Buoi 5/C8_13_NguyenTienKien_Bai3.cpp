#include <iostream>
#include <math.h>

using namespace std;

void DieuKienNhap(int &n)
{
    do
    {
        cin >> n;
        if (n <= 2 || n > 50)
        {
            cout << "Khong thoa man, nhap lai: ";
        }
    } while (n <= 2 || n > 50);
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

bool CheckPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

void FixLuckyNumber(int a[], int n)
{
    /*
    - Neu so dau vao >=10 thi kiem tra tong cua no
    - Neu so dau vao <10 thi kiem tra luon
    */
    int so;
    int sum;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 10)
        {
            sum = 0;
            for (int j = a[i]; j > 0; j = j / 10)
            {
                so = j % 10;
                sum += so;
            }
            if (CheckPrime(sum))
            {
                a[i] = -1;
            }
        }
        else
        {
            if (CheckPrime(a[i]))
            {
                a[i] = -1;
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
    cout << "Nhap cac phan tu: ";
    NhapMang(a, n);
    cout << "Mang ban dau: ";
    XuatMang(a, n);
    FixLuckyNumber(a, n);
    cout << "\nMang yeu cau: ";
    XuatMang(a, n);
    return 0;
}