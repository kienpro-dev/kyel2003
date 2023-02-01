//Tinh S(n)= 1^2 + 2^2 + 3^2 + ... + n^2 (n>0)
#include<iostream>
#include<math.h>

using namespace std;

int CheckInput();
int Tinh(int n);

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

int Tinh(int n)
{
    int tong=0;
    for(int i=1;i<=n;i++)
    {
        tong+=pow(i,2);
    }
    return tong;
}

int main()
{
    int n;
    cout << "Nhap n:";
    n=CheckInput();
    int kq=Tinh(n);
    cout << "Bieu Thuc S(n) = "<<kq;
    return 0;
}