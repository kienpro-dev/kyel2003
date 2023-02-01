// cấu trúc với phân số
// tính toán phân số, tối giản phan số
#include <iostream>

using namespace std;

struct PhanSo
{
    int tu;
    int mau;
};

void NhapPS(PhanSo &a, PhanSo &b);
void XuatPS(PhanSo ps);
PhanSo Cong(PhanSo a, PhanSo b);
PhanSo Tru(PhanSo a, PhanSo b);
PhanSo Nhan(PhanSo a, PhanSo b);
PhanSo Chia(PhanSo a, PhanSo b);
int UCLN(PhanSo ps);
PhanSo ToiGian(PhanSo ps);

int main()
{
    PhanSo a, b;
    NhapPS(a, b);
    XuatPS(a);
    XuatPS(b);
    PhanSo c = Cong(a, b);
    PhanSo c2 = ToiGian(c);
    cout << "Ket qua cong phan so: ";
    XuatPS(c2);
    PhanSo d = Tru(a, b);
    PhanSo d2 = ToiGian(d);
    cout << "Ket qua tru phan so: ";
    XuatPS(d2);
    PhanSo e = Nhan(a, b);
    PhanSo e2 = ToiGian(e);
    cout << "Ket qua nhan phan so: ";
    XuatPS(e2);
    PhanSo f = Chia(a, b);
    PhanSo f2 = ToiGian(f);
    cout << "Ket qua chia phan so: ";
    XuatPS(f2);
    return 0;
}

void NhapPS(PhanSo &a, PhanSo &b)
{
    cout << "Nhap tu  a: ";
    cin >> a.tu;
    cout << "Nhap mau a: ";
    do
    {
        cin >> a.mau;
        if (a.mau == 0)
        {
            cout << "Yeu cau nhap nau khac 0: ";
        }
    } while (a.mau == 0);
    cout << "Nhap tu  b: ";
    cin >> b.tu;
    cout << "Nhap mau b: ";
    do
    {
        cin >> b.mau;
        if (b.mau == 0)
        {
            cout << "Yeu cau nhap nau khac 0: ";
        }
    } while (b.mau == 0);
}

void XuatPS(PhanSo ps)
{
    cout << "Phan so " << ps.tu << "/" << ps.mau << endl;
}

PhanSo Cong(PhanSo a, PhanSo b)
{
    PhanSo c;
    c.tu = a.tu * b.mau + b.tu * a.mau;
    c.mau = a.mau * b.mau;
    return c;
}

PhanSo Tru(PhanSo a, PhanSo b)
{
    PhanSo c;
    c.tu = a.tu * b.mau - b.tu * a.mau;
    c.mau = a.mau * b.mau;
    return c;
}

PhanSo Nhan(PhanSo a, PhanSo b)
{
    PhanSo c;
    c.tu = a.tu * b.tu;
    c.mau = a.mau * b.mau;
    return c;
}

PhanSo Chia(PhanSo a, PhanSo b)
{
    PhanSo c;
    c.tu = a.tu * b.mau;
    c.mau = a.mau * b.tu;
    return c;
}

int UCLN(PhanSo ps)
{
    while (ps.tu != ps.mau)
    {
        if (ps.tu > ps.mau)
        {
            ps.tu -= ps.mau;
        }
        else
        {
            ps.mau -= ps.tu;
        }
    }
    return ps.tu;
}

PhanSo ToiGian(PhanSo ps)
{
    PhanSo psToiGian;
    psToiGian.tu = ps.tu / UCLN(ps);
    psToiGian.mau = ps.mau / UCLN(ps);
    return psToiGian;
}