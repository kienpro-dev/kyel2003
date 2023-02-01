//Tinh S(n)=1/2 + 2/3 + 3/4 + ... + n/(n+1)   (n>0)
#include<iostream>

using namespace std;

int CheckInput();
double Tinh(int n);

int CheckInput()
{
    int x;
    while(x<=0)
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
    for(int i=1;i<=n;i++)
    {
        tong+=(i*1.0/(i+1));
    }
    return tong;
}

int main()
{
    int n;
    cout << "Nhap n:";
    n=CheckInput();
    double kq=Tinh(n);
    cout << "Bieu thuc S(n) = "<<kq;
    return 0;
}