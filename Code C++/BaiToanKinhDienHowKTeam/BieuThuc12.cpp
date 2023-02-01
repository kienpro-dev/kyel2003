// Tinh S(n)=1 + 1/2! + 1/3! + ... + 1/n! (n>0)
#include<iostream>

using namespace std;

int CheckInput();
double Tinh(int n);
int CheckInput()
{
    int x;
    while (x<=0)
    {
        cin >> x;
        if(x<=0)
        {
            cout << "Yeu cau nhap x>0:";
        }
    }
    return x;
}

double Tinh(int n)
{
    double tong=0;
    int gt=1;
    for(int i=1;i<=n;i++)
    {
        gt*=i;
        tong+=(1.0/gt);
    }
    return tong;
}

int main()
{
    int n;
    cout << "Nhap n: ";
    n=CheckInput();
    double kq=Tinh(n);
    cout << "Ket qua S(n) = "<<kq;
    return 0;
}