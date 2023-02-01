//tinh s1 ,s2
#include<iostream>
#include<math.h>

using namespace std;

int Kiemtra();
double Tinhtoan1(int n);
double Tinhtoan2(int x, int n);

int Kiemtra()
{
    int x;
    while(x<1)
    {
        cin >> x;
        if(x<1)
        {
            cout <<"Nhao sai!!Yeu cau nhap lai:"<<endl;
        }
    }
    return x;
}

double Tinhtoan1(int n)
{
    cout << "S(n)=1 + 1/1+2 + 1/1+2+3 + .... +1/1+2+3+n";
    double tong=0, mau=0;
    for (int i=1;i<=n;i++)
    {
        mau+=i;
        tong+=1.0/mau;
    }
    return tong;
}

double Tinhtoan2(int x,int n)
{
    cout << "S(x,n)=x + x^2/1+2 + x^3/1+2+3 + .... +x^n/1+2+3+n";
    double tong=0, mau=0;
    for (int i=1;i<=n;i++)
    {
        mau+=i;
        tong+=1.0*pow(x,i)/mau;
    }
    return tong;
}

int main()
{
    string s;
    cout <<"Nhap bieu thuc:";
    cin >> s;
    int n;
    cout <<"Nhap n:";
    n=Kiemtra();
    if (s=="s1")
    {
        double kq1=Tinhtoan1(n);
        cout <<"Ket qua la:" <<kq1;
    }
    else if (s=="s2")
    {
        int x;
        cout <<"Nhap x:";
        cin >> x;
        double kq2=Tinhtoan2(x,n);
        cout <<"Ket qua la:" <<kq2;
    }
    return 0;
}