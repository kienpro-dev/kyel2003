// Tinh S(n)= 1 + (1+2)/2! + (1+2+3)/3! + ... + (1+2+3+..+n)/n! (n>0)
#include <iostream>

using namespace std;

int CheckInput();
double Tinh(int n);

int CheckInput()
{
    int x;
    while (x <= 0)
    {
        cin >> x;
        if (x <= 0)
        {
            cout << "Yeu cau nhap x>0:";
        }
    }
    return x;
}

double Tinh(int n)
{
    double tong = 0;
    int tu = 0, mau = 1;
    for (int i = 1; i <= n; i++)
    {
        tu += i;
        mau *= i;
        tong += ((tu * 1.0) / mau);
    }
    return tong;
}

int main()
{
    int n;
    cout << "Nhap n: ";
    n = CheckInput();
    double kq = Tinh(n);
    cout << "Ket qua S(n) = " << kq;
    return 0;
}