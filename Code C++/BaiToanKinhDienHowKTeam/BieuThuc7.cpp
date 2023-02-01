//Tinh S(n)=1 + 1.2 + 1.2.3 +...+ 1.2.3...n    (n>0)
#include<iostream>

using namespace std;

int checkInput();
int Tinh(int n);
int checkInput()
{
    int x;
    while(x<=0)
    {
        cin >> x;
        if(x<=0)
        {
            cout<<"Yeu cau nhap x>0:";
        }
    }
    return x;
}

int Tinh(int n)
{
    int tong=0, tich=1;
    for(int i=1;i<=n;i++)
    {
        tich*=i;
        tong+=tich;
    }
    return tong;
}

int main()
{
    int n;
    cout << "Nhap n: ";
    n=checkInput();
    int kq=Tinh(n);
    cout << "Ket qua S(n) = "<<kq;
    return 0;
}