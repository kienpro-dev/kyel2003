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

void ThemPhanTu(int a[], int &n, int index, int val)
{
    for (int i = n; i > index; i--)
    {
        a[i] = a[i - 1];
    }
    a[index] = val;
    n++;
}

void ThemPhanTuTheoDieuKien(int a[], int &n, int val)
{
    /*Dieu kien:
    - Them phan tu vao sau so am dau tien cua mang
    - Neu mang khong co so am them vao cuoi mang
    */
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            ThemPhanTu(a, n, i + 1, val);
            break;
        }
        else
        {
            count++;
        }
    }
    if (count == n)
    {
        ThemPhanTu(a, n, n, val);
    }
}

void SapXepTangDan(int a[], int iStart, int iEnd)
{
    for (int i = iStart; i < iEnd; i++)
    {
        for (int j = i + 1; j <= iEnd; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void SapXepGiamDan(int a[], int iStart, int iEnd)
{
    for (int i = iStart; i < iEnd; i++)
    {
        for (int j = i + 1; j <= iEnd; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void SapXepTheoDieuKien(int a[], int n)
{
    /*Dieu kien:
    - So max cho len dau mang
    - So min cho xuong cuoi mang
    - Cac so con lai sx tang dan
    */
    SapXepGiamDan(a,0,n-1);
    int iMax = 1, iMin = n - 2;
    int i = 1;
    // tim chi so cua so max cuoi
    while (a[i] == a[0])
    {
        i++;
        iMax = i;
    }
    // tim chi so cua so min dau tien
    while (a[iMin] == a[n - 1])
    {
        iMin--;
    }
    SapXepTangDan(a,iMax,iMin);
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
    int x;
    cout << "\nNhap so muon chen: ";
    cin >> x;
    ThemPhanTuTheoDieuKien(a, n, x);
    cout << "Mang yeu cau (a): ";
    XuatMang(a, n);
    SapXepTheoDieuKien(a, n);
    cout << "\nMang yeu cau (b): ";
    XuatMang(a, n);
    return 0;
}